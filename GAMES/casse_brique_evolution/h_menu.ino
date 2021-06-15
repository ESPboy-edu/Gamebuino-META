//MENU
void displayMenu() {

  if (!menuSongPlaying) {
    gb.sound.stop(track);
    //track = gb.sound.play(menuSong);
    menuSongPlaying = true;
    for (uint8_t i=0; i<10; i++){
      gb.sound.tone(random(300)+50, 50);
      delay (random(50)+30);
    }
  }
  
  gb.display.clear();
  
  bool unLocked = chooseLevel();
  if (unLocked) {
    drawBackground(chosenLevel);
  }
  //level number
  gb.display.setColor(WHITE);
  gb.display.fontSize = 2;
  gb.display.setCursor(13, gb.display.height() / 4);
  gb.display.print("LEVEL ");
  gb.display.println(chosenLevel);
  //levelname
  if (unLocked) {
    gb.display.fontSize = 1;
    gb.display.setColor(YELLOW);
    gb.display.setCursorY(gb.display.height() /2);
    gb.display.setCursorX(16);
    gb.display.println(levelNames[chosenLevel - 1]);
  }
  //arrows
  gb.display.setColor(WHITE);
  gb.display.fontSize = 2;
  gb.display.setCursor(0, gb.display.height() / 2);
  gb.display.print("<");
  gb.display.setCursor(gb.display.width() -8, gb.display.height() / 2);
  gb.display.print(">");
  //padlock
  if (!unLocked) {
    gb.display.drawImage(gb.display.width() / 2 - 12, gb.display.height() - 33, padlock, 25,35);
  }
}

bool chooseLevel() {
  bool isUnlocked = true;
  
  if (chosenLevel > NB_LEVELS) {chosenLevel = NB_LEVELS;gb.sound.playTick();}
  
  if (gb.buttons.released(BUTTON_LEFT)) {
    gb.sound.playTick();
      if (chosenLevel == 1) chosenLevel = NB_LEVELS;
      else chosenLevel --;
    }
  if (gb.buttons.released(BUTTON_RIGHT)) {
    gb.sound.playTick();
    if (chosenLevel == NB_LEVELS) chosenLevel = 1;
    else chosenLevel ++;
  }
  
  if (chosenLevel<= lastUnlockedLevel) {
    isUnlocked = true;
  } else {
    isUnlocked = false;
  }

  if (gb.buttons.released(BUTTON_A)) {
    if(isUnlocked)gb.sound.playOK();
    else gb.sound.playCancel();
    launchLevel(chosenLevel, isUnlocked);
  }

  return isUnlocked;
}

void launchLevel(int chosenLvl, bool isUnlocked) {
  if (isUnlocked) {
    currentLevel = chosenLevel;
    gameOn = true;
    initGame();
  }
}
