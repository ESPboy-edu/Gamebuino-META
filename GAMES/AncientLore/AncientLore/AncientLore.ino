#include<Gamebuino-Meta.h>

//---------------------Sound-----------------


void magicSfx(){
  gb.sound.tone(200,100);
  delay(100);
  gb.sound.tone(500,100);
  delay(100);
  gb.sound.tone(800,100);
};

void loreSfx(){
  gb.sound.tone(800,100);
  delay(100);
  gb.sound.tone(500,100);
  delay(100);
  gb.sound.tone(100,100);
};

void punchSfx(){
  gb.sound.playCancel();
};

void diamondSfx(){
  gb.sound.playOK();
};

void cupSfx(){
  gb.sound.playOK();
};


/*
const Gamebuino_Meta::Sound_FX magicSfx[] = {
    {Gamebuino_Meta::Sound_FX_Wave::NOISE,0,80,-1,10,70,15},
};

const Gamebuino_Meta::Sound_FX loreSfx[] = {
    {Gamebuino_Meta::Sound_FX_Wave::NOISE,0,150,-2,5,110,20},
};

const Gamebuino_Meta::Sound_FX punchSfx[] = {
    {Gamebuino_Meta::Sound_FX_Wave::NOISE,0,100,-5,2,66,5},
};

const Gamebuino_Meta::Sound_FX diamondSfx[] = {
    {Gamebuino_Meta::Sound_FX_Wave::SQUARE,1,100,5,0,70,5},
    {Gamebuino_Meta::Sound_FX_Wave::SQUARE,0,120,-6,0,50,10}
};

const Gamebuino_Meta::Sound_FX cupSfx[] = {
    {Gamebuino_Meta::Sound_FX_Wave::SQUARE,0,130,-6,0,50,20}
};
*/

//---------------------Game variables--------
uint8_t LevelId=49;
uint8_t SelectedField=0;
bool Fight=false;
int8_t frameMod=0; // to reduce enemy damage between frames
bool switchLocation=false;
int Score=0;
bool ScoreChecked=false;
bool NewHighScore=false;
//--------------------Player variables------
int8_t posX=40;
int8_t posY=8;
int8_t PlayerHP=24;
int8_t Lore=3;
int8_t Keys=31;
int8_t playerDirection=1;

bool climbing=false;
bool hanging=false;
bool walking=false;
bool attacking=false;

//----------Menu screens assets and variables

bool mainMenu=true;
bool scoreMenu=false;
bool pauseMenu=false;
bool endGame=false;
uint8_t menuChoice=1;
uint8_t pauseChoice=1;
int8_t cursorPosY=41;

uint8_t TitleGraph[100]={
  1,1,1,1,1,1,1,1,1,1,
  1,1,1,1,1,1,1,1,1,1,
  1,1,1,1,1,1,1,1,1,1,
  1,1,1,1,1,1,1,1,1,1,
  1,1,1,1,1,1,1,1,1,1,
  1,1,1,1,1,1,1,1,1,1,
  0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,
  1,1,1,1,1,1,1,1,1,1
};

uint8_t MainGraph[100]={
  0,0,0,0,0,0,0,0,0,0,
  1,1,0,0,1,1,0,0,1,1,
  1,1,1,1,1,1,1,1,1,1,
  1,1,1,1,1,1,1,1,1,1,
  1,1,1,1,1,1,1,1,1,1,
  1,1,1,1,1,1,1,1,1,1,
  1,1,1,1,1,1,1,1,1,1,
  0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0
};

uint8_t ScoreGraph[100]={
  1,1,1,1,1,1,1,1,1,1,
  1,0,0,0,0,0,0,0,0,1,
  1,0,0,0,0,0,0,0,0,1,
  1,0,0,0,0,0,0,0,0,1,
  1,0,0,0,0,0,0,0,0,1,
  1,0,0,0,0,0,0,0,0,1,
  1,0,0,0,0,0,0,0,0,1,
  1,0,0,0,0,0,0,0,0,1,
  1,0,0,0,0,0,0,0,0,1,
  1,1,1,1,1,1,1,1,1,1
};

