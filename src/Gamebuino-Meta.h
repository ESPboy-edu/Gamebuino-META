/*
This file is part of the Gamebuino-Meta library,
Copyright (c) Aadalie 2014, 2016-2017

Authors:
 - Aurelien Rodot
 - Sorunome
*/


#ifndef _GAMEBUINO_META_H_
#define	_GAMEBUINO_META_H_

//!!!!!!!!!!!!!
//UNCOMMENT DEFAULT DISPLAY MODE or #DEFINE in your sketch before #include <Gamebuino-Meta.h>! one of the following:

//#define DISPLAY_MODE DISPLAY_MODE_RGB565
//#define DISPLAY_MODE DISPLAY_MODE_INDEX
//#define DISPLAY_MODE DISPLAY_MODE_INDEX_HALFRES
//#define DISPLAY_MODE DISPLAY_MODE_INDEX_128x128



#include "Arduino.h"
#include "config/config.h"

#include "utility/Buttons.h"
#include "utility/Sound.h"
#include "utility/Gui.h"
#include "utility/Collide.h"

#include "utility/Display-ST7735.h"
#include "utility/Graphics.h"
#include "utility/Image.h"
#include "utility/Language.h"
#include "utility/Save.h"

#include "utility/ESPboyLED.h"
#include "utility/ESPboyLogo.h"
#include <Adafruit_MCP23017.h> 
#include <Adafruit_MCP4725.h>
#include <ESP8266WiFi.h> 


#define MCP23017address 0 
#define MCP4725address  0x60
#define CSTFTPIN        8 


namespace Gamebuino_Meta {

#define wrap(i, imax) ((imax+i)%(imax))

class Gamebuino {
public:
    Adafruit_MCP23017 mcp;
    Adafruit_MCP4725 dac;
	Buttons buttons;
	Image display = DISPLAY_CONSTRUCTOR;
	Sound sound;
	Display_ST7735 tft = Display_ST7735(-1, 16);
	Image lights = Image(2, 4, ColorMode::rgb565);
	Save save;
	Language language;
	Gui gui;
	Collide collide;
	ESPboyLED myLED;
    
    Gamebuino();
    
    bool frameEndFlag;
	uint8_t getCpuLoad();
    uint8_t getTimePerFrame();
	uint16_t getFreeRam();
	uint32_t frameCount;
	uint32_t frameDurationMicros;
	uint32_t frameStartMicros;
    
	void begin();
	void startScreen();
	bool update();
	void waitForUpdate();
	void updateDisplay();
	void setFrameRate(uint8_t fps);
	void pickRandomSeed();
	
	void setScreenRotation(Rotation r);
	Rotation getScreenRotation();
	
	bool inited = false;
	
private:
    uint8_t timePerFrame;
	uint32_t nextFrameMillis;
    void drawXBitmap(Graphics& g, int16_t x, int16_t y, const uint8_t *bitmap, int16_t w, int16_t h);
	void drawLogo(Graphics& g, int8_t x, int8_t y, uint8_t scale);
	void drawESPboyLogo(Graphics& g);
};
} // namespace Gamebuino_Meta


using Gamebuino_Meta::Gamebuino;
extern Gamebuino gb;

#endif	// _GAMEBUINO_META_H_
