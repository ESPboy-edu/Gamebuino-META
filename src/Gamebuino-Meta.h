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

#ifndef DISPLAY_MODE
//#define DISPLAY_MODE DISPLAY_MODE_RGB565
//#define DISPLAY_MODE DISPLAY_MODE_INDEX
//#define DISPLAY_MODE DISPLAY_MODE_INDEX_HALFRES
//#define DISPLAY_MODE DISPLAY_MODE_INDEX_128x128
#endif

#ifndef DISPLAY_MODE
#error DISPLAY MODE UNDEFINED!
#endif

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
#include "utility/Lights.h"

#include "utility/ESPboyLED.h"
#include "utility/ESPboyLogo.h"
#include <Adafruit_MCP23017.h> 
#include <Adafruit_MCP4725.h>
#include <ESP8266WiFi.h> 

//#include "utility/ESPboyLib/ESPboyOTA2.h"
//#include "utility/ESPboyLib/ESPboyTerminalGUI.h"


namespace Gamebuino_Meta {

#define PAD_LEFT        0x01
#define PAD_UP          0x02
#define PAD_DOWN        0x04
#define PAD_RIGHT       0x08
#define PAD_ACT         0x10
#define PAD_ESC         0x20
#define PAD_LFT         0x40
#define PAD_RGT         0x80
#define PAD_ANY         0xff

#define MCP23017address 0 
#define MCP4725address  0x60
#define CSTFTPIN        8 


#define wrap(i, imax) ((imax+i)%(imax))

class Gamebuino {
public:
	Display_ST7735 tft;
    Image display = DISPLAY_CONSTRUCTOR;
    Gui gui;
    Adafruit_MCP23017 mcp;
    Adafruit_MCP4725 dac;
    ESPboyLED myLED;
    Lights lights = Lights(&myLED);
	Buttons buttons;
	Sound sound;
	Save save;
	Language language;
	Collide collide;
	//ESPboyTerminalGUI *terminalGUIobj = NULL;
    //ESPboyOTA2 *OTA2obj = NULL;
    
    Gamebuino();
    
    uint8_t getKeys();
    bool frameEndFlag;
	uint8_t getCpuLoad();
    uint8_t getTimePerFrame();
	uint16_t getFreeRam();
	uint32_t frameCount;
	uint32_t frameDurationMicros;
	uint32_t frameStartMicros;
    
    void getDefaultName(char* string);
	void begin();
	void startScreen();
	bool update();
	void waitForUpdate();
	void updateDisplay();
	void setFrameRate(uint8_t fps);
	void pickRandomSeed();
	uint16_t createColor(uint8_t r, uint8_t g, uint8_t b);
	
	void setScreenRotation(Rotation r);
	Rotation getScreenRotation();

	
private:
    uint8_t timePerFrame;
	uint32_t nextFrameMillis;
	void drawLogo(Graphics& g, int8_t x, int8_t y, uint8_t scale);
	void drawESPboyLogo(Graphics& g);
};
} // namespace Gamebuino_Meta


using Gamebuino_Meta::Gamebuino;
extern Gamebuino gb;

#endif	// _GAMEBUINO_META_H_
