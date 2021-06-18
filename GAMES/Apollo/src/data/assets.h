#pragma once

#include <Gamebuino-Meta.h>

const Color COLOR_BLACK        = (Color) 0x0000; // #000000
const Color COLOR_DARK_GRAY    = (Color) 0x5acb; // #5a5a5a
const Color COLOR_GRAY         = (Color) 0xa514; // #a0a0a0
const Color COLOR_LIGHT_GRAY   = (Color) 0xdedb; // #d9d9d9
const Color COLOR_WHITE        = (Color) 0xffff; // #ffffff
const Color COLOR_STAR         = (Color) 0x6451; // #668888
const Color COLOR_GROUND       = (Color) 0x2339; // #2266cc
const Color COLOR_LANDING_ZONE = (Color) 0x967f; // #90ceff
const Color COLOR_DARK_SUCCESS = (Color) 0x058f; // #00b37c
const Color COLOR_SUCCESS      = (Color) 0x57f9; // #56ffcb
const Color COLOR_DARK_APOLLO  = (Color) 0xbdce; // #bbbb77
const Color COLOR_APOLLO       = (Color) 0xfff5; // #ffffaa
const Color COLOR_FLAME        = (Color) 0xfd40; // #ffaa00
const Color COLOR_DARK_FAIL    = (Color) 0x69a6; // #6c3737
const Color COLOR_FAIL         = (Color) 0xdb2c; // #dc6565
const Color COLOR_LIGHT_FAIL   = (Color) 0xfc51; // #ff8b8b

const Color PALETTE[] = {

    COLOR_BLACK,        // 0x0
    COLOR_DARK_GRAY ,   // 0x1
    COLOR_GRAY,         // 0x2
    COLOR_LIGHT_GRAY,   // 0x3
    COLOR_WHITE,        // 0x4

    COLOR_STAR,         // 0x5
    COLOR_GROUND,       // 0x6
    COLOR_LANDING_ZONE, // 0x7
    COLOR_DARK_SUCCESS, // 0x8
    COLOR_SUCCESS,      // 0x9
    COLOR_DARK_APOLLO,  // 0xa
    COLOR_APOLLO,       // 0xb
    COLOR_FLAME,        // 0xc
    COLOR_DARK_FAIL,    // 0xd
    COLOR_FAIL,         // 0xe
    COLOR_LIGHT_FAIL,   // 0xf

};

