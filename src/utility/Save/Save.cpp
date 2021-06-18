/*
This file is part of the Gamebuino-Meta library,
Copyright (c) Aadalie 2017

Authors:
 - Sorunome
*/

#include "Save.h"


namespace Gamebuino_Meta {

void Save::begin() {
 char getCH1, getCH2;
  EEPROM.begin(SAVEBLOCK_NUM*4+2);
  uint32_t numOfBlocks=SAVEBLOCK_NUM*4;
  EEPROM.get(0, getCH1);
  EEPROM.get(1, getCH2);
  if (getCH1 != 'G' || getCH2 != 'U'){
      for(uint16_t i=2; i<numOfBlocks*4; i++)
        EEPROM.put(i, (uint8_t)0);
        EEPROM.put(0, 'G');
        EEPROM.put(1, 'U');
        EEPROM.commit();  }   
};


void Save::config(){};


int32_t Save::get(uint16_t i) {
 uint32_t num;
  EEPROM.get((i*4)+2, num);
  return (num);
};


bool Save::set(uint16_t i, int32_t num) {
  EEPROM.put((i*4)+2, num);
  EEPROM.commit();
  return true;
};


void Save::del(uint16_t i) {
 uint32_t num=255;
  EEPROM.put((i*4)+2, 0);
  EEPROM.commit();
};

} // Gamebuino_Meta
