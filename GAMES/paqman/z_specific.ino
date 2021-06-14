// GLOBAL VARS

extern String gamestatus;
extern byte lives;
extern byte gamelevel;
extern byte checkleft;
extern byte checkright;
extern byte checktop;
extern byte checkbottom;
extern int yeahtimer;
extern int deadtimer;

//----------------------------------------------------------------------------
void newgame(){
  score=0;
  lives=3;
  gamelevel=0;
  gamestatus="newlevel"; 
}
//----------------------------------------------------------------------------
void newlevel() {
  for (int i = 0 ; i < 132 ; i++) { leveldots[i]=dotscreen[i]; }
  dotstoeat=244;
  fruitshape=gamelevel;
  gb.sound.play("pacman_beginning.wav");
  delay (400);
  if (fruitshape>7) { fruitshape=7; }
  gamestatus="newlife"; 
}
//----------------------------------------------------------------------------
void newlife() {
  powerpilltimer=0;
  yeahtimer=0;
  deadtimer=-1;
  paqmanx=13;
  paqmany=24;
  paqmanxadd=2;
  paqmanyadd=0;
  paqmanxdir=1;
  paqmanydir=0;
  paqmanghostxdir=1;
  paqmanghostydir=1;
  paqmanshape=12;
  paqmananimation=3;
  fruitvisible=0;
  waittime=30;
  ghostx[0]=13;
  ghosty[0]=12;
  ghostxadd[0]=1;
  ghostyadd[0]=0;
  ghostxdir[0]=1;
  ghostydir[0]=0;
  ghostx[1]=12;
  ghosty[1]=15;
  ghostxadd[1]=0;
  ghostyadd[1]=0;
  ghostxdir[1]=1;
  ghostydir[1]=0;
  ghostx[2]=13;
  ghosty[2]=15;
  ghostxadd[2]=2;
  ghostyadd[2]=0;
  ghostxdir[2]=1;
  ghostydir[2]=0;
  ghostx[3]=15;
  ghosty[3]=15;
  ghostxadd[3]=0;
  ghostyadd[3]=0;
  ghostxdir[3]=-1;
  ghostydir[3]=0;
  ghostmode="chase";
  ghostmodetime=1;
  gamestatus="running";
}
//----------------------------------------------------------------------------
void showscore(){
  if (screenyoffset==-5 or screenyoffset==56) {
    int i=0;
    if (screenyoffset==56) { i=43; }
    gb.display.setColor(YELLOW);
    if (lives>1) { gb.display.drawBitmap(0,i,paqman[3]); }
    if (lives>2) { gb.display.drawBitmap(6,i,paqman[3]); }
    gb.display.setColor(WHITE);
    gb.display.cursorX=40-2*(score>9)-2*(score>99)-2*(score>999);
    gb.display.cursorY=i;
    gb.display.print(score);
    gb.display.cursorX=72;
    gb.display.print(gamelevel+1);
  }
}
//----------------------------------------------------------------------------
void nextlevelcheck() {
  if (yeahtimer>0) {
    yeahtimer=--yeahtimer;
    if (yeahtimer==0) {
      gamelevel=gamelevel+1;
      gamestatus="newlevel"; 
    } 
  }  
}
//----------------------------------------------------------------------------
void handledeath() {
  deadtimer=--deadtimer;
  int i = 7 - deadtimer / 10;
  gb.display.setColor(YELLOW);
  gb.display.drawBitmap(paqmanx*3+paqmanxadd-1-screenxoffset,paqmany*3+paqmanyadd-screenyoffset-1,paqman[12+i]);
  if (deadtimer==0) {
    deadtimer=-1;
    lives=--lives;  
    if (lives == 0) {
      gamestatus = "gameover";
    } else {
      gamestatus = "newlife";          
    }          
  }
}
//----------------------------------------------------------------------------
void drawpaqman() {
  if (deadtimer==-1) {
    gb.display.setColor(YELLOW);
    gb.display.drawBitmap(paqmanx*3+paqmanxadd-1-screenxoffset,paqmany*3+paqmanyadd-screenyoffset-1,paqman[paqmanshape+paqmananimation]);
  } else { handledeath(); }
}
//----------------------------------------------------------------------------
void drawready() {
  if (waittime>0) {
    gb.display.setColor(WHITE);
    if (animationframe==0) { gb.display.drawBitmap(32-screenxoffset,2,readylogo); }      
    waittime=--waittime;
  }
}
//----------------------------------------------------------------------------
void handleanimation() {
  animationcounter=++animationcounter % 4;
  if (animationcounter==0) { animationframe=++animationframe % 2; } 
}
//----------------------------------------------------------------------------
void drawmaze() {
  screenyoffset=((paqmany-7)*3)+paqmanyadd;
  if (screenyoffset<-5) { screenyoffset=-5; } // <0
  if (screenyoffset>56) { screenyoffset=56; } // >51
  if (paqmanx > 21) {
    screenxoffset = 7;
  } else if ( paqmanx > 14 ) {
    screenxoffset = 5 - (20 - paqmanx);
  } else if ( (paqmanx > 12) ) {
    screenxoffset = 0;
  } else if ( (paqmanx > 5)) {
    screenxoffset = paqmanx - 13 ;
  } else {screenxoffset = - 7 ; }
  
  if (yeahtimer==0) {
    gb.display.setColor(BLUE);
    gb.display.drawBitmap(-screenxoffset ,-screenyoffset,mazeimage);
  } else {
    if (animationframe==0) { gb.display.drawBitmap(-screenxoffset,-screenyoffset,mazeimage); }        
  }
}
//----------------------------------------------------------------------------
void drawfruit() {
  if (fruitvisible==0 and (dotstoeat==174 or dotstoeat==74)) { fruitvisible=400; }
  if (fruitvisible>0) {
    gb.display.setColor(RED);
    gb.display.drawBitmap(41-screenxoffset,53-screenyoffset,fruit[fruitshape]);
    fruitvisible=--fruitvisible;
    if ((paqmanx==13 or paqmanx==14) and paqmany==18) {
      //fruit eaten
      fruitvisible=0;
      score=score+100*gamelevel;
      gb.sound.fx(eat_bigdot); 
      gb.sound.tone(70,70);
    }         
  }
}

