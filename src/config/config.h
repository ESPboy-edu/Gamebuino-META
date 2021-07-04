#ifndef _CONFIG_GAMEBUINO_META_
#define _CONFIG_GAMEBUINO_META_

#include "config-default.h"
#include <Arduino.h>

#define DISPLAY_MODE_RGB565 0
#define DISPLAY_MODE_INDEX 1
#define DISPLAY_MODE_INDEX_HALFRES 2
#define DISPLAY_MODE_INDEX_128x128 3

#ifndef DISPLAY_CONSTRUCTOR
#if DISPLAY_MODE == DISPLAY_MODE_RGB565
#define DISPLAY_CONSTRUCTOR Image(80, 64, ColorMode::rgb565)
#endif
#if DISPLAY_MODE == DISPLAY_MODE_INDEX
#define DISPLAY_CONSTRUCTOR Image(160, 128, ColorMode::index)
#endif
#if DISPLAY_MODE == DISPLAY_MODE_INDEX_HALFRES
#define DISPLAY_CONSTRUCTOR Image(80, 64, ColorMode::index)
#endif
#if DISPLAY_MODE == DISPLAY_MODE_INDEX_128x128
#define DISPLAY_CONSTRUCTOR Image(128, 128, ColorMode::index)
#endif
#endif // DISPLAY_CONSTRUCTOR

#ifndef DISPLAY_CONSTRUCTOR
#error "Define correct DISPLAY MODE of your skech in Arduino IDE ESPboy_GamebuinoMETA libraries folder: [..ESPboy_GamebuinoMETA/src/Gamebuino-Meta.h]"
#endif

//#if DISPLAY_MODE == DISPLAY_MODE_INDEX
//#define SYSTEM_DEFAULT_FONT_SIZE 2
//#else
#define SYSTEM_DEFAULT_FONT_SIZE 1
//#endif

#include <stdlib.h>
#include <malloc.h>
#define gb_malloc(x) malloc(x)
#define gb_free(x) free(x)
#define gb_memalign(x, y) memalign(x, y)


#ifndef constrain
#define constrain(amt,low,high) ((amt)<(low)?(low):((amt)>(high)?(high):(amt)))
#endif

#ifndef abs
#define abs(x) ((x)>0?(x):-(x))
#endif

#ifdef max
#undef max
#endif

#ifdef min
#undef min
#endif

#define max(a,b) ((a)>(b)?(a):(b))
#define min(x,y) ((x)<(y)?(x):(y))

#define SETTING_VOLUME 0
#define SETTING_VOLUME_MUTE 1
#define SETTING_DEFAULTNAME 2
#define SETTING_LANGUAGE 3
#define SETTING_SETUP 5

#endif // _CONFIG_GAMEBUINO_META_
