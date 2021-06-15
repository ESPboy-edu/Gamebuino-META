//DISPLAY
void drawBackground(int index) {
  gb.display.drawImage(0,0, backgrounds[index - 1], gb.display.width(), gb.display.height());
}

void displayWinLose(char winOrLose[5]) {
  
  if (winOrLose == "lose") {
    if (!winOrLosePlaying) {
      gb.sound.stop(track);
      //track = gb.sound.play(loseSound, false);
      gb.sound.tone(200,50);
      delay(50);
      gb.sound.tone(100,50);
      delay(50);
      gb.sound.tone(10,500);
      delay(500);
      winOrLosePlaying = true;
    }
    gb.display.clear();
    drawBackground(currentLevel);
    gb.display.fontSize = 2;
    gb.display.setCursor(25, gb.display.height() / 4);
    gb.display.println("You");
    gb.display.setCursorX(10);
    gb.display.println("lose ...");
  }
  else if (winOrLose == "win") {
    if (!winOrLosePlaying) {
      gb.sound.stop(track);
      //track = gb.sound.play(winSound, false);
      gb.sound.tone(200,50);
      delay(50);
      gb.sound.tone(300,50);
      delay(50);
      gb.sound.tone(400,500);
      delay(500);
      winOrLosePlaying = true;
    }
    gb.display.clear();
    drawBackground(currentLevel);
    gb.display.fontSize = 2;
    gb.display.setCursor(25, gb.display.height() / 4);
    gb.display.println("You");
    gb.display.setCursorX(20);
    gb.display.println("win !");
    currentLevel ++;
    
  }

  delay(2500);
  win = false;
  lose = false;
  initGame();
}

void displayGame() {

  if (lose) {
    gameOn = false;
    displayWinLose((char*)((String)"lose").c_str());
  }
  else if (win) {
    gameOn = false;
    displayWinLose((char*)((String)"win").c_str());
  }
  else if (levelNameScreen) {
    displayLevelName();
  } else if (!gameOn) {
    displayMenu();
  }
  else {
    playSong();
    
    gb.display.clear();
    drawBackground(currentLevel);
    //paddle
    gb.display.drawImage(padX, PAD_Y, paddle, PAD_W, PAD_H);
    //ball
    gb.display.drawImage(ballX, ballY, ball, BALL_SIZE, BALL_SIZE);
    //bricks
    for (int rangee = 0; rangee < NB_RANGEES; rangee ++) {
      for (int colonne = 0; colonne < NB_COLONNES; colonne++) {
        if (briques[rangee][colonne].state <= 0 && briques[rangee][colonne].state > -2) { //don't draw destroyed bricks
          continue;
        } else {
          gb.display.drawImage(briques[rangee][colonne].x, briques[rangee][colonne].y, briques[rangee][colonne].img, BRICK_W, BRICK_H);
        }
      }
    }
  }
}

void displayLevelName() {
  gb.display.clear();
  drawBackground(currentLevel);
  gb.display.fontSize = 2;
  gb.display.setCursor(13, gb.display.height() / 4);
  gb.display.print("LEVEL ");
  gb.display.println(currentLevel);
  gb.display.fontSize = 1;
  gb.display.setColor(YELLOW);
  gb.display.setCursorY(gb.display.height() /2);
  gb.display.setCursorX(16);
  gb.display.println(levelNames[currentLevel - 1]);
  delay(800);
  levelNameScreen = false;
  gameOn = true;
}

void playSong() {
  if (!songPlaying) {
    //gb.sound.stop(track);
    //track = gb.sound.play(levelSongs[currentLevel - 1], true);
      gb.sound.tone(200,50);
      delay(50);
      gb.sound.tone(400,50);
      delay(50);
    songPlaying = true;
    winOrLosePlaying = false;
  }
}
