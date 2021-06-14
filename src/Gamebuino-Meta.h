/*
This file is part of the Gamebuino-Meta library,
Copyright (c) Aadalie 2014, 2016-2017

This is free software: you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License (LGPL)
as published by the Free Software Foundation, either version 3 of
the License, or (at your option) any later version.

This is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU Lesser General Public License (LGPL) for more details.

You should have received a copy of the GNU Lesser General Public
License (LGPL) along with the library.
If not, see <http://www.gnu.org/licenses/>.

Authors:
 - Aurelien Rodot
 - Sorunome
*/

#ifndef _GAMEBUINO_META_H_
#define	_GAMEBUINO_META_H_

#include "Arduino.h"
#include "config/config.h"

#if USE_SDFAT
//#include <FS.h>
//#include <SD.h>
//#include <SPI.h>
#include <LittleFS.h>
#endif

#include "utility/Buttons.h"
#include "utility/Sound.h"
#include "utility/Gui.h"
#include "utility/MetaMode.h"
#include "utility/Collide.h"

//#include <Adafruit_NeoPixel.h>
#include "utility/Display-ST7735.h"
#include "utility/Graphics.h"
#include "utility/Image.h"
#include "utility/Language.h"
#include "utility/Save.h"
#include <Adafruit_MCP23017.h> //to control buttons
#include <Adafruit_MCP4725.h>  //to control the LCD display backlit
#include <ESP8266WiFi.h>       //to control WiFi
#include "utility/ESPboyLED.h"


#define MCP23017address 0 // actually it's 0x20 but in <Adafruit_MCP23017.h> lib there is (x|0x20) :)
#define MCP4725address  0x60

#define CSTFTPIN       8 //Chip Select pin for LCD (it's on the MCP23017 GPIO expander GPIO8)

namespace Gamebuino_Meta {
#define NEOPIX_PIN	(D4)
#define BAT_PIN		(A0)
#define SOUNDPIN    (D3)

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
	Save settings;
	Language language;
	Gui gui;
	MetaMode metaMode;
	Collide collide;
	ESPboyLED myLED;

    Gamebuino();
	void begin();
	void startScreen();
	void titleScreen();
	bool update();
	void waitForUpdate();
	void updateDisplay();
	uint8_t startMenuTimer;
	uint32_t frameCount;
	void setFrameRate(uint8_t fps);
	void pickRandomSeed();
	
	uint8_t getCpuLoad();
	uint16_t getFreeRam();
	uint32_t frameDurationMicros;
	uint32_t frameStartMicros;
	bool frameEndFlag;
	
	void checkHomeMenu();
	void homeMenu();
	
	void changeGame();
	void getDefaultName(char* string);
	
	bool collidePointRect(int16_t x1, int16_t y1 ,int16_t x2 ,int16_t y2, int16_t w, int16_t h);  // deprecated. Use collide.pointRect() instead
	bool collideRectRect(int16_t x1, int16_t y1, int16_t w1, int16_t h1 ,int16_t x2 ,int16_t y2, int16_t w2, int16_t h2);  // deprecated. Use collide.rectRect() instead
	bool collideBitmapBitmap(int16_t x1, int16_t y1, const uint8_t* b1, int16_t x2, int16_t y2, const uint8_t* b2);
	
	Color createColor(uint8_t r, uint8_t g, uint8_t b);
	uint8_t getTimePerFrame();
	
	void setScreenRotation(Rotation r);
	Rotation getScreenRotation();
	
	// so that we know when the object is actually initialized
	// importent for proper detection of what gb.display.width() and gb.display.height() return outside any function
	// unfortunatelly the arduino platform.txt doesn't allow us to change the order of object files, which would be the prefered way
	// as the Gamebuino constructor would be called then first, for sure
	
	bool inited = false;
	bool sdInited = false;
private:
    //Adafruit_NeoPixel neoPixels = Adafruit_NeoPixel(1, NEOPIX_PIN, NEO_GRB + NEO_KHZ800);
	uint8_t timePerFrame;
	uint32_t nextFrameMillis;
	void drawLogo(Graphics& g, int8_t x, int8_t y, uint8_t scale);
	void drawESPboyLogo(Graphics& g);
	int16_t framesDisplayRecording = -1;
#ifdef FOLDER_NAME
	const char folder_name[sizeof FOLDER_NAME] = FOLDER_NAME;
#else
	char folder_name[sizeof __SKETCH_NAME__ - 4];
#endif
};

extern const uint16_t buttonsIconsData[];
extern const uint16_t arrowsIconsData[];

} // namespace Gamebuino_Meta

#ifdef GAMEBUINO_COMPAT_MODE
#include <Gamebuino-Compat.h>
#else
#if AUTOCREATE_OBJECT
using Gamebuino_Meta::Gamebuino;
extern Gamebuino gb;
#endif
#endif

#endif	// _GAMEBUINO_META_H_
