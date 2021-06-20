/*
Lights class for ported Gamebuino META lib
for www.ESPboy.com project by RomanS
*/

#include "Lights.h"


Lights::Lights(ESPboyLED *localLED){
  LEDld = localLED;
};


void Lights::clear(){
  LEDld -> setRGB (0,0,0);
};


void Lights::fill(Gamebuino_Meta::Color clrSet){
  uint8_t r = ((uint16_t)clrSet >> 8) & 0xF8; r |= (r >> 5); r>>=2;
  uint8_t g = ((uint16_t)clrSet >> 3) & 0xFC; g |= (g >> 6); g>>=2;
  uint8_t b = ((uint16_t)clrSet << 3) & 0xF8; b |= (b >> 5); b>>=2;
  LEDld -> setRGB (r,g,b);
};