const uint8_t SPLASH_DATA[] = {

    // metadata

    107,  // frame width
    18,   // frame height
    0x01, // frames (lower byte)
    0x00, // frames (upper byte)
    0,    // frame loop
    0xff, // transparent color
    1,    // indexed color mode

    // colormap

    0x00, 0x00, 0x00, 0x01, 0x34, 0x32, 0x00, 0x00, 0x00, 0x00, 0x03, 0x44, 0x44, 0x44, 0x44, 0x43, 0x21, 0x00, 0x00, 0x00, 0x00, 0x12, 0x34, 0x44, 0x43, 0x21, 0x00, 0x00, 0x00, 0x24, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x23, 0x44, 0x44, 0x32, 0x10, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x14, 0x44, 0x44, 0x40, 0x00, 0x00, 0x00, 0x03, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x20, 0x00, 0x00, 0x03, 0x44, 0x44, 0x44, 0x44, 0x44, 0x30, 0x00, 0x00, 0x24, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x44, 0x44, 0x44, 0x44, 0x44, 0x42, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x24, 0x44, 0x44, 0x42, 0x00, 0x00, 0x00, 0x03, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x41, 0x00, 0x00, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x00, 0x00, 0x24, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x30, 0x00,
    0x00, 0x00, 0x00, 0x44, 0x41, 0x24, 0x43, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x34, 0x43, 0x00, 0x03, 0x44, 0x42, 0x10, 0x00, 0x01, 0x24, 0x44, 0x30, 0x00, 0x24, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x44, 0x11, 0x00, 0x00, 0x12, 0x44, 0x42, 0x00,
    0x00, 0x00, 0x02, 0x44, 0x30, 0x04, 0x44, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x44, 0x00, 0x14, 0x44, 0x10, 0x00, 0x00, 0x00, 0x01, 0x44, 0x41, 0x00, 0x24, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x44, 0x40, 0x00, 0x00, 0x00, 0x00, 0x24, 0x44, 0x00,
    0x00, 0x00, 0x03, 0x44, 0x20, 0x03, 0x44, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x44, 0x00, 0x24, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x42, 0x00, 0x24, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x44, 0x10, 0x00, 0x00, 0x00, 0x00, 0x04, 0x44, 0x10,
    0x00, 0x00, 0x04, 0x44, 0x00, 0x01, 0x44, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x34, 0x43, 0x00, 0x34, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x43, 0x00, 0x24, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x44, 0x20,
    0x00, 0x00, 0x24, 0x43, 0x00, 0x00, 0x44, 0x41, 0x00, 0x00, 0x00, 0x00, 0x23, 0x44, 0x44, 0x44, 0x44, 0x41, 0x00, 0x44, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x44, 0x00, 0x24, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x44, 0x20,
    0x00, 0x00, 0x34, 0x41, 0x00, 0x00, 0x24, 0x42, 0x00, 0x00, 0x00, 0x14, 0x44, 0x44, 0x44, 0x44, 0x44, 0x30, 0x00, 0x44, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x44, 0x00, 0x24, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x43, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x44, 0x30,
    0x00, 0x01, 0x44, 0x40, 0x00, 0x00, 0x14, 0x44, 0x00, 0x00, 0x01, 0x44, 0x44, 0x44, 0x44, 0x44, 0x31, 0x00, 0x00, 0x44, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x44, 0x00, 0x24, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x43, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x44, 0x30,
    0x00, 0x02, 0x44, 0x20, 0x00, 0x00, 0x04, 0x44, 0x10, 0x00, 0x02, 0x44, 0x41, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x44, 0x00, 0x24, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x44, 0x20,
    0x00, 0x04, 0x44, 0x10, 0x00, 0x00, 0x02, 0x44, 0x30, 0x00, 0x03, 0x44, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x34, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x43, 0x00, 0x14, 0x43, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x43, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x44, 0x20,
    0x00, 0x14, 0x44, 0x00, 0x00, 0x00, 0x01, 0x44, 0x40, 0x00, 0x03, 0x44, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x43, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x42, 0x00, 0x14, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x44, 0x10, 0x00, 0x00, 0x00, 0x00, 0x04, 0x44, 0x10,
    0x00, 0x34, 0x42, 0x00, 0x00, 0x00, 0x00, 0x34, 0x42, 0x00, 0x03, 0x44, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x44, 0x10, 0x00, 0x00, 0x00, 0x01, 0x44, 0x41, 0x00, 0x04, 0x44, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x44, 0x20, 0x00, 0x00, 0x00, 0x00, 0x02, 0x44, 0x40, 0x00, 0x00, 0x00, 0x00, 0x24, 0x44, 0x00,
    0x00, 0x44, 0x41, 0x00, 0x00, 0x00, 0x00, 0x24, 0x43, 0x00, 0x03, 0x44, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x44, 0x42, 0x10, 0x00, 0x01, 0x24, 0x44, 0x30, 0x00, 0x02, 0x44, 0x43, 0x11, 0x00, 0x00, 0x00, 0x00, 0x02, 0x44, 0x43, 0x11, 0x00, 0x00, 0x00, 0x00, 0x44, 0x44, 0x11, 0x00, 0x00, 0x12, 0x44, 0x42, 0x00,
    0x01, 0x44, 0x30, 0x00, 0x00, 0x00, 0x00, 0x04, 0x44, 0x10, 0x03, 0x44, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x00, 0x00, 0x00, 0x34, 0x44, 0x44, 0x44, 0x44, 0x44, 0x00, 0x00, 0x34, 0x44, 0x44, 0x44, 0x44, 0x44, 0x00, 0x14, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x30, 0x00,
    0x03, 0x44, 0x20, 0x00, 0x00, 0x00, 0x00, 0x03, 0x44, 0x20, 0x03, 0x44, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13, 0x44, 0x44, 0x44, 0x44, 0x44, 0x30, 0x00, 0x00, 0x00, 0x02, 0x44, 0x44, 0x44, 0x44, 0x44, 0x00, 0x00, 0x02, 0x44, 0x44, 0x44, 0x44, 0x44, 0x00, 0x01, 0x44, 0x44, 0x44, 0x44, 0x44, 0x42, 0x00, 0x00,
    0x14, 0x44, 0x10, 0x00, 0x00, 0x00, 0x00, 0x01, 0x44, 0x40, 0x03, 0x44, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x12, 0x34, 0x44, 0x43, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x34, 0x44, 0x44, 0x44, 0x00, 0x00, 0x00, 0x12, 0x34, 0x44, 0x44, 0x44, 0x00, 0x00, 0x01, 0x23, 0x44, 0x44, 0x32, 0x10, 0x00, 0x00

};

