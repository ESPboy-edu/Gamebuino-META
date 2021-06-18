#pragma once

#include "Camera.h"
#include "Map.h"
#include "Apollo.h"
#include "Scrap.h"
#include "../hardware/Pot.h"

struct Frame {
    uint32_t start;
    uint32_t lap;
    uint32_t landing;
    uint32_t crash;
    uint32_t over;
    uint32_t restart;
};

class Game {

    private:

        static constexpr char *GAME_CREDIT    = "(c) 2021 STEPH @ M1CR0LAB";
        static constexpr char *GAME_START     = "PRESS A TO PLAY";
        static constexpr char *GAME_SETUP     = "PRESS MENU TO SETUP";
        static constexpr char *GAME_CONGRATS  = "CONGRATULATIONS!";
        static constexpr char *GAME_LANDED    = "YOU HAVE SUCCESSFULLY LANDED";
        static constexpr char *GAME_OUT       = "YOU GOT LOST IN OUTER SPACE...";
        static constexpr char *GAME_CRASHED   = "YOU JUST CRASHED AND";
        static constexpr char *GAME_DESTROYED = "DESTROYED A 100 MEGABUCKS LANDER";
        static constexpr char *GAME_SCORE     = "SCORE";
        static constexpr char *GAME_HIGHSCORE = "HIGH SCORE";
        static constexpr char *GAME_TIME      = "TIME";
        static constexpr char *GAME_FUEL      = "FUEL";
        static constexpr char *GAME_ALT       = "ALTI";
        static constexpr char *GAME_TILT      = "TILT";
        static constexpr char *GAME_VX        = "VELX";
        static constexpr char *GAME_VY        = "VELY";

        static constexpr char *SETUP_TITLE   = "GAME SETUP";
        static constexpr char *SETUP_ROOKIE  = "I'M STILL A ROOKIE";
        static constexpr char *SETUP_HOTSHOT = "I'M A REAL HOTSHOT";
        static constexpr char *SETUP_BUTTONS = "PLAYING WITH BUTTONS";
        static constexpr char *SETUP_POT     = "PLAYING WITH POTENTIOMETERS";
        static constexpr char *SETUP_WIRING  = "POTS WIRING";
        static constexpr char *SETUP_LEFT    = "LEFT:";
        static constexpr char *SETUP_RIGHT   = "RIGHT:";


        static const uint8_t SCRAP_NB = 10;

        static const uint16_t LANDING_FRAMES_MIN = 375;  // 15 sec * 25 fps
        static const uint16_t LANDING_FRAMES_MAX = 1000; // 40 sec * 25 fps
        static const uint16_t SCORE_MIN = 50;
        static const uint16_t SCORE_MAX = 1000;

        static const uint8_t RESTARTING_FRAMES_DELAY = 25;
        static const uint8_t SCORING_FRAMES_DELAY    = 25;
        static const uint8_t HIGHSCORE_DELAY         = 50;
        static const uint8_t HIGHSCORE_SAVING_BLOCK  = 0;

        enum class State : uint8_t {
            start,
            config,
            play,
            landed,
            crashed,
            out_of_range,
            game_over
        };

        enum class Control : uint8_t {
            buttons,
            potentiometers
        };

        Pot _left_pot;
        Pot _right_pot;

        Map    _map;
        Camera _camera;
        Apollo _apollo;

        Scrap _scrap[SCRAP_NB];

        State    _state;
        Control  _control;
        bool     _has_crashed;
        bool     _has_lost;
        uint8_t  _lives;
        uint16_t _score;
        uint16_t _highscore;
        uint16_t _last_score;
        uint16_t _bonus_score;
        uint8_t  _bonus_factor;
        Frame    _frame;

        uint16_t _getLastScore();

        void _reset();
        void _resetRound();
        void _kill();
        void _saveHighScore();

        void _gettingStarted();
        void _waitForRestart();
        void _waitForRelaunch();
        void _waitForSetup();
        void _waitForScoring();
        void _navigationControl();
        void _buttonControl();
        void _potControl();

        void _spot();
        void _checkLanding();
        void _scoring();
        void _initScraps();
        void _showScraps();

        void _drawSplash();
        void _drawSetup();
        void _drawUserData();
        void _drawLanded();
        void _drawCrashed();
        void _drawOutOfRange();
        void _drawGameOver();

    public:

        void begin();
        void loop();

};