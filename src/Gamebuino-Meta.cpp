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
  dac.begin(MCP4725address);
  dac.setVoltage(0, false);

  mcp.begin(MCP23017address);
  mcp.pinMode(CSTFTPIN, OUTPUT);
  mcp.digitalWrite(CSTFTPIN, LOW);
  myLED.begin(&mcp);
  timePerFrame = 40; //25 FPS
  frameEndFlag = true;
  buttons.begin(&mcp);
  tft.init();
  tft.setRotation(Rotation::left);	
  gbptr = this;
};



void Gamebuino::begin() {
  WiFi.mode(WIFI_OFF); 
  Serial.begin(115200);
  myLED.setRGB(0,0,0);
  drawXBitmap(tft, 30,24, g_espboy, 68, 64);
  for(uint8_t i=0; i<200; i++) {dac.setVoltage(i*10, false); delay(10);}
  dac.setVoltage(4095, true);
  
  myLED.setRGB(5,0,0); delay(200);
  myLED.setRGB(0,5,0); delay(200);
  myLED.setRGB(0,0,5); delay(200);
  myLED.setRGB(0,0,0);
  
  save.begin();
  
  display.fill(Color::black);
  display.fontSize = SYSTEM_DEFAULT_FONT_SIZE;
  
  updateDisplay();
  
  startScreen();
  sound.begin();	
  pickRandomSeed();
  display.clear();
	
  inited = true;
}


void Gamebuino::drawXBitmap(Graphics& g, int16_t x, int16_t y, const uint8_t *bitmap, int16_t w, int16_t h){
  int32_t i, j, byteWidth = (w + 7) / 8;
  g.setColor(YELLOW);
  for (j = 0; j < h; j++) {
    for (i = 0; i < w; i++ ) {
      if (pgm_read_byte(bitmap + j * byteWidth + i / 8) & (1 << (i & 7))) {
        g.drawPixel(x + i, y + j);
      }
    }
  }
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


} // namespace Gamebuino_Meta


Gamebuino gb;

