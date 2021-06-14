#include "Sfx.h"

void Sfx::jump()
{
    gb.sound.tone(200,80);
    //gb.sound.fx(jump_fx);
}
void Sfx::climb()
{
    gb.sound.tone(200,30);
    //gb.sound.fx(climb_fx);
}
void Sfx::apple()
{
    gb.sound.tone(100,50);
    delay(50);
    gb.sound.tone(200,50);
    //gb.sound.fx(apple_fx);
}
void Sfx::takeFrag()
{
    gb.sound.tone(100,50);
    delay(50);
    gb.sound.tone(300,50);
    delay(50);
    gb.sound.tone(500,50);
    //gb.sound.fx(take_frag_fx);
}
void Sfx::dropFrag()
{
    gb.sound.tone(400,50);
    delay(50);
    gb.sound.tone(200,50);
    //gb.sound.fx(drop_frag_fx);
}
void Sfx::dropFragCtnr(uint8_t index)
{
    gb.sound.tone(400,50);
    delay(50);
    gb.sound.tone(200,50);
    switch(index)
    {
        case 0:
            //gb.sound.fx(drop_frag1_ctnr_fx);
            break;
        case 1:
            //gb.sound.fx(drop_frag2_ctnr_fx);
            break;
        case 2:
            //gb.sound.fx(drop_frag3_ctnr_fx);
            break;
        case 3:
            //gb.sound.fx(drop_frag4_ctnr_fx);
            break;
    }
}

void Sfx::lose()
{
    //gb.sound.fx(lose_fx);
    gb.sound.tone(400,50);
    delay(50);
    gb.sound.tone(200,50);
    delay(50);
    gb.sound.tone(400,50);
}
void Sfx::win()
{
    //gb.sound.fx(win_fx);
    gb.sound.tone(100,100);
    delay(100);
    gb.sound.tone(400,100);
    delay(100);
    gb.sound.tone(700,300);
    delay(300);
}
void Sfx::door()
{
    gb.sound.tone(100,100);
 //   gb.sound.fx(door_fx); 
}
