//----------------------------------------------------------------------    
//                     P A Q M A N by Yoda Zhang
//                     Ported on META by Jicehel
//----------------------------------------------------------------------    

#include <Gamebuino-Meta.h>
#include "z_specific.h"
#include "z_highscore.h"

// define variables and constants
String gamestatus;
byte lives;
byte gamelevel;
byte checkleft;
byte checkright;
byte checktop;
byte checkbottom;
int yeahtimer;
int deadtimer;

byte paqmanx;
byte paqmany;
int paqmanxadd;
int paqmanyadd;
int paqmanxdir;
int paqmanydir;
int paqmanghostxdir;
int paqmanghostydir;
int paqmanwantxdir;
int paqmanwantydir;
byte paqmanshape;
byte paqmananimation;
byte dotstoeat;
byte leveldots[132];
int powerpilltimer;
int ghostscore;
byte waittime;
byte ghostx[4];
byte ghosty[4];
int ghostxadd[4];
int ghostyadd[4];
int ghostxdir[4];
int ghostydir[4];
int ghostxgoal[4];
int ghostygoal[4];
int ghoststatus[4];
float distance[4];
int ghostnomove;
int posadd[4]={-1, 1, -32, 32};
int checkxdir[4]={-1, 1, 0, 0};
int checkydir[4]={0, 0, -1, 1};
int checkoppx[4]={1, -1, 0, 0};
int checkoppy[4]={0, 0, 1, -1};
int checkvalue;
int cpos;
int u1;
int u2;
String ghostmode;
int ghostmodetime;
int screenyoffset;
int screenxoffset;
byte animationframe;
byte animationcounter;
byte fruitshape;
byte fruitvisible;
int checkbyte;
int checkbit;
int checkval;
int paqpos;
byte backgroundtimer;
byte backgroundsound;

const SaveDefault savefileDefaults[] = {
  { 0, SAVETYPE_INT, 9999, 0 },
  { 1, SAVETYPE_BLOB, NAMELENGTH+1, 0 },
  { 2, SAVETYPE_INT, 9999, 0 },
  { 3, SAVETYPE_BLOB, NAMELENGTH+1, 0 },
  { 4, SAVETYPE_INT, 9999, 0 },
  { 5, SAVETYPE_BLOB, NAMELENGTH+1, 0 },
  { 6, SAVETYPE_INT, 9999, 0 },
  { 7, SAVETYPE_BLOB, NAMELENGTH+1, 0 },
  { 8, SAVETYPE_INT, 9999, 0 },
  { 9, SAVETYPE_BLOB, NAMELENGTH+1, 0 },
};

byte dotscreen[]={
B00000000,B00000000,B00000000,B00000000,
B00000000,B00000000,B00000000,B00000000,
B01111111,B11111001,B11111111,B11100000,
B01000010,B00001001,B00000100,B00100000,
B01000010,B00001001,B00000100,B00100000,
B01000010,B00001001,B00000100,B00100000,
B01111111,B11111111,B11111111,B11100000,
B01000010,B01000000,B00100100,B00100000,
B01000010,B01000000,B00100100,B00100000,
B01111110,B01111001,B11100111,B11100000,
B00000010,B00000000,B00000100,B00000000,
B00000010,B00000000,B00000100,B00000000,
B00000010,B00000000,B00000100,B00000000,
B00000010,B00000000,B00000100,B00000000,
B00000010,B00000000,B00000100,B00000000,
B00000010,B00000000,B00000100,B00000000,
B00000010,B00000000,B00000100,B00000000,
B00000010,B00000000,B00000100,B00000000,
B00000010,B00000000,B00000100,B00000000,
B00000010,B00000000,B00000100,B00000000,
B00000010,B00000000,B00000100,B00000000,
B01111111,B11111001,B11111111,B11100000,
B01000010,B00001001,B00000100,B00100000,
B01000010,B00001001,B00000100,B00100000,
B01110011,B11111001,B11111100,B11100000,
B00010010,B01000000,B00100100,B10000000, 
B00010010,B01000000,B00100100,B10000000, 
B01111110,B01111001,B11100111,B11100000,
B01000000,B00001001,B00000000,B00100000,
B01000000,B00001001,B00000000,B00100000,
B01111111,B11111111,B11111111,B11100000,
B00000000,B00000000,B00000000,B00000000,
B00000000,B00000000,B00000000,B00000000};