uint8_t EndGraph[100]={
  14,17,17,17,17,17,17,17,17,16,
  11,0,0,0,0,0,0,0,0,13,
  11,0,0,0,0,0,0,0,0,13,
  11,0,0,0,0,0,0,0,0,13,
  11,0,0,0,0,0,0,0,0,13,
  11,0,0,0,0,0,0,0,0,13,
  11,0,0,0,0,0,0,0,0,13,
  11,0,0,0,0,0,0,0,0,13,
  11,0,0,0,0,0,0,0,0,13,
  17,17,17,17,17,17,17,17,17,17
};

int ScoreBoard[]={0,0,0,0,0};


//--------------Functions-------------------------

void setup() {
  gb.begin();
  //gb.save.set(0, 0);
  //gb.save.set(1, 0);
  //gb.save.set(2, 0);
  //gb.save.set(3, 0);
  //gb.save.set(4, 0);
  ScoreBoard[0]=gb.save.get(0);
  ScoreBoard[1]=gb.save.get(1);
  ScoreBoard[2]=gb.save.get(2);
  ScoreBoard[3]=gb.save.get(3);
  ScoreBoard[4]=gb.save.get(4);
}

void loop() {
  while(!gb.update())
  gb.display.clear();
  //gb.lights.clear();
  gb.myLED.setRGB(0,0,0);
  if(mainMenu==true)
  {
    menuScreen();
  }
  else if(pauseMenu==true)
  {
    pauseScreen();
  }
  else if(scoreMenu==true)
  {
    scoreScreen();
  }
  else if(endGame==true)
  {
    if(!ScoreChecked)
    {
      NewHighScore=compareAndUpdateScore();
      if(NewHighScore)
      {
        gb.save.set(0,ScoreBoard[0]);
        gb.save.set(1,ScoreBoard[1]);
        gb.save.set(2,ScoreBoard[2]);
        gb.save.set(3,ScoreBoard[3]);
        gb.save.set(4,ScoreBoard[4]);
      }
      ScoreChecked=true;
    }
    endgameScreen();
  }
  else
  {
    game();
  }
}

void prepareNewGame()
{
  posX=40;
  posY=20;
  PlayerHP=24;
  LevelId=1;
  ScoreChecked=false;
  NewHighScore=false;
  playerDirection=1;
  Score=0;
  Keys=31;
  Lore=3;

  renewMonsters();
  renewCups();
  renewDiamonds();
  renewPowers();
  sealSecrets();
}

void menuScreen()
{
  drawMainMenu(TitleGraph,cursorPosY);
  if(gb.buttons.pressed(BUTTON_A))
  {
    if(menuChoice==1)
    {
      mainMenu=false;
      prepareNewGame();
    }
    else
    {
      mainMenu=false;
      scoreMenu=true;
    }
  }
  else if(gb.buttons.pressed(BUTTON_UP))
  {
    if(menuChoice==1)
    {
      menuChoice=2;
      cursorPosY+=6;
    }
    else
    {
      menuChoice=1;
      cursorPosY-=6;
    }
  }
  else if(gb.buttons.pressed(BUTTON_DOWN))
  {
    if(menuChoice==1)
    {
      menuChoice=2;
      cursorPosY+=6;
    }
    else
    {
      menuChoice=1;
      cursorPosY-=6;
    }
  }
}

void scoreScreen()
{
  drawScoreBoard(ScoreGraph,ScoreBoard);

  if(gb.buttons.pressed(BUTTON_A))
  {
    mainMenu=true;
    scoreMenu=false;
    menuChoice=1;
    cursorPosY=41;
  }
}

