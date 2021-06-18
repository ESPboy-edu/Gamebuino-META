#pragma once

#include <Arduino.h>

class Camera {

    private:

        float_t _fx;
        float_t _fy;
        float_t _fz;
        float_t _fk;

        float_t _x;
        float_t _y;
        float_t _z;

        float_t _ox;
        float_t _oy;
        float_t _w;
        float_t _h;

        bool _focusing;

        void _focus();
    
    public:

        float_t ox();
        float_t oy();
        float_t w();
        float_t h();
        float_t zoom();

        void begin(float_t x, float_t y);
        void focus(float_t x, float_t y, float_t zoom, float_t easing=.2f);
        void loop();

};