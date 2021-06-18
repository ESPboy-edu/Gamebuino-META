#include "Pot.h"

void Pot::begin(uint8_t pin) {

    pinMode(this->_pin = pin, INPUT);
    _value = 0;

}

void Pot::read() {

    _value = analogRead(_pin);

}

uint16_t Pot::signal() {

    return _value;

}