byte mazescreen[]={
B11111111,B11111111,B11111111,B11111111,
B11111111,B11111111,B11111111,B11111111,
B10000000,B00000110,B00000000,B00011111,
B10111101,B11110110,B11111011,B11011111,
B10111101,B11110110,B11111011,B11011111,
B10111101,B11110110,B11111011,B11011111,
B10000000,B00000000,B00000000,B00011111,
B10111101,B10111111,B11011011,B11011111,
B10111101,B10111111,B11011011,B11011111,
B10000001,B10000110,B00011000,B00011111,
B11111101,B11110110,B11111011,B11111111,
B11111101,B11110110,B11111011,B11111111,
B11111101,B10000000,B00011011,B11111111,
B11111101,B10111001,B11011011,B11111111,
B11111101,B10111001,B11011011,B11111110,
B00000000,B00110000,B11000000,B00000111,
B11111101,B10111111,B11011011,B11111111,
B11111101,B10111111,B11011011,B11111111,
B11111101,B10000000,B00011011,B11111111,
B11111101,B10111111,B11011011,B11111111,
B11111101,B10111111,B11011011,B11111111,
B10000000,B00000110,B00000000,B00011111,
B10111101,B11110110,B11111011,B11011111,
B10111101,B11110110,B11111011,B11011111,
B10001100,B00000000,B00000011,B00011111,
B11101101,B10111111,B11011011,B01111111,
B11101101,B10111111,B11011011,B01111111,
B10000001,B10000110,B00011000,B00011111,
B10111111,B11110110,B11111111,B11011111,
B10111111,B11110110,B11111111,B11011111,
B10000000,B00000000,B00000000,B00011111,
B11111111,B11111111,B11111111,B11111111,
B11111111,B11111111,B11111111,B11111111};

// define images
extern const byte PROGMEM gamelogo[];
extern const byte PROGMEM readylogo[];
extern const byte PROGMEM paqman[20][7];
extern const byte PROGMEM ghost[12][7];
extern const byte PROGMEM fruit[8][7];
extern const byte PROGMEM mazeimage[];

// setup
void setup(){
  gb.begin();
  gb.setFrameRate(30);
  // gb.titleScreen(F("    Yoda's"),gamelogo);
  initHighscore();
  gb.pickRandomSeed();
  gamestatus="title";
}


//----------------------------------------------------------------------------
void showtitle() {
  gb.display.clear();
  gb.display.setColor(WHITE);
  gb.display.cursorX=0;
  gb.display.cursorY=0;   
  gb.display.print("  LAST         HIGH");
  gb.display.cursorX=14-2*(score>9)-2*(score>99)-2*(score>999);
  gb.display.cursorY=6;
  gb.display.print(score);
  gb.display.cursorX=66-2*(highscore[0]>9)-2*(highscore[0]>99)-2*(highscore[0]>999);
  gb.display.cursorY=6;
  gb.display.print(highscore[0]);
  gb.display.setColor(YELLOW);
  gb.display.drawBitmap(10,18,gamelogo);
  gb.display.cursorX=0;
  gb.display.cursorY=56;
  gb.display.setColor(WHITE);
  gb.display.print("A: PLAY   MENU: QUIT");
  if (gb.buttons.pressed(BUTTON_A)) {
    gamestatus="newgame";
    gb.sound.playOK();
  }
  if (gb.buttons.pressed(BUTTON_MENU)) {
    // gb.titleScreen(F("Yoda's"),gamelogo);
  }
}

// loop
void loop(){
  if(gb.update()){

    // new game
    if (gamestatus=="newgame"){ newgame(); }

    // new level
    if (gamestatus=="newlevel") { newlevel(); }

    // new life
    if (gamestatus=="newlife") { newlife(); }

    // game running
    if (gamestatus=="running"){
      gb.display.clear();
      handleanimation(); //handle animation
      drawmaze(); //draw maze
      drawfruit(); //draw fruit      
      drawpaqman(); //draw paqman
      drawready(); //draw ready
      checkbuttons(); // check buttons and set next direction for paqman
      movepaqman(); //move paqman
      paqmanfulltile(); //if paqman at full tile position ...      
      determineshape(); //determine paqman shape
      nextlevelcheck(); //level finished
      drawdotspills(); //draw dots & pills
      ghostmodetimer(); //ghost mode timer
      settargettiles(); //set target tiles
      handlepowerpilltimer(); //power pill timer
      moveghosts(); //move ghosts
      checkghostcollission(); // check collission with ghosts
      drawghosts(); //draw ghosts
      showscore(); // show lives, score, level
    }

    // title
    if (gamestatus=="title") { showtitle(); }

    // game over
    if (gamestatus=="gameover") { saveHighscore(score); }

  } // end of loop
 } // end of update
