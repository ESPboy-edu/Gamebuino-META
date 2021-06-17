/*
This file is part of the Gamebuino-Meta library,
Copyright (c) Aadalie 2017

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

#ifndef _GAMEBUINO_META_SOUND_H_
#define	_GAMEBUINO_META_SOUND_H_

#include "../../config/config.h"
#include "Sound_FX.h"


#define SOUNDPIN    (D3)

namespace Gamebuino_Meta {


class Sound {
public:
	void begin();
	int8_t play();

	void tone(uint32_t frequency, int32_t duration = 0);
	void playOK();
	void playCancel();
	void playTick();
	
	void fx();
	bool isPlaying(int8_t i);
	void update();
	void loop();
	void mute();
	void unmute();
	bool isMute();	
	void stop();
	
	void setVolume(uint8_t volume);
	uint8_t getVolume();
	uint32_t getPos(int8_t i);
};

} // namespace Gamebuino_Meta

#endif	// _GAMEBUINO_META_SOUND_H_