//----------------------------------------------------------------------------
void checkbuttons() {
  if (gb.buttons.repeat(BUTTON_UP,0)) {
    paqmanwantydir=-1;
    paqmanwantxdir=0;
  }      
  if (gb.buttons.repeat(BUTTON_DOWN,0)) {
    paqmanwantydir=1;
    paqmanwantxdir=0;
  }
  if (gb.buttons.repeat(BUTTON_LEFT,0)) {
    paqmanwantxdir=-1;
    paqmanwantydir=0;
  }      
  if (gb.buttons.repeat(BUTTON_RIGHT,0)) {
    paqmanwantxdir=1;
    paqmanwantydir=0;
  }
  if (gb.buttons.pressed(BUTTON_MENU)) {
    // gb.titleScreen(F("    Yoda's"),gamelogo);
    gamestatus="title";
  }
}
//----------------------------------------------------------------------------
void movepaqman() {
  if (waittime==0 and yeahtimer==0 and deadtimer==-1) {
    paqmanxadd=paqmanxadd+paqmanxdir;
    paqmanyadd=paqmanyadd+paqmanydir;
    if (paqmanxdir != 0 or paqmanydir != 0) { paqmananimation=++paqmananimation % 4; }
  }
  if (paqmanxadd>=3 or paqmanxadd<=-3) {
    paqmanxadd=0;
    paqmanx=paqmanx+paqmanxdir;
  }
  if (paqmanyadd>=3 or paqmanyadd<=-3) {
    paqmanyadd=0;
    paqmany=paqmany+paqmanydir;
  }
  //use tunnel
  if (paqmanx<=0 and paqmanxdir==-1) {
    paqmanx=27;
  }
  if (paqmanx>=27 and paqmanxdir==1) {
    paqmanx=0;
  } 
}
//----------------------------------------------------------------------------
void paqmanfulltile() {
  if (paqmanxadd==0 and paqmanyadd==0) {
    //check if dot eaten
    paqpos = paqmanx+paqmany*32;
    checkbyte = paqpos >> 3;
    checkbit = 7-(paqpos % 8);
    checkval = leveldots[checkbyte] >> checkbit & 1;
    if (checkval==1) {
      dotstoeat=--dotstoeat;
      if (dotstoeat % 2 == 0) {
        //gb.sound.fx(eat_dot1);
        gb.sound.tone(70,70);
      } else {
        gb.sound.tone(120,70);
        gb.sound.fx(eat_dot2);
      }
      leveldots[checkbyte]=leveldots[checkbyte]-(1 << checkbit);
      if ((paqmanx==1 or paqmanx==26) and (paqmany==4 or paqmany==24)) {
        // power pill eaten
        gb.sound.tone(100,50);
        delay(50);
        gb.sound.tone(200,50);
        delay(50);
        gb.sound.tone(300,50);
        gb.sound.fx(eat_bigdot);
        score=score+50;
        powerpilltimer=180-gamelevel*15;
        ghostscore=200;
      } else {
        // dot eaten
        score=score+10;        
      }
      if (dotstoeat==0) {
        yeahtimer=60;
      }
    }        

  //check next tile
    paqpos = (paqmanx+paqmanwantxdir)+(paqmany+paqmanwantydir)*32;
    checkbyte = paqpos >> 3;
    checkbit = 7-(paqpos % 8);
    checkval = mazescreen[checkbyte] >> checkbit & 1;
    if (checkval == 0) {
      paqmanxdir=paqmanwantxdir;
      paqmanydir=paqmanwantydir;
      paqmanghostxdir=paqmanxdir;
      paqmanghostydir=paqmanydir;
    }
    paqpos = (paqmanx+paqmanxdir)+(paqmany+paqmanydir)*32;
    checkbyte = paqpos >> 3;
    checkbit = 7-(paqpos % 8);
    checkval = mazescreen[checkbyte] >> checkbit & 1;
    if (checkval != 0) {
      paqmanxdir=0;
      paqmanydir=0;          
    }
  }
}
//----------------------------------------------------------------------------
void determineshape() {
  if (paqmanxdir==-1) { paqmanshape=8; }
  if (paqmanxdir==1) { paqmanshape=0; }
  if (paqmanydir==1) { paqmanshape=4; }
  if (paqmanydir==-1) { paqmanshape=12; }
}
//----------------------------------------------------------------------------
void drawdotspills() {
  int drawp=64;
  for (checkbyte=8 ; checkbyte<124 ; checkbyte++) {
    for (checkbit=7 ; checkbit>=0 ; checkbit--) {
      checkval=(leveldots[checkbyte] >> checkbit) & 1;
      if (checkval==1) {
        int drawx=drawp % 32;
        int drawy=drawp >> 5;
        int drawyp=drawy*3-screenyoffset;
        if ((drawx==1 or drawx==26) and (drawy==4 or drawy==24) and drawyp>=0 and drawyp<48){
          if (animationframe==1) {
            gb.display.drawFastHLine(drawx*3-screenxoffset,drawyp+1,3);
            gb.display.drawFastVLine(drawx*3+1-screenxoffset,drawyp,3);
          }
        } else {
        gb.display.drawPixel(drawx*3+1-screenxoffset,drawyp+1);            
        }
      }
    drawp=++drawp;
    }                
  } 
}
//----------------------------------------------------------------------------
void ghostmodetimer() {
  ghostmodetime=--ghostmodetime;
  if (ghostmodetime<=0) {
    if (ghostmode=="chase") {
      ghostmode="scatter";
      ghostmodetime=300-gamelevel*60;
    } else {
      ghostmode="chase";
      ghostmodetime=600+gamelevel*150; 
    }                
  } 
}
//----------------------------------------------------------------------------
void settargettiles() {
  if (powerpilltimer>0) { //power pill active -> random goals
    ghostxgoal[0]=random(28);
    ghostygoal[0]=random(33);
    ghostxgoal[1]=random(28);
    ghostygoal[1]=random(33);
    ghostxgoal[2]=random(28);
    ghostygoal[2]=random(33);
    ghostxgoal[3]=random(28);
    ghostygoal[3]=random(33);
  } else {
    if (ghostmode=="scatter") { //scatter -> go to corners
      ghostxgoal[0]=0;
      ghostygoal[0]=0;          
      ghostxgoal[1]=27;
      ghostygoal[1]=0;          
      ghostxgoal[2]=0;
      ghostygoal[2]=32;          
      ghostxgoal[3]=27;
      ghostygoal[3]=32;
    } else { //chase -> follow pacman
      ghostxgoal[0]=paqmanx; // ghost 1: target = paqman
      ghostygoal[0]=paqmany;              
      ghostxgoal[1]=paqmanx+paqmanghostxdir*4; // ghost 2: target = 4 tiles in front of paqman
      ghostygoal[1]=paqmany+paqmanghostydir*4;
      ghostxgoal[2]=ghostx[0]+((paqmanx+paqmanghostxdir*2)-ghostx[0])*2; // ghost 3: target double vector distance ghost 1 to paqman
      ghostygoal[2]=ghosty[0]+((paqmany+paqmanghostydir*2)-ghosty[0])*2;
      if ((paqmanx-ghostx[3])*(paqmanx-ghostx[3]) + (paqmany-ghosty[3])*(paqmany-ghosty[3]) < 8) { // ghost 4: paqman if distance >8, else corner
        ghostxgoal[3]=27;
        ghostygoal[3]=32;
      } else {
        ghostxgoal[3]=paqmanx;
        ghostygoal[3]=paqmany;
      }    
    }          
  }
  for (int i=0 ; i<4 ; i++) {
    if (ghoststatus[i]==1) { //ghost eyes -> return home
      ghostxgoal[i]=13;
      ghostygoal[i]=15;
    }
  }   
}
//----------------------------------------------------------------------------
void drawghosts() {
  if (deadtimer == -1 or deadtimer>60) {
    for (int i=0 ; i<4 ; i++) {
      int u=0;
      if (ghostxdir[i]==1) { u=2; }  
      if (ghostydir[i]==-1) { u=4; }  
      if (ghostydir[i]==1) { u=6; } 
      if (ghoststatus[i]==1) { u=10; } 
      if (powerpilltimer>0) { 
        u=8; 
        gb.display.setColor(BLUE);
        if ((powerpilltimer % 4 >  1)&&(ghoststatus[i]==1)) { gb.display.setColor(WHITE); }
        ghostmode="scatter";
      } else {
        if (i==1) { u=2;gb.display.setColor(LIGHTBLUE); }
        if (i==2) { u=2;gb.display.setColor(PINK); }
        if (i==3) { u=2;gb.display.setColor(ORANGE); }
        if (i==1) { u=2;gb.display.setColor(RED); }
      }  
      gb.display.drawBitmap(ghostx[i]*3+ghostxadd[i]-1-screenxoffset,ghosty[i]*3+ghostyadd[i]-screenyoffset-1,ghost[u+animationframe]);
    }
  } 
}
//----------------------------------------------------------------------------
void checkghostcollission() {
  for (int i=0 ; i<4 ; i++) {
    if (paqmanx*3+paqmanxadd <= ghostx[i]*3+ghostxadd[i]+1 and paqmanx*3+paqmanxadd >= ghostx[i]*3+ghostxadd[i]-1 and paqmany*3+paqmanyadd <= ghosty[i]*3+ghostyadd[i]+1 and paqmany*3+paqmanyadd >= ghosty[i]*3+ghostyadd[i]-1 and ghoststatus[i]==0 and deadtimer==-1) {
      // ghost eaten?
      if (powerpilltimer>0) {
        score=score+ghostscore;
        ghostscore=ghostscore*2;
        ghoststatus[i]=1;
         gb.sound.fx(eat_ghost);
         gb.sound.tone(100,50);
         delay(50);
         gb.sound.tone(400,50);
      } else { // paq man eaten
        deadtimer=90;
        // gb.sound.fx(dead); 
        gb.sound.play("pacman_death.wav");   
        gb.sound.tone(400,100); 
        delay(100); 
        gb.sound.tone(300,100); 
        delay(100);         
        gb.sound.tone(200,100); 
        delay(100); 
        gb.sound.tone(100,100); 
      }
    }
  }
}

