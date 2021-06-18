/*
This file is part of the Gamebuino-Meta library,
Copyright (c) Aadalie 2017

Authors:
 - Sorunome
*/

#ifndef _GAMEBUINO_META_SAVE_H_
#define _GAMEBUINO_META_SAVE_H_

#include "../../config/config.h"
#include <ESP_EEPROM.h>

namespace Gamebuino_Meta {

class Save {
public:
	void begin();
	void config();
	int32_t get(uint16_t i);
	bool set(uint16_t i, int32_t num);
	void del(uint16_t i);
private:
    uint32_t numOfBlocks;
};

} // namsepace Gamebuino_Meta

#endif // _GAMEBUINO_META_SAVE_H_
