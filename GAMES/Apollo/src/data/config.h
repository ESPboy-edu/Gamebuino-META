#pragma once

#include <Arduino.h>

const uint8_t LEFT_POT_PIN  = A0;
const uint8_t RIGHT_POT_PIN = A0;

const uint8_t SCREEN_WIDTH  = 128;
const uint8_t SCREEN_HEIGHT = 128;

const uint8_t  STARTING_LIVES = 2;
const uint16_t STARTING_FUEL  = 8000;

const float_t APOLLO_INIT_VY    = .6f;
const float_t APOLLO_POWER      = .01f;
const uint8_t APOLLO_FUEL_DECAY = 10;

const float_t GRAVITY = .003f;