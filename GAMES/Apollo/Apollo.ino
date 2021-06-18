#include <Gamebuino-Meta.h>
#include "src/engine/Game.h"

Game game;

void setup() {
    gb.begin();
    game.begin();
    
}

void loop() {
    gb.waitForUpdate();
    game.loop();

}
