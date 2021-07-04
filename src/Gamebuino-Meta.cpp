/*
This file is part of the Gamebuino-Meta library,
Copyright (c) Aadalie 2014, 2016-2017
 - Aurelien Rodot
 - Sorunome
*/

#include "Gamebuino-Meta.h"


const uint8_t PROGMEM gamebuinoLogo[] = {80,10,
	0b00111100,0b00111111,0b00111111,0b11110011,0b11110011,0b11110011,0b00110011,0b00111111,0b00111111,0b00011100,
	0b00111100,0b00111111,0b00111111,0b11110011,0b11110011,0b11110011,0b00110011,0b00111111,0b00111111,0b00100110,
	0b00110000,0b00110011,0b00110011,0b00110011,0b00000011,0b00110011,0b00110011,0b00110011,0b00110011,0b00100110,
	0b00110000,0b00110011,0b00110011,0b00110011,0b00000011,0b00110011,0b00110011,0b00110011,0b00110011,0b00101010,
	0b00110011,0b00111111,0b00110011,0b00110011,0b11110011,0b11000011,0b00110011,0b00110011,0b00110011,0b00011100,
	0b00110011,0b00111111,0b00110011,0b00110011,0b11110011,0b11000011,0b00110011,0b00110011,0b00110011,0b00000000,
	0b00110011,0b00110011,0b00110011,0b00110011,0b00000011,0b00110011,0b00110011,0b00110011,0b00110011,0b00000000,
	0b00110011,0b00110011,0b00110011,0b00110011,0b00000011,0b00110011,0b00110011,0b00110011,0b00110011,0b00000000,
	0b00111111,0b00110011,0b00110011,0b00110011,0b11110011,0b11110011,0b11110011,0b00110011,0b00111111,0b00000000,
	0b00111111,0b00110011,0b00110011,0b00110011,0b11110011,0b11110011,0b11110011,0b00110011,0b00111111,0b00000000,
};


namespace Gamebuino_Meta {

Gamebuino* gbptr = nullptr;

Gamebuino::Gamebuino(){
};



void Gamebuino::begin() {
   WiFi.mode(WIFI_OFF); 
   //Serial.begin(115200);
   
  gbptr = this;
  timePerFrame = 40; //25 FPS
  frameEndFlag = true;
   
  tft.init();
  tft.setRotation(Rotation::left);	
  mcp.begin(MCP23017address);
  mcp.pinMode(CSTFTPIN, OUTPUT);
  mcp.digitalWrite(CSTFTPIN, LOW);
  
  dac.begin(MCP4725address);
  dac.setVoltage(0, false);
  myLED.begin(&mcp);
  buttons.begin(&mcp);
   
  myLED.setRGB(0,0,0);
  tft.fillScreen(TFT_BLACK);
  tft.drawXBitmap(30,24, g_espboy, 68, 64, TFT_YELLOW);

  for(uint8_t i=0; i<200; i++) {dac.setVoltage(i*10, false); delay(10);}
  dac.setVoltage(4095, true);
  /*
  //Check OTA2
  if (getKeys()&PAD_ACT || getKeys()&PAD_ESC) { 
    display.delFrameHandler(); 
    terminalGUIobj = new ESPboyTerminalGUI(&tft._tft, &mcp);
    OTA2obj = new ESPboyOTA2(terminalGUIobj);
    OTA2obj -> checkOTA();
  }
  */
  myLED.setRGB(5,0,0); delay(200);
  myLED.setRGB(0,5,0); delay(200);
  myLED.setRGB(0,0,5); delay(200);
  myLED.setRGB(0,0,0);
  
  display.fill(Color::black);
  display.fontSize = SYSTEM_DEFAULT_FONT_SIZE;
  
  updateDisplay();
  
  startScreen();
  sound.begin();
  save.begin();	
  display.clear();
}


void Gamebuino::getDefaultName(char* string){
   strcpy(string, "name");
}


uint16_t Gamebuino::createColor(uint8_t r, uint8_t g, uint8_t b) {
    r = r >> 3;    
    g = g >> 2;     
    b = b >> 3;   
	uint16_t rr = r & 0xF800;
    uint16_t gg = g & 0x07E0;
    uint16_t bb = b & 0x001F;
    return (r | g | b);
}



void Gamebuino::drawLogo(Graphics& g, int8_t x, int8_t y, uint8_t scale) {
	Image logo(78, 10, ColorMode::index);
	logo.clear();
	logo.drawBitmap(-2, 0, gamebuinoLogo);
	g.drawImage(x*scale, y*scale, logo, 78*scale, 10*scale);
}



void Gamebuino::startScreen(){
	int8_t i = 24;
	update();
	while (i) {
		while(!update());
		i--;
		display.clear();
		display.fontSize = SYSTEM_DEFAULT_FONT_SIZE;
		drawLogo(display, (display._width-78)/2, min(0, i-10), 1);
	}
	update();
}


bool Gamebuino::update() {
    delay(0);
	if (((nextFrameMillis - millis()) > timePerFrame) && frameEndFlag) { //if time to render a new frame is reached and the frame end has ran once
		nextFrameMillis = millis() + timePerFrame;
		frameCount++;
		frameEndFlag = false;
		frameStartMicros = micros();
		buttons.update();
		return true;
	}
	
	if (frameEndFlag) { return false; }
	sound.update(); // update sound stuff once per frame
    updateDisplay();
	frameDurationMicros = micros() - frameStartMicros;
	frameEndFlag = true; // we are at end of frame
	return false;
}


void Gamebuino::waitForUpdate() {
	while(!update());
}

void Gamebuino::updateDisplay() {
	tft.drawImage(0, 0, (Image&)display, 128, 128); //send the buffer to the screen
}

void Gamebuino::setFrameRate(uint8_t fps) {
	timePerFrame = 1000 / fps;
}

void Gamebuino::pickRandomSeed(){}

uint8_t Gamebuino::getCpuLoad(){
	return(frameDurationMicros/(10*timePerFrame));
}

uint16_t Gamebuino::getFreeRam() {
	return ESP.getFreeHeap();
}


uint8_t Gamebuino::getTimePerFrame() {
	return timePerFrame;
}

void Gamebuino::setScreenRotation(Rotation r) {
	tft.setRotation(r);
}

Rotation Gamebuino::getScreenRotation() {
	return tft.getRotation();
}

uint8_t Gamebuino::getKeys() { return (~mcp.readGPIOAB() & 255); }


} // namespace Gamebuino_Meta


Gamebuino gb;

