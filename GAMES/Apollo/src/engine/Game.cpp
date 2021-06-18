#include <Gamebuino-Meta.h>
#include "Game.h"
#include "../data/assets.h"
#include "../data/config.h"

void Game::begin() {

    _highscore = gb.save.get(HIGHSCORE_SAVING_BLOCK);

    //_left_pot.begin(LEFT_POT_PIN);
    //_right_pot.begin(RIGHT_POT_PIN);
    
    _apollo.init(SCREEN_WIDTH >> 3, SCREEN_HEIGHT >> 3, 2);
    _apollo.propel(APOLLO_INIT_VY, 0);
    
    _state    = State::start;
    _control  = Control::buttons;

    gb.display.setPalette(PALETTE);
    
}

void Game::_reset() {

    _apollo.refuel();

    _resetRound();

    _frame.start = _frame.lap = gb.frameCount;
    _score       = 0;
    _lives       = STARTING_LIVES;
    _state       = State::play;

}

void Game::_resetRound() {

    if (_has_lost) _apollo.refuel();

    _has_crashed = false;
    _has_lost    = false;

    _map.reset();
    _apollo.reset(0, SCREEN_HEIGHT >> 3);
    _apollo.propel(APOLLO_INIT_VY, 0, -.5f*PI);
    _camera.begin(SCREEN_WIDTH >> 1, SCREEN_HEIGHT >> 1);

}

void Game::_kill() {

    if (_lives) {
        
        _lives--;
        _has_lost = true;
        gb.sound.tone(200,200);
        delay(200);
        gb.sound.tone(50,500);
        delay(500);
        

    } else {
        gb.sound.tone(600,200);
        delay(200);
        gb.sound.tone(300,300);
        delay(300);
        gb.sound.tone(200,500);
        delay(500);
        gb.sound.tone(100,1000);
        
        _state = State::game_over;
        _frame.over = _frame.restart = gb.frameCount;
        _saveHighScore();

    }

}

void Game::_saveHighScore() {

    if (_score) {

        uint16_t highscore = gb.save.get(HIGHSCORE_SAVING_BLOCK);

        if (_score > highscore) {
            gb.save.set(HIGHSCORE_SAVING_BLOCK, _score);
            _highscore = _score;
        }

    }

}

void Game::_gettingStarted() {

    if (gb.buttons.pressed(BUTTON_A)) {
        gb.sound.playOK();
        _reset();
    } /*else if (gb.buttons.pressed(BUTTON_MENU)) {
        _state = State::config;
    }*/

}

void Game::_waitForRestart() {

    if (gb.buttons.pressed(BUTTON_A) && gb.frameCount - _frame.restart > RESTARTING_FRAMES_DELAY) {
        gb.sound.playOK();
        _resetRound();
        _frame.lap = gb.frameCount;
        _state     = State::play;

    }

}

void Game::_waitForRelaunch() {

    if (gb.buttons.pressed(BUTTON_A) && gb.frameCount - _frame.restart > RESTARTING_FRAMES_DELAY) _state = State::start;

}

void Game::_waitForSetup() {

    if (gb.buttons.pressed(BUTTON_MENU) || gb.buttons.pressed(BUTTON_A)) {
        _state = State::start;
    } else if (gb.buttons.pressed(BUTTON_UP) || gb.buttons.pressed(BUTTON_DOWN)) {
        _control = (Control)(((uint8_t)_control + 1) & 0x1);
    }
}

void Game::_navigationControl() {

    if (_control == Control::buttons)
        _buttonControl();
    else
        _potControl();

}

void Game::_buttonControl() {

         if (gb.buttons.repeat(BUTTON_LEFT,  0)) _apollo.rotate(-5);
    else if (gb.buttons.repeat(BUTTON_RIGHT, 0)) _apollo.rotate(+5);
    else if (gb.buttons.released(BUTTON_LEFT) || gb.buttons.released(BUTTON_RIGHT)) _apollo.rotate(0);

    if (gb.buttons.repeat(BUTTON_A, 0)){
        _apollo.power(1.f);
        if (((gb.frameCount >> 1) & 0x1) && _apollo.fuel()>0) gb.sound.tone(10,5);
        }
    else if (gb.buttons.released(BUTTON_A))
        _apollo.power(0);

}