void pauseScreen()
{
  drawPauseScreen(EndGraph,cursorPosY);

  if(gb.buttons.pressed(BUTTON_A))
  {
    if(menuChoice==1)
    {
      pauseMenu=false;
    }
    else
    {
      mainMenu=true;
      pauseMenu=false;
      compareAndUpdateScore();
      menuChoice=1;
      cursorPosY=41;
    }
  }
  else if(gb.buttons.pressed(BUTTON_UP))
  {
    if(menuChoice==1)
    {
      menuChoice=2;
      cursorPosY+=6;
    }
    else
    {
      menuChoice=1;
      cursorPosY-=6;
    }
  }
  else if(gb.buttons.pressed(BUTTON_DOWN))
  {
    if(menuChoice==1)
    {
      menuChoice=2;
      cursorPosY+=6;
    }
    else
    {
      menuChoice=1;
      cursorPosY-=6;
    }
  }
  else if(gb.buttons.pressed(BUTTON_MENU))
  {
    pauseMenu=false;
  }
}

void endgameScreen()
{
  drawEndgameScreen(EndGraph,NewHighScore,LevelId);
  if(gb.buttons.pressed(BUTTON_B))
  {
    endGame=false;
    mainMenu=true;
  }
}

bool compareAndUpdateScore()
{
  bool isScoreQualified=false;
  int temp=0;
  int temp2=0;
  int index=0;

  for(int i=0;i<5;i++)
  {
    if(Score>ScoreBoard[i])
    {
       temp=ScoreBoard[i];
       ScoreBoard[i]=Score;
       index=i;
       isScoreQualified=true;
       break;
    } 
  }

  if(!isScoreQualified)
  {
    return false;
  }

  for(int i=index+1;i<5;i++)
  {
    temp2=ScoreBoard[i];
    ScoreBoard[i]=temp;
    temp=temp2;
  }
  return isScoreQualified;
}

void game()
{
  if(LevelId==200) //game over (Finished)
  {
    endGame=true;
    return;
  }
  uint8_t DisplayPlan[114];
  setCurrentLevel(DisplayPlan); //we set stage plan
  if(DisplayPlan[7]==0 && DisplayPlan[23]>0) //if enemy is defeated and secret value is present
  {
    Score+=75; //points for secret
    checkSecret(DisplayPlan); //open secret
    saveCurrentLevel(DisplayPlan);
  }
  checkEnemyCollision(DisplayPlan); //we check if player is connected to the enemy
  drawLevel(DisplayPlan);
  enemyTurn(DisplayPlan);
  //gb.display.setCursor(10, 5);
  //gb.display.setFontSize(1);
  //gb.display.setColor(WHITE);
  //gb.display.println(gb.getCpuLoad());
  //gb.display.println(gb.getFreeRam());
  switchLocation=false;
  if(gb.buttons.repeat(BUTTON_RIGHT,0))
  {
    if(checkFloorBordersRight(DisplayPlan)==true)
    {
      climbing=false;
      attacking=false;
      walking=true;
      playerDirection=1;
      if(checkEnemyPositionRight(DisplayPlan)==false)
      {
        if(Fight==true)
        {
          posX+=3;
        }
        else
        {
          posX++;  
        }
        checkCollider(DisplayPlan,"RIGHT"); 
      }
    }
    saveCurrentLevel(DisplayPlan); 
    if(posX==73)
    {
      switchLocation=true;
      saveCurrentLevel(DisplayPlan);
      LevelId=DisplayPlan[5];
      posX=1;
    }
  }
  else if(gb.buttons.repeat(BUTTON_LEFT,0))
  {
    if(checkFloorBordersLeft(DisplayPlan)==true)
    {
      climbing=false;
      attacking=false;
      walking=true;
      playerDirection=0;
      if(checkEnemyPositionLeft(DisplayPlan)==false)
      {
        if(Fight==true)
        {
          posX-=3;
        }
        else
        {
          posX--;  
        }
        checkCollider(DisplayPlan,"LEFT"); 
      } 
    }
    saveCurrentLevel(DisplayPlan);
    if(posX==0)
    {
      switchLocation=true;
      saveCurrentLevel(DisplayPlan);
      LevelId=DisplayPlan[3];
      posX=73;
    }
  }
  else if(gb.buttons.repeat(BUTTON_UP,0))
  {
    if(checkElevationUp(DisplayPlan)==true)
    {
      climbing=true;
      hanging=false;
      walking=false;
      posY--;
      saveCurrentLevel(DisplayPlan);
    }
    else
    {
      saveCurrentLevel(DisplayPlan);
    }
    if(posY==-5)
    {
      switchLocation=true;
      saveCurrentLevel(DisplayPlan);
      LevelId=DisplayPlan[2];
      posY=40;
    }
  }
  else if(gb.buttons.repeat(BUTTON_DOWN,0))
  {
    if(checkElevationDown(DisplayPlan)==true)
    {
      climbing=true;
      hanging=false;
      walking=false;
      posY++;
      saveCurrentLevel(DisplayPlan);
    }
    else
    {
      saveCurrentLevel(DisplayPlan);
    }
    if(posY==41)
    {
      switchLocation=true;
      saveCurrentLevel(DisplayPlan);
      LevelId=DisplayPlan[4];
      posY=-4;
    }
  }
  else if(gb.buttons.pressed(BUTTON_B)) //use lore
  {
    if(DisplayPlan[7]>0 && Lore>0)
    {
      //gb.sound.fx(magicSfx);
      //gb.lights.fill(BLUE);
      magicSfx();
      gb.myLED.setRGB(0,0,5);
      if(DisplayPlan[7]<4)
      {
        DisplayPlan[7]=0;
      }
      else
      {
        DisplayPlan[7]-=4;
      }
      Lore--;
      Score-=10;
      saveCurrentLevel(DisplayPlan);
    }
  }
  else
  {
    if(climbing==true)
    {
      hanging=true;
    }
    walking=false;
    saveCurrentLevel(DisplayPlan);
  }
  if(gb.buttons.pressed(BUTTON_A))
  {
    if(climbing==false)
    {
      walking=false;
      attacking=true;
    }
    if(Fight==true)
    {
      //gb.sound.fx(punchSfx);
      punchSfx();
      if(DisplayPlan[7]==1) //points for monster kill
      {
        Score+=50;
      }
      DisplayPlan[7]--; 
    }
    if(switchLocation==false)
    {
      saveCurrentLevel(DisplayPlan);
    }
  }
  else if(gb.buttons.pressed(BUTTON_MENU))
  {
    pauseMenu=true;
    pauseChoice=1;
    cursorPosY=41;
    saveCurrentLevel(DisplayPlan);
  }
  else
  {
    attacking=false;
  }
}