const uint8_t GAME_OVER_DATA[] = {

    // metadata

    94,   // frame width
    11,   // frame height
    0x01, // frames (lower byte)
    0x00, // frames (upper byte)
    0,    // frame loop
    0x0,  // transparent color
    1,    // indexed color mode

    // colormap

    0x00, 0xdd, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0d, 0xdf, 0xff, 0xdd, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x0d, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xdf, 0xff, 0xff, 0xff, 0xd0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xef, 0xd0, 0x00, 0x00, 0x00, 0x0e, 0xff, 0xff, 0xfd, 0xd0, 0x00, 0xef, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xd0, 0x00, 0x00, 0xdd, 0xff, 0xfd, 0xd0, 0x00, 0x00, 0x0e, 0xfe, 0x00, 0x00, 0x0e, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xdd, 0xff, 0xfd, 0xd0, 0x00, 0x0d, 0xff, 0xff,
    0xef, 0x00, 0x00, 0x00, 0x00, 0x0d, 0xff, 0xff, 0xff, 0xfd, 0x00, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x0d, 0xff, 0xff, 0xff, 0xfd, 0x00, 0x00, 0x0e, 0xfe, 0x00, 0x00, 0x0e, 0xfe, 0x0d, 0xfe, 0x00, 0x00, 0x0d, 0xfe, 0x0d, 0xff, 0xff, 0xff, 0xfd, 0x00, 0xdf, 0xff, 0xff,
    0xff, 0x00, 0xdf, 0xfe, 0xe0, 0x00, 0x00, 0x00, 0x0e, 0xfd, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x0e, 0xef, 0xe0, 0x0f, 0xfe, 0x00, 0x0e, 0xfd, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00, 0x00, 0xff, 0x00, 0xfe, 0x00, 0x00, 0x0f, 0xf0, 0x0f, 0xfe, 0x00, 0x0e, 0xfd, 0x00, 0xdf, 0xe0, 0x00,
    0xff, 0x00, 0xdf, 0xff, 0xfe, 0x00, 0xde, 0xee, 0xef, 0xff, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0x0f, 0xe0, 0x0f, 0xf0, 0x00, 0x0e, 0xfd, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00, 0x00, 0xff, 0x00, 0xdf, 0xe0, 0x00, 0xdf, 0xe0, 0x0f, 0xf0, 0x00, 0x0e, 0xfd, 0x00, 0xff, 0x00, 0x00,
    0xff, 0x00, 0x00, 0x0e, 0xff, 0x0d, 0xff, 0xff, 0xff, 0xff, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0x0f, 0xf0, 0x0f, 0xff, 0xff, 0xff, 0xfd, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00, 0x00, 0xff, 0x00, 0x0f, 0xe0, 0x00, 0xff, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xfd, 0x00, 0xff, 0x00, 0x00,
    0xef, 0xe0, 0x00, 0x00, 0xff, 0x0f, 0xfe, 0x00, 0x00, 0xff, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0x0f, 0xf0, 0x0f, 0xff, 0xff, 0xfe, 0xd0, 0x00, 0x00, 0x0e, 0xf0, 0x00, 0x00, 0x00, 0xfe, 0x00, 0x0e, 0xf0, 0x0e, 0xfe, 0x00, 0x0f, 0xff, 0xff, 0xfe, 0xd0, 0x00, 0xff, 0x00, 0x00,
    0xef, 0xf0, 0x00, 0x0e, 0xff, 0x0f, 0xf0, 0x00, 0x00, 0xff, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0x0f, 0xf0, 0x0f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0xfe, 0x00, 0x00, 0xee, 0xfe, 0x00, 0x0e, 0xfd, 0x0f, 0xf0, 0x00, 0x0f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00,
    0x0d, 0xff, 0xff, 0xff, 0xfd, 0x0d, 0xff, 0xee, 0xee, 0xff, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0x0f, 0xf0, 0x0d, 0xff, 0xee, 0xee, 0xed, 0x00, 0x00, 0x00, 0xdf, 0xff, 0xff, 0xff, 0xd0, 0x00, 0x00, 0xff, 0xef, 0xd0, 0x00, 0x0d, 0xff, 0xee, 0xee, 0xed, 0x00, 0xff, 0x00, 0x00,
    0x00, 0xdd, 0xff, 0xff, 0xd0, 0x00, 0xdf, 0xff, 0xff, 0xfd, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0xdf, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x0d, 0xdf, 0xff, 0xdd, 0x00, 0x00, 0x00, 0x0f, 0xfd, 0x00, 0x00, 0x00, 0xdf, 0xff, 0xff, 0xff, 0x00, 0xff, 0x00, 0x00

};