void Game::_potControl() {

    _left_pot.read();
    _right_pot.read();

    _apollo.power(_left_pot.signal()/1024.f);
    _apollo.rotate(5.f * (-128 + (_right_pot.signal() >> 2)) / 128.f);

}

void Game::_spot() {

    float_t cx = _camera.ox();
    float_t cy = _camera.oy();
    float_t cz = _camera.zoom();

    float_t ax = _apollo.x();
    float_t ay = _apollo.y();
    uint8_t ar = _apollo.r();

    if (ax < 0 || ax > SCREEN_WIDTH || ay < 0 || ay > SCREEN_HEIGHT) {
        _state      = State::out_of_range;
        _frame.crash = _frame.restart = gb.frameCount;
        _kill();
        _camera.focus(SCREEN_WIDTH >> 1, SCREEN_HEIGHT >> 1, 1.f);
        return;
    }

    uint8_t range = ar << 3;

    uint8_t x_min = max(0, ax - range);
    uint8_t x_max = min(ax + range, SCREEN_WIDTH);
    uint8_t x_spot;
    int16_t my;
    uint16_t d2, d2_min = 0xffff;
    for (uint8_t mx=x_min; mx<x_max; ++mx) {
        my = _map.y(mx);
        d2 = (ax - mx)*(ax - mx) + (ay - my)*(ay - my);
        if (d2 < d2_min) {
            x_spot = mx;
            d2_min = d2;
        }
    }

    float_t d_min = sqrt(d2_min);
    float_t zoom = min(11.f, max(1.f, 25.f/d_min));
    if (_map.y(ax) < ay || d_min < (cos(_apollo.rot()) < .96f ? ar : ar*APOLLO_FLOOR)) {
        _state       = State::crashed;
        _has_crashed = true;
        _frame.crash = _frame.restart = gb.frameCount;
        _kill();
        _initScraps();
        zoom = 5.f;
    }

    uint8_t offset_y = 0;
    switch (_state) {
        case State::landed:
            offset_y = .5f*ar;
            break;
        case State::crashed:
        case State::game_over:
            offset_y = 2*ar;
    }

    _camera.focus(ax, ay - offset_y, zoom);

}

void Game::_checkLanding() {

    float_t ax = _apollo.x();
    float_t ay = _apollo.y();
    float_t ar = _apollo.r();

    uint8_t n = _map.landing_zones();

    for (uint8_t i=0; i<n; ++i) {

        LandingZone *zone = _map.landing_zone(i);
        if (abs(ax + (zone->width & 0x1 ? .5f : 0) - zone->x) + ar < 0.2f + .5f*zone->width) {

            float_t by = ar * APOLLO_FLOOR;
            float_t dy = ay + by - zone->y;
            if (dy < 0 && -dy < .2f && _apollo.vy() < .1f && abs(_apollo.vx()) < .1f && cos(_apollo.rot()) > .96f) {
                _apollo.land(zone->y - by);
                _state        = State::landed;
                _frame.landing = gb.frameCount;
                _last_score   = _getLastScore();
                _bonus_factor = zone->bonus_factor;
                _bonus_score  = _last_score * _bonus_factor;
                gb.sound.tone(300,200);
                delay(200);
                gb.sound.tone(600,200);
                delay(200);
                gb.sound.tone(900,300);
                return;
            }

        }

    }

}

void Game::_scoring() {

    uint32_t frames = gb.frameCount - _frame.landing;
    uint32_t now    = frames * 1;

    if (frames > (SCORING_FRAMES_DELAY << 1)) {

        uint16_t q = _bonus_score >> 4; if (!q) q = _bonus_score;

        _bonus_score -= q;
        _score       += q;

    }

}

void Game::_initScraps() {

    Scrap *scrap;
    int8_t sign;

    for (uint8_t i=0; i<SCRAP_NB; ++i) {
        scrap = _scrap + i;
        scrap->init(
            _apollo.x(),
            _apollo.y(),
            _apollo.r() * .25f,
            (sign = random(2) ? -1 : 1)*.01f*random(5, 20),
            -.01f*random(5, 25),
            .1f*sign*random(1, 5)
        );
    }

}