void drawLevel(uint8_t displayPlan[114])
{
  drawChamber(displayPlan);
  drawPlayer(posX,posY,climbing,walking,attacking,playerDirection);
  drawGUI(PlayerHP,displayPlan[7],Lore,Keys);
}

//----------------------Moving logic---------------
bool checkFloorBordersRight(uint8_t arr[114])
{
  bool result=false;
  if(posY==2)
  {
    if(arr[13]>=posX+8)
    {
      result=true;
    }
  }
  else if(posY==20)
  {
    if(arr[11]>=posX+8)
    {
      result=true;
    }
  }
  else if(posY==37)
  {
    if(arr[9]>=posX+8)
    {
      result=true;
    }
  }
  return result;
}

bool checkFloorBordersLeft(uint8_t arr[114])
{
  bool result=false;
  if(posY==2)
  {
    if(arr[12]<=posX-1)
    {
      result=true;
    }
  }
  else if(posY==20)
  {
    if(arr[10]<=posX-1)
    {
      result=true;
    }
  }
  else if(posY==37)
  {
    if(arr[8]<=posX-1)
    {
      result=true;
    }
  }
  return result;
}

bool checkElevationUp(uint8_t arr[114]) //elevation check for climbing up
{
  bool result=false;
  if((posY<=37) && (posY>20) && (posX>=arr[14]) && ((posX+7)<=(arr[14]+8)))
  {
    result=true;
  }
  else if((posY<=20) && (posY>2) && (posX>=arr[15]) && ((posX+7)<=(arr[15]+8)))
  {
    result=true;
  }
  else if((posY<=2) && (posX>=arr[16]) && ((posX+7)<=(arr[16]+8)))
  {
    result=true;
  }
  else if((posY>37) && (posX>=arr[17]) && ((posX+7)<=(arr[17]+8)))
  {
    result=true;
  }

  return result;
}