const float_t APOLLO_VERTICES[] = {

//     r       θ         i    x    y
//  ------  -------     ---  ---  ---
    0.8719, -1.8314, //  0    -4, -15
    0.8719, -1.3102, //  1     4, -15
    0.7803, -1.0427, //  2     7, -12
    0.4528, -0.5191, //  3     7,  -4
    0.2316, -0.2450, //  4     4,  -1
    0.2316, -2.8966, //  5    -4,  -1
    0.4528, -2.6224, //  6    -7,  -4
    0.7803, -2.0989, //  7    -7, -12
    0.4528, -3.0172, //  8    -8,  -1
    0.4528, -0.1244, //  9     8,  -1
    0.4528,  0.1244, // 10     8,   1
    0.4528,  3.0172, // 11    -8,   1
    0.1776,  2.8198, // 12    -3,   1
    0.1776,  0.3218, // 13     3,   1
    0.5178,  0.8622, // 14     6,   7
    0.5178,  2.2794, // 15    -6,   7
    0.2864,  2.9442, // 16    -5,   1
    0.8737,  2.3562, // 17   -11,  11
    1.0000,  2.4756, // 18   -14,  11
    0.7983,  2.2565, // 19    -9,  11
    0.2864,  0.1974, // 20     5,   1
    0.8737,  0.7854, // 21    11,  11
    0.7983,  0.8851, // 22     9,  11
    1.0000,  0.6660  // 23    14,  11

};

const uint8_t SELECTOR_DATA[] = {

    // metadata

    4,    // frame width
    5,    // frame height
    0x01, // frames (lower byte)
    0x00, // frames (upper byte)
    0,    // frame loop
    0xff, // transparent color
    1,    // indexed color mode

    // colormap

    0x44, 0x00,
    0x44, 0x40,
    0x44, 0x44,
    0x44, 0x40,
    0x44, 0x00

};

const float_t APOLLO_FLOOR = sin(APOLLO_VERTICES[34+1]);

const uint8_t APOLLO_ARCS_NB = 18 << 1;
const uint8_t APOLLO_ARCS[] = {

     0,  1,
     1,  2,
     2,  3,
     3,  4,
     5,  6,
     6,  7,
     7,  0,
     8,  9,
     9, 10,
    10, 11,
    11,  8,
    13, 14,
    14, 15,
    15, 12,
    16, 17,
    18, 19,
    20, 21,
    22, 23

};

const float_t APOLLO_FLAME[] = {
    
    0.3932, 1.5708,
    2.1905, 1.5708

};

const uint8_t BONUS_DATA[] = {

    // metadata

    4,    // frame width
    7,    // frame height
    0x05, // frames (lower byte)
    0x00, // frames (upper byte)
    0,    // frame loop
    0xff, // transparent color
    1,    // indexed color mode

    // colormap

    // frame 1/5
    0x00, 0x00,
    0x00, 0x00,
    0x70, 0x07,
    0x07, 0x70,
    0x07, 0x70,
    0x70, 0x07,
    0x00, 0x00,

    // frame 2/5
    0x07, 0x70,
    0x00, 0x07,
    0x00, 0x07,
    0x07, 0x70,
    0x70, 0x00,
    0x70, 0x00,
    0x07, 0x70,

    // frame 3/5
    0x07, 0x70,
    0x00, 0x07,
    0x00, 0x07,
    0x07, 0x70,
    0x00, 0x07,
    0x00, 0x07,
    0x07, 0x70,

    // frame 4/5
    0x00, 0x00,
    0x70, 0x07,
    0x70, 0x07,
    0x07, 0x70,
    0x00, 0x07,
    0x00, 0x07,
    0x00, 0x00,

    // frame 5/5
    0x07, 0x70,
    0x70, 0x00,
    0x70, 0x00,
    0x07, 0x70,
    0x00, 0x07,
    0x00, 0x07,
    0x07, 0x70

};

const uint8_t LIFE_DATA[] = {

    // metadata

    7,    // frame width
    8,    // frame height
    0x01, // frames (lower byte)
    0x00, // frames (upper byte)
    0,    // frame loop
    0xff, // transparent color
    1,    // indexed color mode

    // colormap

    0x00, 0xaa, 0xa0, 0x00,
    0x0a, 0x00, 0x0a, 0x00,
    0x0a, 0x00, 0x0a, 0x00,
    0x0a, 0x00, 0x0a, 0x00,
    0x00, 0xaa, 0xa0, 0x00,
    0x0a, 0x0a, 0x0a, 0x00,
    0xa0, 0xaa, 0xa0, 0xa0,
    0xa0, 0x00, 0x00, 0xa0
};