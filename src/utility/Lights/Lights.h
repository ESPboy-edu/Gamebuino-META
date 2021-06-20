/*
Lights class for ported Gamebuino META lib
for www.ESPboy.com project by RomanS
*/

#include <Arduino.h>
#include "../ESPboyLED.h"
#include "../../Gamebuino-Meta.h"

#ifndef Lghts
#define Lghts

class Lights{

private:
  ESPboyLED *LEDld;

public: 
  Lights (ESPboyLED *localLED);
  void clear();
  void fill(Gamebuino_Meta::Color clrSet);
  
};  

#endif
