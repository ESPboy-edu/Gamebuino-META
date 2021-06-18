#pragma once

#include <Arduino.h>

class Pot {

    private:

        uint8_t  _pin;
        uint16_t _value;

    public:
        
        uint16_t signal();

        void begin(uint8_t pin);
        void read();

};