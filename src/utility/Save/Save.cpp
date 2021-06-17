/*
This file is part of the Gamebuino-Meta library,
Copyright (c) Aadalie 2017

Authors:
 - Sorunome
*/

#include "Save.h"
#include "../../Gamebuino-Meta.h"
#include <ESP_EEPROM.h>

namespace Gamebuino_Meta {

Save::Save() {
 char getCH1, getCH2;
  EEPROM.begin(SAVEBLOCK_NUM*4+2);
  uint32_t numOfBlocks=SAVEBLOCK_NUM*4;
  EEPROM.get(0, getCH1);
  EEPROM.get(1, getCH2);
  if (getCH1 != 'G' || getCH2 != 'U'){
      EEPROM.put(0, getCH1);
      EEPROM.put(1, getCH2);
      for(uint16_t i=0; i<numOfBlocks; i++)
        EEPROM.put(i+2, (uint8_t)0);
      EEPROM.commit();  
  }
}


void Save::config(){}


int32_t Save::get(uint16_t i) {
 uint32_t num;
  EEPROM.get((i*4)+2, num);
  return (num);
}


bool Save::set(uint16_t i, int32_t num) {
  EEPROM.put((i*4)+2, num);
  EEPROM.commit();
  return true;
}


void Save::del(uint16_t i) {
  EEPROM.put((i*4)+2, 0);
  EEPROM.commit();
}

} // Gamebuino_Meta
