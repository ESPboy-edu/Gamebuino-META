#ifndef _HIGHSCORE_H_
#define _HIGHSCORE_H_

#define NUM_HIGHSCORE 5
#define NAMELENGTH 12
extern void initHighscore();
extern void drawHighScores();
int score;
extern const byte font5x7[];
extern int highscore[NUM_HIGHSCORE];
extern bool drawNewHighscore(unsigned int newscore);

#endif _HIGHSCORE_H_
