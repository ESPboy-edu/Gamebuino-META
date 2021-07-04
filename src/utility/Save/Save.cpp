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
  EEPROMr = new EEPROM_Rotate();
  uint32_t numOfBlocks=SAVEBLOCK_NUM*4;
  EEPROMr->rotate(false);
  EEPROMr->begin(4096);
  EEPROMr->get(0, getCH1);
  EEPROMr->get(1, getCH2);
  if (getCH1 != 'G' || getCH2 != 'U'){
      for(uint16_t i=2; i<numOfBlocks*4; i++)
        EEPROMr->put(i, (uint8_t)0);
        EEPROMr->put(0, 'G');
        EEPROMr->put(1, 'U');
        EEPROMr->commit();  }   
};


void Save::config(){};


int32_t Save::get(uint16_t i) {
  uint32_t num;
  EEPROMr->get((i*4)+2, num);
  return (num);
};

void Save::get(uint16_t i, char *num) {
  for(uint8_t j=0; j<strlen(num)+1; j++)
    EEPROMr->get((i*(sizeof(num)+1))+2+j, num[j]);  
}

bool Save::set(uint16_t i, int32_t num) {
  EEPROMr->put((i*4)+2, num);
  EEPROMr->commit();
  return true;
};

bool Save::set(uint16_t i, char* num) {
  for(uint8_t j=0; j<strlen(num)+1; j++) 
    EEPROMr->put((i*(sizeof(num)+1))+2+j, num[j]);
  EEPROMr->commit();
  return true;
};


void Save::del(uint16_t i) {
 uint32_t num=255;
  EEPROMr->put((i*4)+2, 0);
  EEPROMr->commit();
};

} // Gamebuino_Meta