void Game::_showScraps() {

    Scrap *scrap;

    for (uint8_t i=0; i<SCRAP_NB; ++i) {
        scrap = _scrap + i;
        scrap->loop();
        scrap->draw(_camera);
    }

}

uint16_t Game::_getLastScore() {

    uint32_t f = gb.frameCount - _frame.lap;

         if (f < LANDING_FRAMES_MIN) return SCORE_MAX;
    else if (f > LANDING_FRAMES_MAX) return SCORE_MIN;
    else                             return SCORE_MAX - (SCORE_MAX - SCORE_MIN)*(f - LANDING_FRAMES_MIN)/(LANDING_FRAMES_MAX - LANDING_FRAMES_MIN);

}

void Game::_drawSplash() {

    uint8_t ws = SPLASH_DATA[0];
    uint8_t hs = SPLASH_DATA[1];
    uint8_t xs = (SCREEN_WIDTH - ws) >> 1;
    uint8_t ys = (SCREEN_HEIGHT >> 1);

    gb.display.drawImage(xs, ys - hs - 6, SPLASH_DATA);
    gb.display.setColor(COLOR_LIGHT_GRAY);
    gb.display.drawFastHLine(xs, ys, ws);
    gb.display.setColor(COLOR_GRAY);
    gb.display.print((SCREEN_WIDTH - (strlen(GAME_CREDIT) << 2)) >> 1, ys + 6, GAME_CREDIT);
    gb.display.setColor(COLOR_DARK_GRAY);
    //gb.display.print((SCREEN_WIDTH - (strlen(GAME_SETUP) << 2)) >> 1, SCREEN_HEIGHT - 8, GAME_SETUP);

    if ((gb.frameCount >> 3) & 0x1) {
        gb.display.setColor(COLOR_WHITE);
        gb.display.print((SCREEN_WIDTH - (strlen(GAME_START) << 2)) >> 1, .75f * SCREEN_HEIGHT, GAME_START);
    }

}

void Game::_drawSetup() {

    uint8_t y = (SCREEN_HEIGHT >> 2) - 10;

    gb.display.setColor(COLOR_WHITE);
    gb.display.print((SCREEN_WIDTH-strlen(SETUP_TITLE)*4)/2, y, SETUP_TITLE);
    
    gb.display.setColor(COLOR_DARK_GRAY);
    gb.display.print((SCREEN_WIDTH-strlen(SETUP_ROOKIE)*4)/2, y + 24, SETUP_ROOKIE);
    gb.display.setColor(COLOR_GRAY);
    gb.display.print((SCREEN_WIDTH-strlen(SETUP_BUTTONS)*4)/2, y + 32, SETUP_BUTTONS);
    
    gb.display.setColor(COLOR_DARK_GRAY);
    gb.display.print((SCREEN_WIDTH-strlen(SETUP_HOTSHOT)*4)/2, y + 44, SETUP_HOTSHOT);
    gb.display.setColor(COLOR_GRAY);
    gb.display.print((SCREEN_WIDTH-strlen(SETUP_POT)*4)/2, y + 52, SETUP_POT);

    gb.display.setColor(COLOR_WHITE);
    gb.display.drawImage(5, y+32 + 20*(uint8_t)_control, SELECTOR_DATA);

    gb.display.setColor(COLOR_DARK_GRAY);
    gb.display.print((SCREEN_WIDTH-strlen(SETUP_WIRING)*4)/2, y + 72, SETUP_WIRING);
    gb.display.setColor(COLOR_GRAY);
    gb.display.print((SCREEN_WIDTH-strlen(SETUP_LEFT)*4)/2, y + 82, SETUP_LEFT);
    gb.display.print((SCREEN_WIDTH-strlen(SETUP_RIGHT)*4)/2, y + 82, SETUP_RIGHT);
    gb.display.setColor(COLOR_WHITE);
    //gb.display.printf( 66, y + 82, FORMAT_PINOUT, LEFT_POT_PIN  - 14);
    //gb.display.printf(110, y + 82, FORMAT_PINOUT, RIGHT_POT_PIN - 14);

}