//----------------------------------------------------------------------------
void handlepowerpilltimer() {
  backgroundtimer=++backgroundtimer % 5;
  if (powerpilltimer>0) {
    powerpilltimer=--powerpilltimer;
    if (backgroundtimer==0 and deadtimer==-1 and waittime==0 and yeahtimer==0) { 
      // playsoundfx(2,0); 
    }
  } else {
    if (backgroundtimer==0 and deadtimer==-1 and waittime==0 and yeahtimer==0) {
      // playsoundfx(backgroundsound,0);
      backgroundsound=++backgroundsound % 2;
    }
  }  
}

//----------------------------------------------------------------------------
/* */
void moveghosts() {
  if (ghostnomove>0) {
    ghostnomove=--ghostnomove;
    if (waittime==0 and yeahtimer==0 and deadtimer==-1) {
      for (int i=0 ; i<4 ; i++) {
        if (ghoststatus[i]==1) {               
          ghostxadd[i]=0;
          ghostyadd[i]=0;
          ghostx[i]=ghostx[i]+ghostxdir[i];
          ghosty[i]=ghosty[i]+ghostydir[i];              
        } else {
          ghostxadd[i]=ghostxadd[i]+ghostxdir[i];
          ghostyadd[i]=ghostyadd[i]+ghostydir[i];              
        }
        if (ghostxadd[i]>=3 or ghostxadd[i]<=-3) {
          ghostxadd[i]=0;
          ghostx[i]=ghostx[i]+ghostxdir[i];
        }
        if (ghostyadd[i]>=3 or ghostyadd[i]<=-3) {
          ghostyadd[i]=0;
          ghosty[i]=ghosty[i]+ghostydir[i];
        }       
        //use tunnel
        if (ghostx[i]<=0 and ghostxdir[i]==-1) {
          ghostx[i]=27;
        }
        if (ghostx[i]>=27 and ghostxdir[i]==1) {
          ghostx[i]=0;
        }
      }

      //if ghost at full tile position ...
      for (int i=0 ; i<4 ; i++) {
        if (ghostxadd[i]==0 and ghostyadd[i]==0) {
          paqpos = ghostx[i] + (ghosty[i] * 32);
          // check four possible directions
          for (int u=0 ; u<4 ; u++) {
            // check if possible and no 180 degree turn
            cpos = paqpos + posadd[u];
            checkbyte = cpos >> 3;
            checkbit = 7-(cpos % 8);
            checkvalue = mazescreen[checkbyte] >> checkbit & 1;
            if ((ghostx[i]==13 or ghostx[i]==14) and ghosty[i]==12 and ghoststatus[i] != 1 and u == 3) {
              checkvalue=1;
            }
            if (ghostxdir[i] == checkoppx[u] and ghostydir[i] == checkoppy[u] and (ghosty[i] != 15 or (ghostx[i] != 12 and ghostx[i] != 15))) {
              checkvalue=1;
            }
            //calculate distance from target point
            u1 = ghostx[i]+checkxdir[u];
            u1 = ghostxgoal[i] - u1;
            u2 = ghosty[i]+checkydir[u];
            u2 = ghostygoal[i] - u2;
            distance[u] = sqrt((u1*u1) + (u2*u2));
            if (checkvalue==1) { distance[u]=100; }
          }

          // choose direction with shortest distance
          int a = 99;
          int b = -1;
          for (int u=0 ; u < 4 ; u++) {
            if (distance[u] <= a) {
              a=distance[u];
              b=u;
            }
          }
          ghostxdir[i]=checkxdir[b];
          ghostydir[i]=checkydir[b];

        } // end if at full tile position

        // ghost eyes reached home?       
        if (ghostx[i]==13 and ghosty[i]==15 and ghoststatus[i]==1) {
          ghoststatus[i]=0;      
        }
      } // next ghost
    } // end of move ghosts
  } else {
    ghostnomove = gamelevel*2+2;
  } // end of ghost no move
}
//----------------------------------------------------------------------------
