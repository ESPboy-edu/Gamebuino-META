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

#include "Sound.h"


namespace Gamebuino_Meta {


bool muted = false;

int8_t Sound::play() { return(true); }

void Sound::play(char *) {}

void Sound::fx() {}

void Sound::update() {}

void Sound::tone(uint32_t frequency, int32_t duration) {
    ::tone (SOUNDPIN, frequency, duration);
}

void Sound::stop(uint8_t&) {
    ::noTone(SOUNDPIN);
}

void Sound::playOK() {
   ::tone (SOUNDPIN, 200, 50);
   delay(50);
   ::tone (SOUNDPIN, 400, 50);
}

void Sound::playCancel() {
   ::tone (SOUNDPIN, 200, 50);
   delay(50);
   ::tone (SOUNDPIN, 100, 50);
}

void Sound::playTick() {
  ::tone (SOUNDPIN, 50, 50);
}


void Sound::loop() {}

void Sound::mute() {
	muted = true;
}

void Sound::unmute() {
	muted = false;
}

bool Sound::isMute() {
	return muted;
}


bool Sound::isPlaying(int8_t i) {
  return false;
}

void Sound::setVolume(uint8_t volume) {
}

uint8_t Sound::getVolume() {
	return 10;
}

uint32_t Sound::getPos(int8_t i) {
   return(0);
}


void Sound::begin() {
   pinMode(D3, OUTPUT);
}

} // Gamebuino_Meta