bool checkElevationDown(uint8_t arr[114]) //elevation check for climbing down
{
  bool result=false;
  if((posY<37) && (posY>=20) && (posX>=arr[14]) && ((posX+7)<=(arr[14]+8)))
  {
    result=true;
  }
  else if((posY<20) && (posY>=2) && (posX>=arr[15]) && ((posX+7)<=(arr[15]+8)))
  {
    result=true;
  }
  else if((posY>=37) && (posX>=arr[17]) && ((posX+7)<=(arr[17]+8)))
  {
    result=true;
  }
  else if((posY<2) && (posX>=arr[16]) && ((posX+7)<=(arr[16]+8)))
  {
    result=true;
  }
  
  return result;
}
//----------------------Object collision----------------
void checkCollider(uint8_t displayPlan[114],String moveDirection) //we check if player hit collectible
{
  if(posY==2)
  {
    SelectedField= 33+identifyMapField(moveDirection);
  }
  else if(posY==20)
  {
    SelectedField= 63+identifyMapField(moveDirection);
  }
  else if(posY==37)
  {
    SelectedField= 93+identifyMapField(moveDirection);
  }

  if(displayPlan[SelectedField]==33)//collision with the cup
  {
    //gb.sound.fx(cupSfx);
    //gb.lights.fill(RED);
    cupSfx();
    gb.myLED.setRGB(5,0,0);
    displayPlan[SelectedField]=0; //clear cup base
    displayPlan[SelectedField-10]=0; //clear cup up
    PlayerHP+=11;
    Score-=1;
    if(PlayerHP>24)
    {
      PlayerHP=24;
    }
  }
  else if(displayPlan[SelectedField]==31) //collision with the diamond
  {
    //gb.sound.fx(diamondSfx);
    //gb.lights.fill(YELLOW);
    diamondSfx();
    gb.myLED.setRGB(5,5,0);
    displayPlan[SelectedField]=0; //clear diamond base
    displayPlan[SelectedField-10]=0; //clear diamond up
    Score+=10;
    Keys--;
    checkGateStatus(); //we check if gate will open
  }
  else if(displayPlan[SelectedField]==35) //collision with the power
  {
    //gb.sound.fx(loreSfx);
    //gb.lights.fill(BLUE);
    loreSfx();
    gb.myLED.setRGB(0,0,5);
    displayPlan[SelectedField]=0; //clear power base
    displayPlan[SelectedField-10]=0; //clear power up
    Lore+=2;
    if(Lore>9)
    {
      Lore=9;
    }
  }
}

uint8_t identifyMapField(String moveDirection) //we identify array field of chamber
{
  uint8_t mapField=0;
  uint8_t result=(posX/8);
  uint8_t rest=posX%8;
  if(rest==0)
  {
    mapField=result;
  }
  else
  {
    mapField=result+1;
  }

  return mapField;
}

void checkGateStatus()
{
  if(Keys<=0)
  {
    openGate();
  }
}

//----------------------Enemy----------------
bool checkEnemyPositionRight(uint8_t arr[114])
{
  bool result=false;
  if(arr[7]==0) //if enemy is death or no enemy
  {
    return result;
  }
  if(posY==2 && arr[19]==2)
  {
    if(arr[18]==posX+7)//start point of player + sprite width (7)
    {
      result=true;
    }
    else if(arr[18]==posX+5)
    {
      result=true;
      posX-=2;
    }
  }
  else if(posY==20 && arr[19]==20)
  {
    if(arr[18]==posX+7)
    {
      result=true;
    }
    else if(arr[18]==posX+5)
    {
      result=true;
      posX-=2;
    }
  }
  else if(posY==37 && arr[19]==37)
  {
    if(arr[18]==posX+7)
    {
      result=true;
    }
    else if(arr[18]==posX+6)
    {
      result=true;
      posX-=2;
    }
  }
  return result;
}