void Game::_drawUserData() {

    uint8_t ax = _apollo.x();
    int16_t ay = _apollo.y();
    uint8_t ar = _apollo.r();

    int8_t  alt = _map.y(ax) - ay - ar; if (alt < 0) alt = 0;
    int16_t rot = 180*_apollo.rot()/PI; if (rot > 180) rot = rot - 360;
    uint8_t fps = gb.getTimePerFrame();

    uint8_t  w2     = SCREEN_WIDTH >> 1;

    uint32_t frames;

    switch (_state) {
        case State::landed:
            frames = _frame.landing - _frame.lap;
            break;
        case State::crashed:
        case State::out_of_range:
        case State::game_over:
            frames = _frame.crash - _frame.lap;
            break;
        default:
            frames = gb.frameCount - _frame.lap;
    }

    uint32_t now_ms = frames * gb.getTimePerFrame();
    uint32_t now_s  = now_ms / 1000;

    gb.display.setColor(COLOR_GRAY);

    gb.display.print( 2, 2, GAME_SCORE);
    gb.display.print(48, 2, GAME_TIME);
    gb.display.print(86, 2, GAME_FUEL);

    gb.display.print(2, SCREEN_HEIGHT - 26, GAME_ALT);
    gb.display.print(2, SCREEN_HEIGHT - 20, GAME_TILT);
    gb.display.print(2, SCREEN_HEIGHT - 14, GAME_VX);
    gb.display.print(2, SCREEN_HEIGHT -  8, GAME_VY);

    gb.display.setColor(COLOR_LIGHT_GRAY);
    
    gb.display.print(24,                  2, _score);
    gb.display.print( 22, SCREEN_HEIGHT - 26, alt);
    gb.display.print(22, SCREEN_HEIGHT - 20, rot);
    gb.display.print( 22, SCREEN_HEIGHT - 14, fps*_apollo.vx());
    gb.display.print( 22, SCREEN_HEIGHT -  8, fps*_apollo.vy());
    gb.display.print(66, 2, now_s);
    gb.display.print(70, 2, (now_ms - now_s*1000)/100);

    gb.display.setColor(COLOR_APOLLO);
    gb.display.drawRect(104, 2, SCREEN_WIDTH - 104 - 2, 5);
    gb.display.setColor(COLOR_DARK_APOLLO);
    gb.display.fillRect(105, 3, (SCREEN_WIDTH - 105 - 2) * _apollo.fuel() / STARTING_FUEL, 3);

    uint8_t w = LIFE_DATA[0];
    uint8_t h = LIFE_DATA[1];
    uint8_t n = _lives + (_state == State::crashed || _state == State::out_of_range ? 1 : 0);
    for (uint8_t i=0; i<n; ++i) {
        gb.display.drawImage(
            SCREEN_WIDTH - (i+1)*(w+2),
            SCREEN_HEIGHT - 2 - h,
            LIFE_DATA);
    }

}

void Game::_drawLanded() {

    uint32_t frames = gb.frameCount - _frame.landing;

    gb.display.setColor(COLOR_SUCCESS);
    gb.display.print((SCREEN_WIDTH - (strlen(GAME_CONGRATS) << 2)) >> 1, (SCREEN_HEIGHT >> 2) - 14, GAME_CONGRATS);
    gb.display.print((SCREEN_WIDTH - (strlen(GAME_LANDED)   << 2)) >> 1, (SCREEN_HEIGHT >> 2) -  3, GAME_LANDED);

    if (frames > SCORING_FRAMES_DELAY) {

        gb.display.setColor(COLOR_WHITE);
        //gb.display.printf(((SCREEN_WIDTH - 60) >> 1), (SCREEN_HEIGHT >> 2) + 8, "%04u x %u = %04u", _last_score, _bonus_factor, _bonus_score);
       String toPrint = (String)_last_score;
       toPrint += " x ";
       toPrint += (String)_bonus_factor;
       toPrint += " = ";
       toPrint += (String)_bonus_score;
       gb.display.print(((SCREEN_WIDTH - 60) >> 1), (SCREEN_HEIGHT >> 2) + 8, toPrint);
       if (_bonus_score && ((gb.frameCount >> 2) & 0x1)) gb.sound.tone(300,5);
        
    }

}