bool checkEnemyPositionLeft(uint8_t arr[114])
{
  bool result=false;
  if(arr[7]==0) //if enemy is death or no enemy
  {
    return result;
  }
  if(posY==2 && arr[19]==2)
  {
    if(arr[18]+7==posX)//start point of enemy + sprite width (7) + 1
    {
      result=true;
    }
    else if(arr[18]+5==posX)
    {
      posX+=2;
      result=true;
    }
  }
  else if(posY==20 && arr[19]==20)
  {
    if(arr[18]+7==posX)
    {
      result=true;
    }
    else if(arr[18]+5==posX)
    {
      posX+=2;
      result=true;
    }
  }
  else if(posY==37 && arr[19]==37)
  {
    if(arr[18]+7==posX)
    {
      result=true;
    }
    else if(arr[18]+5==posX)
    {
      posX+=2;
      result=true;
    }
  }
  return result;
}

void enemyTurn(uint8_t displayPlan[114])
{
  if(displayPlan[6]!=0 && displayPlan[7]>0) //if level does not contain enemy or enemy was defeated
  {
    enemyActions(displayPlan);
    drawEnemySprite(displayPlan);
  }
}

void enemyActions(uint8_t displayPlan[114])
{
  if(Fight==true) // Enemy fighting
  {
    if(frameMod!=3)
    {
      frameMod++;
    }
    else
    {
      if(enemyHit()==true)
      {
        //gb.lights.fill(RED);
        gb.myLED.setRGB(5,0,0);
        PlayerHP--;
        if(PlayerHP<=0)
        {
          PlayerHP=0;
          endGame=true;
        } 
      }
      frameMod=0; 
    }
  }
  if(displayPlan[20]!=0 && displayPlan[21]!=0) //if enemy is mobile it will move
  {
    if(displayPlan[22]==0) //if enemy is moving left
    {
      if(checkEnemyPositionRight(displayPlan))
      {
        return;
      }
      if(displayPlan[18]>displayPlan[20]) //if enemy posX is higher than Left Enemy border
      {
        displayPlan[18]--;
      }
      else //change enemy move direction
      {
        displayPlan[22]=1;
      }
    }
    else //enemy is moving right
    {
      if(checkEnemyPositionLeft(displayPlan))
      {
        return;
      }
      if(displayPlan[18]<displayPlan[21]) //if enemy posX is lower than Right Enemy border
      {
        displayPlan[18]++;
      }
      else //change enemy move direction
      {
        displayPlan[22]=0;
      }
    }
  }
}

bool enemyHit() //random chance to strike
{
  uint8_t randomNumber  = random(0,10);
  if(randomNumber==0 || randomNumber==2 || randomNumber==4 ||randomNumber==6 || randomNumber==8)
  {
    return true;
  }
  return false;
}

void drawEnemySprite(uint8_t displayPlan[114])
{
  switch(displayPlan[6])
  {
    case 1:
      drawGhostEnemy(displayPlan); break;
    case 2:
      drawSkullEnemy(displayPlan); break;
    case 3:
      drawAxeGhostEnemy(displayPlan);break;
    case 4:
      drawChimereEnemy(displayPlan);break;
    case 5:
      drawSkeletonEnemy(displayPlan);break;
    case 6:
      drawSpectreEnemy(displayPlan);break;
    case 7:
      drawSnakeEnemy(displayPlan);break;
    case 8:
      drawKnightEnemy(displayPlan);break;
    case 9:
      drawGargoyleEnemy(displayPlan);break;
    case 10:
      drawGuardianEnemy(displayPlan);break;
    case 11:
      drawWraithEnemy(displayPlan);break;
  }
}

void checkEnemyCollision(uint8_t displayPlan[114]) //we check if enemy and player are engaged
{
  if((posY==displayPlan[19]) && (displayPlan[7]>0) && ((posX+7==displayPlan[18])||(posX-1==displayPlan[18]+6)))
  {
    Fight=true;
  }
  else
  {
    Fight=false;
    frameMod=0;
  }
}