void Game::_drawCrashed() {

    if ((gb.frameCount >> 3) & 0x1) {
        gb.display.setColor(COLOR_LIGHT_FAIL);
        gb.display.print((SCREEN_WIDTH - (strlen(GAME_CRASHED)   << 2)) >> 1, (SCREEN_HEIGHT >> 1) - 8, GAME_CRASHED);
        gb.display.print((SCREEN_WIDTH - (strlen(GAME_DESTROYED) << 2)) >> 1, (SCREEN_HEIGHT >> 1) + 3, GAME_DESTROYED);
    }

}

void Game::_drawOutOfRange() {

    if ((gb.frameCount >> 3) & 0x1) {
        gb.display.setColor(COLOR_LIGHT_FAIL);
        gb.display.print((SCREEN_WIDTH - (strlen(GAME_OUT) << 2)) >> 1, (SCREEN_HEIGHT >> 2) - 3, GAME_OUT);
    }

}

void Game::_drawGameOver() {

    if ((gb.frameCount >> 3) & 0x1) {
        gb.display.drawImage(
            (SCREEN_WIDTH - GAME_OVER_DATA[0]) >> 1,
            SCREEN_HEIGHT >> 2,
            GAME_OVER_DATA
        );
    }

    if (gb.frameCount - _frame.over > HIGHSCORE_DELAY) {

        uint8_t y = (SCREEN_HEIGHT >> 2) + GAME_OVER_DATA[1] + 8;

        gb.display.setColor(COLOR_DARK_APOLLO);
        gb.display.print((SCREEN_WIDTH - (strlen(GAME_HIGHSCORE) << 2)) >> 1, y, GAME_HIGHSCORE);
        
        gb.display.setColor(COLOR_APOLLO);
        //gb.display.printf((SCREEN_WIDTH - 20) >> 1, y +  8, FORMAT_SCORE, _highscore);
        gb.display.print((SCREEN_WIDTH - 20) >> 1, y +  8, _highscore);
        
        gb.display.setColor(COLOR_DARK_SUCCESS);
        gb.display.print((SCREEN_WIDTH - (strlen(GAME_SCORE) << 2)) >> 1, y + 20, GAME_SCORE);
        
        gb.display.setColor(COLOR_SUCCESS);
        //gb.display.printf((SCREEN_WIDTH - 20) >> 1, y + 28, FORMAT_SCORE, _score);
        gb.display.print((SCREEN_WIDTH - 20) >> 1, y + 28, _score);

    }

}

void Game::loop() {

    gb.display.clear(COLOR_BLACK);
    gb.display.setFontSize(1);

    switch (_state) {

        case State::start:
            _gettingStarted();
            _drawSplash();
            break;

        case State::config:
            _waitForSetup();
            _drawSetup();
            break;

        case State::play:
            _navigationControl();
            _apollo.loop();
            _checkLanding();
            _spot();
            _camera.loop();
            _map.draw(_camera);
            _apollo.draw(_camera, true);
            _drawUserData();
            break;
        
        case State::landed:
            _bonus_score ? _scoring() : _waitForRestart();
            _camera.loop();
            _map.draw(_camera);
            _apollo.draw(_camera);
            _drawUserData();
            _drawLanded();
            break;
        
        case State::crashed:
            _waitForRestart();
            _camera.loop();
            _map.draw(_camera);
            _showScraps();
            _drawUserData();
            _drawCrashed();
            break;
        
        case State::out_of_range:
            _waitForRestart();
            _camera.loop();
            _map.draw(_camera);
            _drawUserData();
            _drawOutOfRange();
            break;
        
        case State::game_over:
            _waitForRelaunch();
            _camera.loop();
            _map.draw(_camera);
            if (_has_crashed) _showScraps();
            _drawUserData();
            _drawGameOver();

    }

}