//----------------------Levels---------------
uint8_t LevelPlan1[114]={
  9, //frame width 
  10, //frame height
  0, //north
  0, //west
  2, //south
  0, //east
  5, //enemyId
  16, //enemyHealth
  16,64, //Ground limit
  16,64, //Floor1 limit
  0,0, //Floor2 limit
  16, //Ground Ladder
  88, //Floor1 Ladder
  88, //Floor2 Ladder
  40, //FloorExit
  30, //Enemy PosX
  37, //Enemy PosY
  0, //Enemy LeftMax
  0, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  1,0,1,0,1,0,1,0,1,0, //17-26
  1,1,1,1,1,1,1,1,1,0, //27-36
  1,1,0,0,0,0,0,0,1,0, //37-46
  1,1,0,0,0,0,0,30,1,0, //47-56
  1,1,0,0,0,0,0,31,1,0, //57-66
  1,1,20,1,1,1,1,1,1,0, //67-76
  1,1,20,0,0,0,0,32,1,0,//77-86
  1,1,20,0,0,0,0,33,1,0,//87-96
  1,1,2,2,2,20,2,2,1,0//97-106
};

uint8_t LevelPlan2[114]={
  9, //frame width 
  10, //frame height
  1, //north
  0, //west
  0, //south
  3, //east
  6, //enemyId
  16, //enemyHealth
  16,80, //Ground limit
  16,80, //Floor1 limit
  16,48, //Floor2 limit
  88, //Ground Ladder
  16, //Floor1 Ladder
  40, //Floor2 Ladder
  88, //FloorExit
  40, //Enemy PosX
  20, //Enemy PosY
  30, //Enemy LeftMax
  60, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  1,1,0,0,0,20,1,1,1,1,
  1,1,0,0,0,20,1,1,1,1,
  1,1,20,1,1,1,1,1,0,0,
  1,1,20,0,0,0,0,0,0,0,
  1,1,20,0,0,0,0,0,0,0,
  1,1,1,1,1,1,1,1,1,1,
  1,1,0,32,0,0,0,0,0,0,
  1,1,0,33,0,0,0,0,0,0,
  1,1,2,2,2,2,2,2,2,2
};

uint8_t LevelPlan3[114]={
  9, //frame width 
  10, //frame height
  0, //north
  2, //west
  0, //south
  4, //east
  1, //enemyId
  16, //enemyHealth
  0,80, //Ground limit
  0,80, //Floor1 limit
  0,0, //Floor2 limit
  64, //Ground Ladder
  88, //Floor1 Ladder
  88, //Floor2 Ladder
  88, //FloorExit
  40, //Enemy PosX
  20, //Enemy PosY
  16, //Enemy LeftMax
  50, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  0,1,0,1,0,1,0,1,0,1, //24-33
  1,1,1,1,1,1,1,1,1,1, //34-43
  0,0,0,0,0,0,0,0,0,0, //44-53
  0,0,0,0,0,0,0,0,0,0, //54-63
  0,0,0,0,0,0,0,0,0,0, //64-73
  1,1,1,1,1,1,1,1,20,1, //74-83
  0,0,0,0,0,0,0,0,20,0,//84-93
  0,0,0,0,0,0,0,0,20,0,//94-103
  2,2,2,2,2,2,2,2,2,2//104-1113
};

uint8_t LevelPlan4[114]={
  9, //frame width 
  10, //frame height
  0, //north
  3, //west
  0, //south
  5, //east
  8, //enemyId
  16, //enemyHealth
  0,64, //Ground limit
  0,80, //Floor1 limit
  0,0, //Floor2 limit
  56, //Ground Ladder
  88, //Floor1 Ladder
  88, //Floor2 Ladder
  88, //FloorExit
  45, //Enemy PosX
  20, //Enemy PosY
  0, //Enemy LeftMax
  0, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  0,1,0,1,1,1,1,1,1,1,
  1,1,1,1,1,1,1,1,1,1,
  0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,
  1,1,1,1,1,1,1,1,1,1,
  0,0,0,0,0,30,0,1,1,1,
  0,0,0,0,0,31,0,1,1,1,
  2,2,2,2,2,2,2,1,1,1
};

uint8_t LevelPlan5[114]={
  9, //frame width 
  10, //frame height
  0, //north
  4, //west
  6, //south
  0, //east
  7, //enemyId
  16, //enemyHealth
  56,64, //Ground limit
  0,64, //Floor1 limit
  0,0, //Floor2 limit
  56, //Ground Ladder
  88, //Floor1 Ladder
  88, //Floor2 Ladder
  56, //FloorExit
  40, //Enemy PosX
  20, //Enemy PosY
  0, //Enemy LeftMax
  0, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  1,1,1,1,1,1,1,1,1,1,
  1,1,1,0,0,0,0,0,1,1,
  0,0,0,0,0,0,0,0,1,1,
  0,0,0,0,0,0,0,0,1,1,
  0,0,0,0,0,0,0,0,1,1,
  1,1,1,1,1,1,1,20,1,1,
  1,1,1,1,1,0,0,20,1,1,
  1,3,1,3,1,0,0,20,1,1,
  1,1,1,1,1,0,0,20,1,1
};

uint8_t LevelPlan6[114]={
  9, //frame width 
  10, //frame height
  5, //north
  16, //west
  0, //south
  7, //east
  4, //enemyId
  16, //enemyHealth
  16,80, //Ground limit
  56,64, //Floor1 limit
  56,64, //Floor2 limit
  56, //Ground Ladder
  56, //Floor1 Ladder
  56, //Floor2 Ladder
  88, //FloorExit
  35, //Enemy PosX
  37, //Enemy PosY
  0, //Enemy LeftMax
  0, //Enemy RightMax
  0, //Enemy Moving Direction
  16, //Secret
  1,1,1,1,1,1,0,20,1,1,
  1,1,1,1,1,1,0,20,1,1,
  1,1,1,1,1,1,0,20,1,1,
  1,1,0,0,0,0,0,20,1,1,
  1,1,0,0,0,0,0,20,1,1,
  1,1,0,0,0,0,0,20,1,1,
  1,1,0,0,0,0,0,20,0,0,
  1,1,0,0,0,0,0,20,0,0,
  1,1,2,2,2,2,2,2,2,2
};

uint8_t LevelPlan7[114]={
  9, //frame width 
  10, //frame height
  0, //north
  6, //west
  0, //south
  8, //east
  3, //enemyId
  16, //enemyHealth
  0,80, //Ground limit
  0,0, //Floor1 limit
  0,0, //Floor2 limit
  88, //Ground Ladder
  88, //Floor1 Ladder
  88, //Floor2 Ladder
  88, //FloorExit
  40, //Enemy PosX
  37, //Enemy PosY
  32, //Enemy LeftMax
  64, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  1,1,1,1,1,1,1,1,1,1,
  1,1,1,1,1,1,1,1,1,1,
  1,1,1,1,1,1,1,1,1,1,
  1,1,0,0,0,0,0,0,1,1,
  1,1,0,0,0,0,0,0,1,1,
  1,1,0,0,0,0,0,0,1,1,
  0,0,32,0,0,0,0,0,0,0,
  0,0,33,0,0,0,0,0,0,0,
  2,2,2,2,2,2,2,2,2,2
};

uint8_t LevelPlan8[114]={
  9, //frame width 
  10, //frame height
  0, //north
  7, //west
  0, //south
  9, //east
  2, //enemyId
  16, //enemyHealth
  0,80, //Ground limit
  0,0, //Floor1 limit
  0,0, //Floor2 limit
  88, //Ground Ladder
  88, //Floor1 Ladder
  88, //Floor2 Ladder
  88, //FloorExit
  40, //Enemy PosX
  37, //Enemy PosY
  20, //Enemy LeftMax
  60, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  1,1,1,1,1,1,1,1,1,1,
  1,1,1,1,1,1,1,1,1,1,
  1,1,1,1,1,1,1,1,1,1,
  1,1,1,1,1,1,1,1,1,1,
  1,4,1,1,1,1,1,1,4,1,
  1,1,1,1,1,1,1,1,1,1,
  0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,
  2,2,2,2,2,2,2,2,2,2
};

uint8_t LevelPlan9[114]={
  9, //frame width 
  10, //frame height
  0, //north
  8, //west
  33, //south
  10, //east
  8, //enemyId
  16, //enemyHealth
  0,56, //Ground limit
  48,80, //Floor1 limit
  0,0, //Floor2 limit
  48, //Ground Ladder
  88, //Floor1 Ladder
  88, //Floor2 Ladder
  32, //FloorExit
  64, //Enemy PosX
  20, //Enemy PosY
  0, //Enemy LeftMax
  0, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  1,1,11,0,0,13,1,1,1,1,
  1,1,11,0,0,13,1,1,1,1,
  1,1,11,0,0,13,0,0,0,0,
  1,1,11,0,0,13,0,0,0,0,
  1,1,11,0,0,13,0,0,0,0,
  1,1,11,0,0,13,20,1,1,1,
  0,0,11,0,0,13,20,1,1,1,
  0,0,11,0,0,13,20,1,1,1,
  2,2,2,2,20,2,2,1,1,1
};

uint8_t LevelPlan10[114]={
  9, //frame width 
  10, //frame height
  11, //north
  9, //west
  0, //south
  18, //east
  5, //enemyId
  16, //enemyHealth
  56,80, //Ground limit
  0,80, //Floor1 limit
  40,48, //Floor2 limit
  88, //Ground Ladder
  40, //Floor1 Ladder
  40, //Floor2 Ladder
  88, //FloorExit
  24, //Enemy PosX
  20, //Enemy PosY
  0, //Enemy LeftMax
  0, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  1,1,1,1,1,20,0,0,0,1,
  1,1,1,1,1,20,0,0,0,1,
  0,0,0,0,0,20,0,0,0,0,
  0,0,0,0,0,20,0,30,0,0,
  0,0,0,0,0,20,0,31,0,0,
  1,1,1,1,1,1,1,1,1,1,
  1,1,1,1,1,1,1,30,0,0,
  1,1,1,1,1,1,1,31,0,0,
  1,1,1,1,1,1,1,2,2,2
};

uint8_t LevelPlan11[114]={
  9, //frame width 
  10, //frame height
  27, //north
  12, //west
  10, //south
  0, //east
  6, //enemyId
  16, //enemyHealth
  16,48, //Ground limit
  0,72, //Floor1 limit
  40,72, //Floor2 limit
  16, //Ground Ladder
  64, //Floor1 Ladder
  40, //Floor2 Ladder
  40, //FloorExit
  50, //Enemy PosX
  20, //Enemy PosY
  30, //Enemy LeftMax
  50, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  1,1,1,1,1,20,0,32,0,1,
  1,1,1,1,1,20,0,33,0,1,
  1,1,1,1,1,1,1,1,20,1,
  0,0,0,0,0,0,0,0,20,1,
  0,0,0,0,0,0,0,0,20,1,
  1,1,20,1,1,1,1,1,1,1,
  1,1,20,0,0,0,0,0,0,1,
  1,1,20,0,0,0,0,0,0,1,
  1,1,1,1,1,20,0,0,0,1
};

uint8_t LevelPlan12[114]={
  9, //frame width 
  10, //frame height
  0, //north
  13, //west
  10, //south
  11, //east
  1, //enemyId
  16, //enemyHealth
  0,0, //Ground limit
  0,80, //Floor1 limit
  0,0, //Floor2 limit
  0, //Ground Ladder
  0, //Floor1 Ladder
  0, //Floor2 Ladder
  0, //FloorExit
  30, //Enemy PosX
  20, //Enemy PosY
  32, //Enemy LeftMax
  56, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  1,1,1,1,1,1,1,1,1,1,
  1,1,0,0,0,0,1,1,1,1,
  0,0,0,0,0,0,0,0,0,0,
  0,34,0,0,0,0,0,0,0,0,
  0,35,0,0,0,0,0,0,0,0,
  1,1,14,17,17,16,1,1,1,1,
  4,1,11,0,0,13,1,4,1,1,
  1,1,11,0,0,13,1,1,1,1,
  1,1,11,0,0,13,1,1,1,1
};

uint8_t LevelPlan13[114]={
  9, //frame width 
  10, //frame height
  14, //north
  17, //west
  0, //south
  12, //east
  8, //enemyId
  16, //enemyHealth
  16,64, //Ground limit
  16,80, //Floor1 limit
  24,32, //Floor2 limit
  16, //Ground Ladder
  24, //Floor1 Ladder
  24, //Floor2 Ladder
  0, //FloorExit
  32, //Enemy PosX
  37, //Enemy PosY
  0, //Enemy LeftMax
  0, //Enemy RightMax
  0, //Enemy Moving Direction
  17, //Secret
  1,1,1,20,1,1,1,1,1,1,
  1,1,1,20,1,1,1,1,1,1,
  1,1,0,20,0,0,0,0,0,0,
  1,1,0,20,0,0,0,0,0,0,
  1,1,0,20,0,0,0,0,0,0,
  1,1,20,1,1,1,1,1,1,1,
  1,1,20,0,0,0,0,0,1,1,
  1,1,20,0,0,0,0,0,1,1,
  1,1,2,2,2,2,2,2,1,1
};

uint8_t LevelPlan14[114]={
  9, //frame width 
  10, //frame height
  15, //north
  0, //west
  13, //south
  0, //east
  7, //enemyId
  16, //enemyHealth
  8,64, //Ground limit
  8,64, //Floor1 limit
  8,64, //Floor2 limit
  56, //Ground Ladder
  24, //Floor1 Ladder
  48, //Floor2 Ladder
  24, //FloorExit
  32, //Enemy PosX
  20, //Enemy PosY
  0, //Enemy LeftMax
  0, //Enemy RightMax
  1, //Enemy Moving Direction
  0, //Secret
  1,11,0,0,0,0,20,13,1,0,
  1,11,0,0,0,0,20,13,1,0,
  1,1,1,20,1,1,1,1,1,0,
  1,0,0,20,0,0,0,0,1,0,
  1,0,0,20,0,0,0,0,1,0,
  1,1,1,1,1,1,1,20,1,0,
  1,0,32,0,0,0,0,20,1,0,
  1,0,33,0,0,0,0,20,1,0,
  1,2,2,20,2,2,2,2,1,0
};

uint8_t LevelPlan15[114]={
  9, //frame width 
  10, //frame height
  0, //north
  0, //west
  14, //south
  0, //east
  10, //enemyId
  16, //enemyHealth
  16,56, //Ground limit
  0,0, //Floor1 limit
  0,0, //Floor2 limit
  88, //Ground Ladder
  88, //Floor1 Ladder
  88, //Floor2 Ladder
  48, //FloorExit
  32, //Enemy PosX
  37, //Enemy PosY
  0, //Enemy LeftMax
  0, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,
  1,0,1,0,1,0,1,0,1,0,
  1,1,1,1,1,1,1,1,1,0,
  1,14,17,17,17,17,17,16,1,0,
  1,11,30,0,0,0,0,13,1,0,
  1,11,31,0,0,0,0,13,1,0,
  1,11,1,1,1,1,20,13,1,0
};

uint8_t LevelPlan16[114]={ //secret 1
  9, //frame width 
  10, //frame height
  0, //north
  0, //west
  0, //south
  6, //east
  0, //enemyId
  0, //enemyHealth
  8,80, //Ground limit
  0,0, //Floor1 limit
  0,0, //Floor2 limit
  0, //Ground Ladder
  0, //Floor1 Ladder
  0, //Floor2 Ladder
  0, //FloorExit
  0, //Enemy PosX
  0, //Enemy PosY
  0, //Enemy LeftMax
  0, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  1,1,1,1,1,1,1,1,1,1,
  1,1,1,1,1,1,1,1,1,1,
  1,1,1,1,1,1,1,1,1,1,
  1,0,0,0,0,0,1,1,1,1,
  1,0,0,0,0,0,1,1,1,1,
  1,0,0,0,0,0,0,0,1,1,
  1,0,32,0,34,0,0,0,0,0,
  1,0,33,0,35,0,0,0,0,0,
  1,2,2,2,2,2,2,2,2,1
};

uint8_t LevelPlan17[114]={ //secret 2
  9, //frame width 
  10, //frame height
  0, //north
  0, //west
  0, //south
  13, //east
  0, //enemyId
  0, //enemyHealth
  16,72, //Ground limit
  64,80, //Floor1 limit
  0,0, //Floor2 limit
  64, //Ground Ladder
  0, //Floor1 Ladder
  0, //Floor2 Ladder
  0, //FloorExit
  0, //Enemy PosX
  0, //Enemy PosY
  0, //Enemy LeftMax
  0, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  1,1,1,1,1,1,1,1,1,1,
  1,1,1,1,1,1,1,1,1,1,
  1,1,1,0,0,0,0,0,1,1,
  1,1,0,0,0,0,0,0,0,0,
  1,1,0,0,0,0,0,0,0,0,
  1,1,0,0,0,0,0,0,20,1,
  1,1,0,32,0,34,0,0,20,1,
  1,1,0,33,0,35,0,0,20,1,
  1,1,2,2,2,2,2,2,2,1
};

uint8_t LevelPlan18[114]={
  9, //frame width 
  10, //frame height
  19, //north
  10, //west
  35, //south
  0, //east
  10, //enemyId
  16, //enemyHealth
  0,64, //Ground limit
  0,64, //Floor1 limit
  48,56, //Floor2 limit
  48, //Ground Ladder
  56, //Floor1 Ladder
  56, //Floor2 Ladder
  56, //FloorExit
  32, //Enemy PosX
  20, //Enemy PosY
  0, //Enemy LeftMax
  0, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  1,1,1,1,1,1,0,20,0,1,
  1,1,1,1,1,1,0,20,0,1,
  0,0,0,0,0,0,0,20,0,1,
  0,0,0,0,0,0,0,20,0,1,
  0,0,0,0,0,0,0,20,0,1,
  1,1,1,1,1,1,20,1,0,1,
  0,0,0,0,0,0,20,0,0,1,
  0,0,0,0,0,0,20,0,0,1,
  2,2,2,2,2,2,1,20,0,1
};

uint8_t LevelPlan19[114]={
  9, //frame width 
  10, //frame height
  0, //north
  0, //west
  18, //south
  20, //east
  3, //enemyId
  16, //enemyHealth
  56,64, //Ground limit
  8,80, //Floor1 limit
  0,0, //Floor2 limit
  56, //Ground Ladder
  88, //Floor1 Ladder
  88, //Floor2 Ladder
  56, //FloorExit
  32, //Enemy PosX
  20, //Enemy PosY
  24, //Enemy LeftMax
  48, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  1,1,1,11,0,13,1,1,1,1,
  1,1,1,11,0,13,1,1,1,1,
  1,1,1,11,0,13,0,0,0,0,
  1,30,0,11,0,13,0,0,0,0,
  1,31,0,11,0,13,0,0,0,0,
  1,1,1,1,1,1,1,20,1,1,
  1,1,1,1,1,1,0,20,0,1,
  1,1,1,1,1,1,0,20,0,1,
  1,1,1,1,1,1,0,20,0,1
};

uint8_t LevelPlan20[114]={
  9, //frame width 
  10, //frame height
  0, //north
  19, //west
  0, //south
  21, //east
  2, //enemyId
  16, //enemyHealth
  0,0, //Ground limit
  0,80, //Floor1 limit
  0,0, //Floor2 limit
  88, //Ground Ladder
  88, //Floor1 Ladder
  88, //Floor2 Ladder
  88, //FloorExit
  48, //Enemy PosX
  20, //Enemy PosY
  16, //Enemy LeftMax
  48, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  1,1,1,1,1,1,1,1,1,1,
  1,1,1,1,1,1,1,1,1,1,
  14,17,17,17,16,14,17,17,17,16,
  11,0,0,0,13,11,0,0,32,13,
  11,0,0,0,13,11,0,0,33,13,
  1,1,1,1,1,1,1,1,1,1,
  1,3,1,1,3,1,1,3,1,1,
  1,1,1,1,1,1,1,1,1,1,
  1,1,1,1,1,1,1,1,1,1
};

uint8_t LevelPlan21[114]={
  9, //frame width 
  10, //frame height
  0, //north
  20, //west
  22, //south
  0, //east
  8, //enemyId
  16, //enemyHealth
  56,64, //Ground limit
  0,64, //Floor1 limit
  0,0, //Floor2 limit
  56, //Ground Ladder
  88, //Floor1 Ladder
  88, //Floor2 Ladder
  56, //FloorExit
  40, //Enemy PosX
  20, //Enemy PosY
  0, //Enemy LeftMax
  0, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  1,1,1,1,1,1,1,1,1,1,
  1,1,1,1,1,1,1,1,1,1,
  14,17,17,17,16,0,0,0,0,1,
  11,0,0,0,13,0,0,0,0,1,
  11,0,0,0,13,0,0,0,0,1,
  1,1,1,1,1,1,1,20,0,1,
  1,3,1,1,3,1,0,20,0,1,
  1,1,1,1,1,1,0,20,0,1,
  1,1,1,1,1,1,0,20,0,1
};

uint8_t LevelPlan22[114]={
  9, //frame width 
  10, //frame height
  21, //north
  0, //west
  23, //south
  0, //east
  7, //enemyId
  16, //enemyHealth
  48,56, //Ground limit
  8,64, //Floor1 limit
  56,64, //Floor2 limit
  48, //Ground Ladder
  56, //Floor1 Ladder
  56, //Floor2 Ladder
  48, //FloorExit
  40, //Enemy PosX
  20, //Enemy PosY
  0, //Enemy LeftMax
  0, //Enemy RightMax
  1, //Enemy Moving Direction
  0, //Secret
  1,1,1,1,1,1,0,20,0,1,
  1,1,1,1,1,1,0,20,0,1,
  1,0,0,0,0,0,0,20,0,1,
  1,30,32,0,0,0,0,20,0,1,
  1,31,33,0,0,0,0,20,0,1,
  1,1,1,1,1,1,20,1,0,1,
  1,1,1,1,1,1,20,0,0,1,
  1,3,1,1,3,1,20,0,0,1,
  1,1,1,1,1,1,20,0,0,1
};

uint8_t LevelPlan23[114]={
  9, //frame width 
  10, //frame height
  22, //north
  24, //west
  0, //south
  26, //east
  9, //enemyId
  16, //enemyHealth
  0,80, //Ground limit
  48,80, //Floor1 limit
  48,56, //Floor2 limit
  88, //Ground Ladder
  48, //Floor1 Ladder
  48, //Floor2 Ladder
  88, //FloorExit
  40, //Enemy PosX
  37, //Enemy PosY
  16, //Enemy LeftMax
  56, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  1,4,1,1,1,1,20,0,0,1,
  1,1,1,1,1,1,20,0,0,1,
  1,4,1,0,0,0,20,0,0,1,
  1,1,1,0,0,0,20,0,0,0,
  1,4,1,0,0,0,20,0,0,0,
  1,1,1,0,0,0,1,1,1,1,
  0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,
  2,2,2,2,2,2,2,2,2,2
};

uint8_t LevelPlan24[114]={
  9, //frame width 
  10, //frame height
  25, //north
  0, //west
  0, //south
  23, //east
  11, //enemyId
  16, //enemyHealth
  0,80, //Ground limit
  8,48, //Floor1 limit
  8,16, //Floor2 limit
  16, //Ground Ladder
  8, //Floor1 Ladder
  8, //Floor2 Ladder
  88, //FloorExit
  40, //Enemy PosX
  37, //Enemy PosY
  24, //Enemy LeftMax
  56, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  1,20,1,1,1,1,1,4,1,1,
  1,20,1,1,1,1,1,1,1,1,
  1,20,0,0,0,0,1,4,1,1,
  1,20,0,30,0,32,1,1,1,1,
  1,20,0,31,0,33,1,4,1,1,
  1,1,20,1,1,1,1,1,1,1,
  1,0,20,0,0,0,0,0,0,0,
  1,0,20,0,0,0,0,0,0,0,
  1,2,2,2,2,2,2,2,2,2
};

uint8_t LevelPlan25[114]={
  9, //frame width 
  10, //frame height
  0, //north
  0, //west
  24, //south
  0, //east
  1, //enemyId
  16, //enemyHealth
  8,72, //Ground limit
  8,72, //Floor1 limit
  8,16, //Floor2 limit
  64, //Ground Ladder
  88, //Floor1 Ladder
  88, //Floor2 Ladder
  8, //FloorExit
  40, //Enemy PosX
  37, //Enemy PosY
  24, //Enemy LeftMax
  56, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  1,1,1,1,1,1,1,1,1,1,
  1,1,1,1,1,1,1,1,1,1,
  1,14,17,17,17,17,17,17,16,1,
  1,11,30,0,32,0,0,0,13,1,
  1,11,31,0,33,0,0,0,13,1,
  1,1,1,1,1,1,1,1,20,1,
  1,0,0,0,0,0,0,0,20,1,
  1,0,0,0,0,0,0,0,20,1,
  1,20,2,2,2,2,2,2,2,1
};

uint8_t LevelPlan26[114]={
  9, //frame width 
  10, //frame height
  36, //north
  23, //west
  0, //south
  0, //east
  5, //enemyId
  16, //enemyHealth
  0,64, //Ground limit
  0,64, //Floor1 limit
  56,64, //Floor2 limit
  8, //Ground Ladder
  88, //Floor1 Ladder
  56, //Floor2 Ladder
  88, //FloorExit
  32, //Enemy PosX
  20, //Enemy PosY
  0, //Enemy LeftMax
  0, //Enemy RightMax
  0, //Enemy Moving Direction
  36, //Secret
  1,1,1,1,1,1,1,1,1,1,
  1,1,1,1,1,1,1,1,1,1,
  1,1,1,1,1,1,1,1,1,1,
  0,0,0,0,0,0,0,0,1,1,
  0,0,0,0,0,0,0,0,1,1,
  1,20,1,1,1,1,1,1,1,1,
  0,20,0,0,0,0,0,34,1,1,
  0,20,0,0,0,0,0,35,0,1,
  2,2,2,2,2,2,2,2,2,1
};

uint8_t LevelPlan27[114]={
  9, //frame width 
  10, //frame height
  0, //north
  0, //west
  11, //south
  28, //east
  4, //enemyId
  16, //enemyHealth
  40,80, //Ground limit
  0,0, //Floor1 limit
  0,0, //Floor2 limit
  88, //Ground Ladder
  88, //Floor1 Ladder
  88, //Floor2 Ladder
  40, //FloorExit
  72, //Enemy PosX
  37, //Enemy PosY
  0, //Enemy LeftMax
  0, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  0,0,0,1,1,1,1,1,1,1,
  0,0,0,1,1,1,1,1,1,1,
  0,0,0,1,1,1,1,1,1,1,
  0,0,0,1,1,1,1,1,1,1,
  0,0,0,1,1,1,1,1,1,1,
  0,0,0,1,1,0,0,0,0,0,
  1,0,1,1,1,0,0,0,0,0,
  1,1,1,1,1,0,0,0,0,0,
  1,1,1,1,1,20,2,2,2,2
};

uint8_t LevelPlan28[114]={
  9, //frame width 
  10, //frame height
  0, //north
  27, //west
  0, //south
  29, //east
  9, //enemyId
  16, //enemyHealth
  0,80, //Ground limit
  0,0, //Floor1 limit
  0,0, //Floor2 limit
  88, //Ground Ladder
  88, //Floor1 Ladder
  88, //Floor2 Ladder
  88, //FloorExit
  32, //Enemy PosX
  37, //Enemy PosY
  40, //Enemy LeftMax
  64, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  1,1,1,0,0,0,1,1,1,1,
  1,1,1,0,0,0,1,1,1,1,
  1,1,1,0,0,0,1,1,1,1,
  1,1,1,0,0,0,1,1,1,1,
  1,1,1,0,0,0,1,1,1,1,
  0,0,0,0,0,0,0,0,0,0,
  0,0,32,0,0,0,0,0,0,0,
  0,0,33,0,0,0,0,0,0,0,
  2,2,2,14,17,16,2,2,2,2
};

uint8_t LevelPlan29[114]={
  9, //frame width 
  10, //frame height
  0, //north
  28, //west
  0, //south
  30, //east
  7, //enemyId
  16, //enemyHealth
  0,80, //Ground limit
  40,80, //Floor1 limit
  0,0, //Floor2 limit
  40, //Ground Ladder
  88, //Floor1 Ladder
  88, //Floor2 Ladder
  88, //FloorExit
  64, //Enemy PosX
  20, //Enemy PosY
  0, //Enemy LeftMax
  0, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  1,1,1,1,1,1,1,1,1,1,
  1,1,0,0,0,0,0,0,0,0,
  1,1,0,0,0,0,0,0,0,0,
  1,1,0,0,0,0,0,0,0,0,
  1,1,0,0,0,0,0,0,0,0,
  0,0,0,0,0,20,1,1,1,1,
  0,0,0,0,0,20,0,0,0,0,
  0,0,0,0,0,20,0,0,0,0,
  2,2,2,2,2,2,2,2,2,2
};

uint8_t LevelPlan30[114]={
  9, //frame width 
  10, //frame height
  31, //north
  29, //west
  0, //south
  32, //east
  11, //enemyId
  16, //enemyHealth
  0,72, //Ground limit
  0,72, //Floor1 limit
  56,64, //Floor2 limit
  88, //Ground Ladder
  56, //Floor1 Ladder
  56, //Floor2 Ladder
  88, //FloorExit
  40, //Enemy PosX
  37, //Enemy PosY
  16, //Enemy LeftMax
  64, //Enemy RightMax
  0, //Enemy Moving Direction
  32, //Secret
  1,11,1,1,1,1,1,20,13,1,
  0,11,0,0,0,0,0,20,13,1,
  0,11,0,0,0,0,0,20,13,1,
  0,11,0,0,0,0,0,20,13,1,
  0,11,0,0,0,0,0,20,13,1,
  1,1,1,1,1,1,1,1,1,1,
  0,0,0,0,0,0,0,0,0,1,
  0,0,0,0,0,0,0,0,0,1,
  2,2,2,2,2,2,2,2,2,1
};

uint8_t LevelPlan31[114]={
  9, //frame width 
  10, //frame height
  0, //north
  0, //west
  30, //south
  0, //east
  10, //enemyId
  16, //enemyHealth
  16,64, //Ground limit
  0,0, //Floor1 limit
  0,0, //Floor2 limit
  88, //Ground Ladder
  88, //Floor1 Ladder
  88, //Floor2 Ladder
  56, //FloorExit
  40, //Enemy PosX
  37, //Enemy PosY
  0, //Enemy LeftMax
  0, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  1,0,1,0,0,0,0,1,0,1,
  1,1,1,0,0,0,0,1,1,1,
  1,1,1,0,0,0,0,1,1,1,
  1,1,1,1,1,1,1,1,1,1,
  1,14,17,17,17,17,17,17,16,1,
  1,11,0,0,0,0,0,0,13,1,
  1,11,30,34,0,0,0,0,13,1,
  1,11,31,35,0,0,0,0,13,1,
  1,11,2,2,2,2,2,20,13,1
};

uint8_t LevelPlan32[114]={ //secret
  9, //frame width 
  10, //frame height
  0, //north
  30, //west
  0, //south
  0, //east
  0, //enemyId
  0, //enemyHealth
  0,64, //Ground limit
  0,0, //Floor1 limit
  0,0, //Floor2 limit
  88, //Ground Ladder
  88, //Floor1 Ladder
  56, //Floor2 Ladder
  88, //FloorExit
  0, //Enemy PosX
  0, //Enemy PosY
  0, //Enemy LeftMax
  0, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  1,1,1,1,1,1,1,1,1,1,
  1,14,17,17,15,17,17,16,1,1,
  1,11,0,0,12,0,0,13,1,1,
  1,11,0,0,12,0,0,13,1,1,
  1,11,0,0,12,0,0,13,1,1,
  1,11,0,0,12,0,0,13,1,1,
  0,11,0,32,12,0,32,13,1,1,
  0,11,0,33,12,0,33,13,1,1,
  1,2,2,2,2,2,2,2,1,1
};

uint8_t LevelPlan33[114]={
  9, //frame width 
  10, //frame height
  9, //north
  37, //west
  0, //south
  34, //east
  11, //enemyId
  16, //enemyHealth
  0,80, //Ground limit
  0,80, //Floor1 limit
  32,40, //Floor2 limit
  88, //Ground Ladder
  32, //Floor1 Ladder
  32, //Floor2 Ladder
  0, //FloorExit
  40, //Enemy PosX
  37, //Enemy PosY
  24, //Enemy LeftMax
  64, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  1,1,1,1,20,1,1,1,1,1,
  3,1,3,1,20,1,3,1,3,1,
  1,1,1,1,20,1,1,1,1,1,
  0,0,0,0,20,0,0,0,0,0,
  0,0,0,0,20,0,0,0,0,0,
  1,1,1,1,1,1,1,1,1,1,
  0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,
  2,2,2,2,2,2,2,2,2,2
};

uint8_t LevelPlan34[114]={
  9, //frame width 
  10, //frame height
  0, //north
  33, //west
  0, //south
  0, //east
  9, //enemyId
  16, //enemyHealth
  0,72, //Ground limit
  0,64, //Floor1 limit
  0,0, //Floor2 limit
  88, //Ground Ladder
  88, //Floor1 Ladder
  88, //Floor2 Ladder
  88, //FloorExit
  16, //Enemy PosX
  20, //Enemy PosY
  0, //Enemy LeftMax
  0, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  1,1,1,1,1,1,1,1,1,1,
  3,1,3,1,1,1,1,1,1,1,
  1,1,1,1,17,15,17,1,1,1,
  0,0,0,0,30,12,32,0,1,1,
  0,0,0,0,31,12,33,0,1,1,
  1,1,1,1,1,1,1,1,1,1,
  0,0,0,0,0,0,0,0,30,1,
  0,0,0,0,0,0,0,0,31,1,
  2,2,2,2,2,2,2,2,2,1
};

uint8_t LevelPlan35[114]={
  9, //frame width 
  10, //frame height
  18, //north
  0, //west
  40, //south
  0, //east
  7, //enemyId
  16, //enemyHealth
  8,16, //Ground limit
  8,64, //Floor1 limit
  56,64, //Floor2 limit
  8, //Ground Ladder
  56, //Floor1 Ladder
  56, //Floor2 Ladder
  8, //FloorExit
  40, //Enemy PosX
  20, //Enemy PosY
  0, //Enemy LeftMax
  0, //Enemy RightMax
  1, //Enemy Moving Direction
  0, //Secret
  1,1,1,1,1,1,0,20,0,1,
  1,4,1,1,4,1,0,20,0,1,
  1,1,1,1,1,1,0,20,0,1,
  1,0,30,0,0,0,0,20,0,1,
  1,0,31,0,0,0,0,20,0,1,
  1,20,1,1,1,1,1,1,0,1,
  1,20,1,1,1,1,0,0,0,1,
  1,20,1,1,3,1,0,0,0,1,
  1,20,1,1,1,1,0,0,0,1
};

uint8_t LevelPlan36[114]={ //secret
  9, //frame width 
  10, //frame height
  0, //north
  0, //west
  26, //south
  0, //east
  0, //enemyId
  0, //enemyHealth
  56,64, //Ground limit
  8,72, //Floor1 limit
  0,0, //Floor2 limit
  56, //Ground Ladder
  88, //Floor1 Ladder
  88, //Floor2 Ladder
  56, //FloorExit
  0, //Enemy PosX
  0, //Enemy PosY
  0, //Enemy LeftMax
  0, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  1,1,1,1,1,1,1,1,1,1,
  1,0,0,0,0,0,0,0,0,1,
  1,0,0,0,0,0,0,0,0,1,
  1,32,0,34,0,0,0,0,0,1,
  1,33,0,35,0,0,0,0,0,1,
  1,14,17,17,17,17,17,20,16,1,
  1,11,0,0,0,0,0,20,13,1,
  1,11,1,1,1,1,1,20,13,1,
  1,1,1,1,1,1,1,20,1,1
};

uint8_t LevelPlan37[114]={
  9, //frame width 
  10, //frame height
  0, //north
  38, //west
  0, //south
  33, //east
  8, //enemyId
  16, //enemyHealth
  32,80, //Ground limit
  0,80, //Floor1 limit
  0,0, //Floor2 limit
  32, //Ground Ladder
  88, //Floor1 Ladder
  88, //Floor2 Ladder
  88, //FloorExit
  8, //Enemy PosX
  20, //Enemy PosY
  0, //Enemy LeftMax
  0, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  0,0,0,1,1,1,1,1,1,1,
  0,0,0,1,3,1,3,1,3,1,
  0,0,0,1,1,1,1,1,1,1,
  0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,
  17,17,16,1,20,1,1,1,1,1,
  0,0,13,1,20,0,0,0,0,0,
  0,0,13,5,20,0,0,0,0,0,
  6,6,6,6,2,2,2,2,2,2
};

uint8_t LevelPlan38[114]={
  9, //frame width 
  10, //frame height
  0, //north
  39, //west
  0, //south
  37, //east
  4, //enemyId
  16, //enemyHealth
  0,0, //Ground limit
  16,80, //Floor1 limit
  0,0, //Floor2 limit
  88, //Ground Ladder
  88, //Floor1 Ladder
  88, //Floor2 Ladder
  88, //FloorExit
  32, //Enemy PosX
  20, //Enemy PosY
  0, //Enemy LeftMax
  0, //Enemy RightMax
  0, //Enemy Moving Direction
  39, //Secret
  1,1,0,0,0,0,0,0,0,0,
  1,1,0,0,0,0,0,0,0,0,
  1,1,0,0,0,0,0,0,0,0,
  1,1,0,0,0,0,0,34,0,0,
  1,1,0,0,0,0,0,35,0,0,
  1,1,1,1,1,1,14,17,17,17,
  1,1,3,1,3,1,11,0,0,0,
  5,5,5,5,5,5,11,0,0,0,
  6,6,6,6,6,6,6,6,6,6
};

uint8_t LevelPlan39[114]={
  9, //frame width 
  10, //frame height
  0, //north
  0, //west
  0, //south
  38, //east
  0, //enemyId
  0, //enemyHealth
  16,56, //Ground limit
  48,80, //Floor1 limit
  16,72, //Floor2 limit
  48, //Ground Ladder
  64, //Floor1 Ladder
  88, //Floor2 Ladder
  88, //FloorExit
  0, //Enemy PosX
  0, //Enemy PosY
  0, //Enemy LeftMax
  0, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  1,1,0,32,0,0,0,0,0,1,
  1,1,0,33,0,0,0,0,0,1,
  1,1,14,17,17,17,17,16,20,1,
  1,1,11,0,0,0,0,13,20,0,
  1,1,11,0,0,0,0,13,20,0,
  1,1,11,0,0,0,20,1,1,1,
  1,1,11,32,0,0,20,1,1,1,
  5,1,11,33,0,0,20,1,5,5,
  6,6,6,6,6,6,6,6,6,6
};

uint8_t LevelPlan40[114]={
  9, //frame width 
  10, //frame height
  35, //north
  41, //west
  0, //south
  55, //east
  1, //enemyId
  16, //enemyHealth
  0,80, //Ground limit
  0,40, //Floor1 limit
  8,16, //Floor2 limit
  88, //Ground Ladder
  8, //Floor1 Ladder
  8, //Floor2 Ladder
  88, //FloorExit
  40, //Enemy PosX
  37, //Enemy PosY
  24, //Enemy LeftMax
  56, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  1,20,1,1,1,1,0,0,0,1,
  1,20,1,1,1,1,0,0,0,1,
  1,20,0,0,0,1,0,0,0,1,
  0,20,0,0,32,1,0,0,0,1,
  0,20,0,0,33,1,0,0,0,1,
  1,1,1,1,1,1,0,0,0,1,
  0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,
  2,2,2,2,2,2,2,2,2,2
};

uint8_t LevelPlan41[114]={
  9, //frame width 
  10, //frame height
  0, //north
  42, //west
  0, //south
  40, //east
  2, //enemyId
  16, //enemyHealth
  0,80, //Ground limit
  48,80, //Floor1 limit
  0,56, //Floor2 limit
  88, //Ground Ladder
  48, //Floor1 Ladder
  88, //Floor2 Ladder
  88, //FloorExit
  40, //Enemy PosX
  37, //Enemy PosY
  24, //Enemy LeftMax
  56, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  0,0,0,0,0,0,0,0,0,1,
  0,0,0,0,0,0,0,0,0,1,
  1,1,1,1,1,1,20,0,0,1,
  17,17,17,17,17,16,20,0,0,0,
  0,0,0,0,0,13,20,0,0,0,
  0,0,0,0,0,13,1,1,1,1,
  0,0,0,0,0,13,0,0,0,0,
  0,0,0,0,0,13,0,0,0,0,
  2,2,2,2,2,2,2,2,2,2
};

uint8_t LevelPlan42[114]={
  9, //frame width 
  10, //frame height
  0, //north
  43, //west
  0, //south
  41, //east
  7, //enemyId
  16, //enemyHealth
  40,80, //Ground limit
  0,64, //Floor1 limit
  56,80, //Floor2 limit
  40, //Ground Ladder
  56, //Floor1 Ladder
  88, //Floor2 Ladder
  88, //FloorExit
  16, //Enemy PosX
  20, //Enemy PosY
  0, //Enemy LeftMax
  0, //Enemy RightMax
  1, //Enemy Moving Direction
  0, //Secret
  5,5,5,1,0,0,0,0,0,0,
  1,1,1,1,0,0,0,0,0,0,
  0,0,0,0,0,0,0,20,1,1,
  0,0,0,0,0,0,0,20,14,17,
  0,0,0,0,0,0,0,20,11,0,
  1,1,1,1,1,20,1,1,11,0,
  1,1,1,1,1,20,0,0,11,0,
  1,1,1,1,1,20,0,0,11,0,
  1,1,1,1,1,2,2,2,2,2
};

uint8_t LevelPlan43[114]={
  9, //frame width 
  10, //frame height
  0, //north
  44, //west
  0, //south
  42, //east
  3, //enemyId
  16, //enemyHealth
  0,64, //Ground limit
  56,80, //Floor1 limit
  0,0, //Floor2 limit
  56, //Ground Ladder
  88, //Floor1 Ladder
  88, //Floor2 Ladder
  88, //FloorExit
  32, //Enemy PosX
  37, //Enemy PosY
  16, //Enemy LeftMax
  40, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  5,5,5,5,5,5,5,5,5,5,
  15,17,17,15,17,17,16,1,1,1,
  12,0,0,12,0,0,13,0,0,0,
  12,0,0,12,0,0,13,0,0,0,
  12,0,0,12,0,0,13,0,0,0,
  12,0,0,12,0,0,13,20,1,1,
  12,0,0,12,0,0,13,20,1,1,
  12,0,0,12,0,0,13,20,1,1,
  2,2,2,2,2,2,2,2,1,1
};

uint8_t LevelPlan44[114]={
  9, //frame width 
  10, //frame height
  0, //north
  45, //west
  0, //south
  43, //east
  4, //enemyId
  16, //enemyHealth
  0,80, //Ground limit
  0,0, //Floor1 limit
  0,0, //Floor2 limit
  88, //Ground Ladder
  88, //Floor1 Ladder
  88, //Floor2 Ladder
  88, //FloorExit
  36, //Enemy PosX
  37, //Enemy PosY
  0, //Enemy LeftMax
  0, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  5,5,5,5,5,5,5,5,5,5,
  17,15,17,17,15,17,17,15,17,17,
  0,12,0,0,12,0,0,12,0,0,
  0,12,0,0,12,0,0,12,0,0,
  0,12,0,0,12,0,0,12,0,0,
  0,12,0,0,12,0,0,12,0,0,
  0,12,30,0,12,0,32,12,0,0,
  0,12,31,0,12,0,33,12,0,0,
  2,2,2,2,2,2,2,2,2,2
};

uint8_t LevelPlan45[114]={
  9, //frame width 
  10, //frame height
  0, //north
  46, //west
  0, //south
  44, //east
  8, //enemyId
  16, //enemyHealth
  32,80, //Ground limit
  0,40, //Floor1 limit
  0,0, //Floor2 limit
  32, //Ground Ladder
  88, //Floor1 Ladder
  88, //Floor2 Ladder
  88, //FloorExit
  16, //Enemy PosX
  20, //Enemy PosY
  0, //Enemy LeftMax
  0, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  1,5,5,5,5,5,5,5,5,5,
  1,1,1,1,1,14,17,17,15,17,
  0,0,0,0,0,11,0,0,12,0,
  0,0,0,0,0,11,0,0,12,0,
  0,0,0,0,0,11,0,0,12,0,
  1,1,1,1,20,11,0,0,12,0,
  1,1,1,1,20,11,0,0,12,0,
  1,1,1,1,20,11,0,0,12,0,
  1,1,1,1,2,2,2,2,2,2
};

uint8_t LevelPlan46[114]={
  9, //frame width 
  10, //frame height
  54, //north
  48, //west
  47, //south
  45, //east
  6, //enemyId
  16, //enemyHealth
  0,64, //Ground limit
  24,80, //Floor1 limit
  0,64, //Floor2 limit
  24, //Ground Ladder
  88, //Floor1 Ladder
  24, //Floor2 Ladder
  88, //FloorExit
  56, //Enemy PosX
  37, //Enemy PosY
  0, //Enemy LeftMax
  0, //Enemy RightMax
  0, //Enemy Moving Direction
  47, //Secret
  0,0,0,20,0,0,32,0,1,1,
  0,0,0,20,0,0,33,0,1,1,
  1,1,1,1,1,1,1,1,1,1,
  1,4,1,0,0,34,0,0,0,0,
  1,1,1,0,0,35,0,0,0,0,
  1,1,1,20,1,1,1,1,1,1,
  0,0,0,20,0,0,0,0,1,1,
  0,0,0,20,0,0,0,0,1,1,
  2,2,2,2,2,2,2,2,1,1
};

uint8_t LevelPlan47[114]={
  9, //frame width 
  10, //frame height
  46, //north
  0, //west
  0, //south
  0, //east
  0, //enemyId
  0, //enemyHealth
  0,0, //Ground limit
  32,72, //Floor1 limit
  56,64, //Floor2 limit
  88, //Ground Ladder
  56, //Floor1 Ladder
  56, //Floor2 Ladder
  88, //FloorExit
  0, //Enemy PosX
  0, //Enemy PosY
  0, //Enemy LeftMax
  0, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  0,0,0,0,0,0,0,20,0,0,
  0,0,0,0,0,0,0,20,0,0,
  0,0,0,0,0,0,0,20,0,0,
  5,0,0,0,32,34,0,20,0,5,
  5,5,0,0,33,35,0,20,0,5,
  5,5,5,0,5,5,5,5,5,5,
  5,5,5,0,5,5,5,5,5,5,
  5,5,5,5,5,5,5,5,5,5,
  5,5,5,5,5,5,5,5,5,5
};

uint8_t LevelPlan48[114]={
  9, //frame width 
  10, //frame height
  0, //north
  49, //west
  0, //south
  46, //east
  9, //enemyId
  16, //enemyHealth
  0,80, //Ground limit
  24,64, //Floor1 limit
  56,80, //Floor2 limit
  88, //Ground Ladder
  56, //Floor1 Ladder
  88, //Floor2 Ladder
  88, //FloorExit
  40, //Enemy PosX
  37, //Enemy PosY
  16, //Enemy LeftMax
  50, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  1,1,1,1,1,0,0,0,0,0,
  1,4,1,1,1,0,0,0,0,0,
  1,1,1,0,0,0,0,20,1,1,
  1,4,1,0,30,0,0,20,1,1,
  1,1,1,0,31,0,0,20,1,1,
  1,1,1,1,1,1,1,1,1,1,
  0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,
  2,2,2,2,2,2,2,2,2,2
};

uint8_t LevelPlan49[114]={
  9, //frame width 
  10, //frame height
  50, //north
  0, //west
  58, //south
  48, //east
  5, //enemyId
  16, //enemyHealth
  8,80, //Ground limit
  56,64, //Floor1 limit
  56,64, //Floor2 limit
  56, //Ground Ladder
  56, //Floor1 Ladder
  56, //Floor2 Ladder
  8, //FloorExit
  16, //Enemy PosX
  37, //Enemy PosY
  0, //Enemy LeftMax
  0, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  1,1,1,1,1,1,0,20,1,1,
  1,1,1,1,1,1,0,20,1,1,
  1,14,17,15,17,16,0,20,1,1,
  1,11,0,12,0,13,0,20,1,1,
  1,11,0,12,0,13,0,20,1,1,
  1,14,17,15,17,16,0,20,1,1,
  1,11,0,12,32,13,0,20,0,0,
  1,11,0,12,33,13,0,20,0,0,
  1,20,2,2,2,2,2,2,2,2
};

uint8_t LevelPlan50[114]={
  9, //frame width 
  10, //frame height
  53, //north
  0, //west
  49, //south
  51, //east
  7, //enemyId
  16, //enemyHealth
  8,80, //Ground limit
  8,80, //Floor1 limit
  8,80, //Floor2 limit
  88, //Ground Ladder
  88, //Floor1 Ladder
  88, //Floor2 Ladder
  56, //FloorExit
  40, //Enemy PosX
  20, //Enemy PosY
  0, //Enemy LeftMax
  0, //Enemy RightMax
  1, //Enemy Moving Direction
  53, //Secret
  1,0,0,0,30,0,0,0,0,0,
  1,0,0,0,31,0,0,0,0,0,
  1,1,1,1,1,1,1,1,1,1,
  1,0,0,0,0,0,0,0,0,0,
  1,0,0,0,0,0,0,0,0,0,
  1,14,17,17,16,1,1,1,1,1,
  1,11,0,0,13,0,0,0,0,0,
  1,11,0,0,13,0,0,0,0,0,
  1,2,2,2,2,2,2,20,2,2
};

uint8_t LevelPlan51[114]={
  9, //frame width 
  10, //frame height
  52, //north
  50, //west
  0, //south
  54, //east
  11, //enemyId
  16, //enemyHealth
  0,48, //Ground limit
  0,48, //Floor1 limit
  0,80, //Floor2 limit
  40, //Ground Ladder
  16, //Floor1 Ladder
  8, //Floor2 Ladder
  88, //FloorExit
  40, //Enemy PosX
  2, //Enemy PosY
  32, //Enemy LeftMax
  64, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  0,20,0,0,15,0,0,15,0,0,
  0,20,0,0,12,0,0,12,0,0,
  17,16,20,14,17,17,17,17,17,17,
  0,13,20,11,0,0,0,0,0,0,
  0,13,20,11,0,0,0,0,0,1,
  1,1,1,1,1,20,0,0,1,1,
  0,0,0,0,0,20,0,1,1,3,
  0,0,0,0,0,20,1,1,1,1,
  2,2,2,2,2,2,1,1,1,1
};

uint8_t LevelPlan52[114]={
  9, //frame width 
  10, //frame height
  0, //north
  0, //west
  51, //south
  0, //east
  1, //enemyId
  16, //enemyHealth
  8,16, //Ground limit
  8,72, //Floor1 limit
  16,72, //Floor2 limit
  8, //Ground Ladder
  64, //Floor1 Ladder
  88, //Floor2 Ladder
  8, //FloorExit
  40, //Enemy PosX
  20, //Enemy PosY
  24, //Enemy LeftMax
  56, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  1,0,0,0,30,0,32,0,0,1,
  1,0,0,0,31,0,33,0,0,1,
  1,0,14,17,17,17,17,17,20,1,
  1,0,11,0,0,0,0,0,20,1,
  1,0,11,0,0,0,0,0,20,1,
  1,20,1,5,1,5,1,5,1,1,
  1,20,1,5,1,5,1,5,1,1,
  1,20,1,1,1,1,1,1,1,1,
  1,20,1,1,1,1,1,1,1,1
};

uint8_t LevelPlan53[114]={
  9, //frame width 
  10, //frame height
  0, //north
  0, //west
  50, //south
  0, //east
  0, //enemyId
  0, //enemyHealth
  16,64, //Ground limit
  8,72, //Floor1 limit
  0,0, //Floor2 limit
  40, //Ground Ladder
  88, //Floor1 Ladder
  88, //Floor2 Ladder
  16, //FloorExit
  0, //Enemy PosX
  0, //Enemy PosY
  0, //Enemy LeftMax
  0, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  1,1,1,1,1,1,1,1,1,1,
  1,1,1,0,0,0,0,1,1,1,
  1,1,0,0,0,0,0,0,1,1,
  1,32,0,34,0,0,0,0,0,1,
  1,33,0,35,0,0,0,0,0,1,
  1,14,17,17,17,20,17,17,16,1,
  1,11,0,0,0,20,0,0,13,1,
  1,5,0,0,0,20,0,0,5,1,
  1,2,20,2,2,2,2,2,2,1
};

uint8_t LevelPlan54[114]={
  9, //frame width 
  10, //frame height
  0, //north
  51, //west
  46, //south
  0, //east
  10, //enemyId
  16, //enemyHealth
  8,72, //Ground limit
  8,72, //Floor1 limit
  0,72, //Floor2 limit
  16, //Ground Ladder
  64, //Floor1 Ladder
  88, //Floor2 Ladder
  24, //FloorExit
  40, //Enemy PosX
  20, //Enemy PosY
  0, //Enemy LeftMax
  0, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  0,0,0,0,0,0,0,0,0,1,
  0,0,0,0,0,0,0,0,0,1,
  17,17,17,17,17,17,17,16,20,1,
  0,30,0,0,0,0,0,13,20,1,
  1,31,0,0,0,0,0,13,20,1,
  1,14,20,17,17,15,17,17,16,1,
  1,11,20,0,0,12,0,0,13,1,
  1,11,20,0,0,12,0,0,13,1,
  1,2,2,20,2,2,2,2,2,1
};

uint8_t LevelPlan55[114]={
  9, //frame width 
  10, //frame height
  0, //north
  40, //west
  90, //south
  56, //east
  10, //enemyId
  16, //enemyHealth
  0,64, //Ground limit
  24,80, //Floor1 limit
  8,80, //Floor2 limit
  24, //Ground Ladder
  8, //Floor1 Ladder
  88, //Floor2 Ladder
  56, //FloorExit
  56, //Enemy PosX
  20, //Enemy PosY
  0, //Enemy LeftMax
  0, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  1,0,30,0,0,0,0,0,0,0,
  1,0,31,0,0,0,0,0,0,0,
  1,1,1,1,1,1,1,1,1,1,
  1,1,1,0,0,0,0,0,0,0,
  1,4,1,0,0,0,0,0,0,0,
  1,1,1,20,1,1,1,1,1,1,
  0,0,0,20,0,0,0,0,1,1,
  0,0,0,20,0,0,0,0,1,1,
  2,2,2,2,2,2,2,20,1,1
};

uint8_t LevelPlan56[114]={
  9, //frame width 
  10, //frame height
  0, //north
  55, //west
  0, //south
  57, //east
  11, //enemyId
  16, //enemyHealth
  8,80, //Ground limit
  0,48, //Floor1 limit
  0,72, //Floor2 limit
  8, //Ground Ladder
  32, //Floor1 Ladder
  88, //Floor2 Ladder
  88, //FloorExit
  56, //Enemy PosX
  37, //Enemy PosY
  24, //Enemy LeftMax
  56, //Enemy RightMax
  1, //Enemy Moving Direction
  0, //Secret
  0,0,0,0,0,0,0,32,0,1,
  0,0,0,0,0,0,0,33,0,1,
  1,1,1,1,20,1,1,1,1,1,
  0,0,0,0,20,34,0,0,0,0,
  0,0,0,0,20,35,0,0,0,0,
  1,20,17,15,17,16,0,0,0,0,
  1,20,0,12,0,13,0,0,0,0,
  1,20,0,12,0,13,0,0,0,0,
  1,2,2,2,2,2,2,2,2,2
};

uint8_t LevelPlan57[114]={
  9, //frame width 
  10, //frame height
  0, //north
  56, //west
  0, //south
  200, //east
  0, //enemyId
  0, //enemyHealth
  0,48, //Ground limit
  0,0, //Floor1 limit
  0,0, //Floor2 limit
  88, //Ground Ladder
  88, //Floor1 Ladder
  88, //Floor2 Ladder
  88, //FloorExit
  0, //Enemy PosX
  0, //Enemy PosY
  0, //Enemy LeftMax
  0, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  1,1,1,1,1,1,1,1,1,1,
  1,1,1,1,1,1,1,1,1,1,
  1,1,1,1,1,1,1,1,1,1,
  0,0,0,0,0,0,1,1,1,1,
  0,0,0,0,0,0,7,0,0,0,
  0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,
  2,2,2,2,2,2,2,2,2,2
};

uint8_t LevelPlan58[114]={
  9, //frame width 
  10, //frame height
  49, //north
  0, //west
  0, //south
  59, //east
  2, //enemyId
  16, //enemyHealth
  0,0, //Ground limit
  8,80, //Floor1 limit
  8,40, //Floor2 limit
  88, //Ground Ladder
  16, //Floor1 Ladder
  8, //Floor2 Ladder
  88, //FloorExit
  48, //Enemy PosX
  20, //Enemy PosY
  32, //Enemy LeftMax
  64, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  1,20,0,0,0,0,0,0,1,1,
  1,20,0,0,0,0,0,0,1,1,
  1,17,20,17,16,0,0,0,1,1,
  1,0,20,0,13,0,0,0,0,0,
  5,0,20,0,13,0,0,0,0,0,
  5,14,17,17,17,17,17,17,5,5,
  5,11,0,0,0,0,0,0,5,5,
  5,11,0,0,0,0,0,0,5,5,
  5,11,0,0,0,0,0,0,5,5
};

uint8_t LevelPlan59[114]={
  9, //frame width 
  10, //frame height
  0, //north
  58, //west
  60, //south
  0, //east
  4, //enemyId
  16, //enemyHealth
  24,32, //Ground limit
  0,64, //Floor1 limit
  8,64, //Floor2 limit
  24, //Ground Ladder
  56, //Floor1 Ladder
  88, //Floor2 Ladder
  24, //FloorExit
  48, //Enemy PosX
  20, //Enemy PosY
  0, //Enemy LeftMax
  0, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  1,0,30,0,34,0,0,0,1,0,
  1,0,31,0,35,0,0,0,1,0,
  1,14,17,17,17,17,17,20,1,0,
  0,11,0,0,0,0,0,20,5,5,
  0,11,0,0,0,0,0,20,5,5,
  5,5,5,20,5,5,5,5,5,5,
  5,0,0,20,0,0,0,0,5,5,
  5,0,0,20,0,0,0,0,5,5,
  5,0,0,20,0,0,0,0,5,5
};

uint8_t LevelPlan60[114]={
  9, //frame width 
  10, //frame height
  59, //north
  61, //west
  60, //south
  62, //east
  7, //enemyId
  16, //enemyHealth
  8,80, //Ground limit
  8,64, //Floor1 limit
  8,80, //Floor2 limit
  40, //Ground Ladder
  56, //Floor1 Ladder
  24, //Floor2 Ladder
  88, //FloorExit
  24, //Enemy PosX
  20, //Enemy PosY
  0, //Enemy LeftMax
  0, //Enemy RightMax
  1, //Enemy Moving Direction
  61, //Secret
  5,0,0,20,0,0,0,0,0,0,
  6,0,0,20,0,0,0,0,0,0,
  5,5,5,5,5,5,5,20,5,5,
  6,0,0,0,0,0,0,20,5,0,
  5,0,0,0,0,0,0,20,5,0,
  6,6,6,6,6,20,6,6,6,0,
  5,32,0,0,0,20,0,0,0,0,
  6,33,0,0,0,20,0,0,0,0,
  5,5,5,5,5,5,5,5,5,5
};

uint8_t LevelPlan61[114]={
  9, //frame width 
  10, //frame height
  0, //north
  0, //west
  0, //south
  60, //east
  0, //enemyId
  0, //enemyHealth
  24,56, //Ground limit
  8,64, //Floor1 limit
  56,80, //Floor2 limit
  24, //Ground Ladder
  56, //Floor1 Ladder
  88, //Floor2 Ladder
  88, //FloorExit
  0, //Enemy PosX
  0, //Enemy PosY
  0, //Enemy LeftMax
  0, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  5,5,0,0,0,0,0,0,0,0,
  6,6,0,0,0,0,0,0,0,0,
  5,5,0,0,0,0,0,20,5,5,
  6,0,34,0,0,0,0,20,6,6,
  5,0,35,0,0,0,0,20,5,5,
  6,6,6,20,6,6,6,6,6,6,
  5,5,5,20,0,32,0,5,5,5,
  6,6,6,20,0,33,0,6,6,6,
  5,5,5,5,5,5,5,5,5,5
};

uint8_t LevelPlan62[114]={
  9, //frame width 
  10, //frame height
  0, //north
  60, //west
  0, //south
  63, //east
  3, //enemyId
  16, //enemyHealth
  0,80, //Ground limit
  24,80, //Floor1 limit
  0,72, //Floor2 limit
  40, //Ground Ladder
  88, //Floor1 Ladder
  88, //Floor2 Ladder
  88, //FloorExit
  40, //Enemy PosX
  2, //Enemy PosY
  24, //Enemy LeftMax
  50, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  14,17,15,17,15,17,16,0,30,5,
  11,0,12,0,12,0,13,0,31,6,
  5,5,5,5,5,5,5,5,5,5,
  0,0,6,0,0,0,0,0,0,0,
  0,0,5,0,0,0,0,0,0,0,
  0,0,6,6,6,20,6,6,6,6,
  0,0,0,0,0,20,0,0,0,0,
  0,0,0,0,0,20,0,0,0,0,
  5,5,5,5,5,5,5,5,5,5
};

uint8_t LevelPlan63[114]={
  9, //frame width 
  10, //frame height
  64, //north
  62, //west
  0, //south
  65, //east
  6, //enemyId
  16, //enemyHealth
  0,80, //Ground limit
  0,56, //Floor1 limit
  48,56, //Floor2 limit
  88, //Ground Ladder
  48, //Floor1 Ladder
  48, //Floor2 Ladder
  88, //FloorExit
  40, //Enemy PosX
  37, //Enemy PosY
  24, //Enemy LeftMax
  56, //Enemy RightMax
  1, //Enemy Moving Direction
  0, //Secret
  5,5,5,0,0,0,20,5,5,5,
  6,6,6,0,0,0,20,6,6,6,
  5,5,5,0,0,0,20,5,5,5,
  0,0,0,0,0,0,20,6,6,6,
  0,0,0,0,0,0,20,5,5,5,
  6,6,6,6,6,6,6,6,6,6,
  0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,
  5,5,5,5,5,5,5,5,5,5
};

uint8_t LevelPlan64[114]={
  9, //frame width 
  10, //frame height
  0, //north
  0, //west
  63, //south
  0, //east
  8, //enemyId
  16, //enemyHealth
  48,72, //Ground limit
  64,72, //Floor1 limit
  8,72, //Floor2 limit
  64, //Ground Ladder
  64, //Floor1 Ladder
  88, //Floor2 Ladder
  48, //FloorExit
  48, //Enemy PosX
  2, //Enemy PosY
  0, //Enemy LeftMax
  0, //Enemy RightMax
  1, //Enemy Moving Direction
  0, //Secret
  0,30,0,32,0,0,0,0,0,1,
  0,31,0,33,0,0,0,0,0,1,
  0,5,5,5,5,5,5,5,20,1,
  5,5,5,5,5,5,5,0,20,1,
  5,5,5,5,5,5,5,0,20,5,
  5,5,5,5,5,5,5,0,20,5,
  5,5,5,0,0,0,0,0,20,5,
  5,5,5,0,0,0,0,0,20,5,
  5,5,5,0,0,0,20,5,5,5
};

uint8_t LevelPlan65[114]={
  9, //frame width 
  10, //frame height
  0, //north
  63, //west
  69, //south
  66, //east
  10, //enemyId
  16, //enemyHealth
  0,48, //Ground limit
  40,80, //Floor1 limit
  0,0, //Floor2 limit
  40, //Ground Ladder
  88, //Floor1 Ladder
  88, //Floor2 Ladder
  8, //FloorExit
  64, //Enemy PosX
  20, //Enemy PosY
  0, //Enemy LeftMax
  0, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  5,5,5,5,5,5,5,5,5,5,
  6,6,0,0,6,6,0,0,6,6,
  5,5,0,0,0,0,0,0,5,5,
  0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,20,6,6,6,6,
  0,0,0,0,0,20,5,5,5,5,
  0,0,0,0,0,20,6,6,6,6,
  5,20,5,5,5,5,5,5,5,5
};

uint8_t LevelPlan66[114]={
  9, //frame width 
  10, //frame height
  67, //north
  65, //west
  70, //south
  76, //east
  5, //enemyId
  16, //enemyHealth
  32,40, //Ground limit
  0,80, //Floor1 limit
  40,48, //Floor2 limit
  32, //Ground Ladder
  40, //Floor1 Ladder
  40, //Floor2 Ladder
  32, //FloorExit
  56, //Enemy PosX
  20, //Enemy PosY
  0, //Enemy LeftMax
  0, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  5,5,5,0,0,20,0,5,5,5,
  6,6,6,0,0,20,0,6,6,6,
  5,5,5,0,0,20,0,5,5,5,
  0,0,0,0,0,20,0,0,0,0,
  0,0,0,0,0,20,0,0,0,0,
  6,6,6,17,20,17,17,6,6,6,
  5,5,5,0,20,0,0,5,5,5,
  6,6,6,0,20,0,0,6,6,6,
  5,5,5,0,20,0,0,5,5,5
};

uint8_t LevelPlan67[114]={
  9, //frame width 
  10, //frame height
  0, //north
  68, //west
  66, //south
  0, //east
  4, //enemyId
  16, //enemyHealth
  40,48, //Ground limit
  8,72, //Floor1 limit
  8,72, //Floor2 limit
  40, //Ground Ladder
  64, //Floor1 Ladder
  88, //Floor2 Ladder
  40, //FloorExit
  40, //Enemy PosX
  2, //Enemy PosY
  0, //Enemy LeftMax
  0, //Enemy RightMax
  1, //Enemy Moving Direction
  68, //Secret
  1,0,0,0,0,0,0,0,0,1,
  1,0,0,0,0,0,0,0,0,1,
  1,1,1,1,1,1,1,1,20,1,
  5,0,0,0,0,0,0,0,20,5,
  5,0,0,0,0,0,0,0,20,5,
  5,5,5,17,17,20,17,5,5,5,
  5,5,5,0,0,20,0,5,5,5,
  5,5,5,0,0,20,0,5,5,5,
  5,5,5,0,0,20,0,5,5,5
};

uint8_t LevelPlan68[114]={
  9, //frame width 
  10, //frame height
  0, //north
  0, //west
  0, //south
  67, //east
  0, //enemyId
  0, //enemyHealth
  0,0, //Ground limit
  8,80, //Floor1 limit
  0,0, //Floor2 limit
  88, //Ground Ladder
  88, //Floor1 Ladder
  88, //Floor2 Ladder
  88, //FloorExit
  0, //Enemy PosX
  0, //Enemy PosY
  0, //Enemy LeftMax
  0, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  1,1,1,1,1,1,1,1,1,1,
  1,1,1,0,0,0,0,1,1,1,
  1,1,0,0,0,0,0,0,1,1,
  5,32,0,32,0,0,0,0,0,0,
  5,33,0,33,0,0,0,0,0,0,
  5,5,17,17,17,17,17,17,5,5,
  5,5,5,0,0,0,0,5,5,5,
  5,5,5,5,0,0,5,5,5,5,
  5,5,5,5,5,5,5,5,5,5
};

uint8_t LevelPlan69[114]={
  9, //frame width 
  10, //frame height
  65, //north
  72, //west
  0, //south
  70, //east
  1, //enemyId
  16, //enemyHealth
  0,80, //Ground limit
  8,64, //Floor1 limit
  8,16, //Floor2 limit
  88, //Ground Ladder
  8, //Floor1 Ladder
  8, //Floor2 Ladder
  88, //FloorExit
  40, //Enemy PosX
  37, //Enemy PosY
  16, //Enemy LeftMax
  56, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  5,20,5,5,5,5,5,5,5,5,
  0,20,0,0,6,6,6,6,6,6,
  0,20,0,0,5,5,5,5,5,5,
  0,20,0,0,0,0,32,0,6,6,
  0,20,0,0,0,0,33,0,5,5,
  0,14,17,15,17,15,17,15,17,15,
  0,11,0,12,0,12,0,12,0,12,
  0,11,0,12,0,12,0,12,0,12,
  5,5,5,5,5,5,5,5,5,5
};

uint8_t LevelPlan70[114]={
  9, //frame width 
  10, //frame height
  66, //north
  69, //west
  0, //south
  71, //east
  11, //enemyId
  16, //enemyHealth
  0,80, //Ground limit
  8,64, //Floor1 limit
  24,64, //Floor2 limit
  88, //Ground Ladder
  56, //Floor1 Ladder
  32, //Floor2 Ladder
  88, //FloorExit
  40, //Enemy PosX
  20, //Enemy PosY
  24, //Enemy LeftMax
  48, //Enemy RightMax
  1, //Enemy Moving Direction
  0, //Secret
  5,5,5,0,20,0,0,0,5,5,
  6,6,6,0,20,0,0,0,6,6,
  5,5,5,17,17,17,17,20,5,5,
  6,30,32,0,0,0,0,20,6,6,
  5,31,33,0,0,0,0,20,5,5,
  17,15,17,15,17,15,17,15,17,16,
  0,12,0,12,0,12,0,12,0,13,
  0,12,0,12,0,12,0,12,0,13,
  5,5,5,5,5,5,5,5,5,5
};

uint8_t LevelPlan71[114]={
  9, //frame width 
  10, //frame height
  76, //north
  70, //west
  0, //south
  86, //east
  7, //enemyId
  16, //enemyHealth
  0,80, //Ground limit
  8,40, //Floor1 limit
  32,64, //Floor2 limit
  88, //Ground Ladder
  32, //Floor1 Ladder
  56, //Floor2 Ladder
  88, //FloorExit
  16, //Enemy PosX
  20, //Enemy PosY
  0, //Enemy LeftMax
  0, //Enemy RightMax
  1, //Enemy Moving Direction
  0, //Secret
  5,0,0,0,0,0,0,20,5,5,
  6,0,0,0,0,0,0,20,6,6,
  5,0,0,0,20,5,5,5,5,5,
  6,30,0,0,20,6,6,6,6,6,
  5,31,0,0,20,5,5,5,5,5,
  6,6,6,6,6,6,6,6,6,6,
  0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,
  5,5,5,5,5,5,5,5,5,5
};

uint8_t LevelPlan72[114]={
  9, //frame width 
  10, //frame height
  0, //north
  73, //west
  0, //south
  69, //east
  8, //enemyId
  16, //enemyHealth
  0,80, //Ground limit
  0,72, //Floor1 limit
  0,72, //Floor2 limit
  88, //Ground Ladder
  88, //Floor1 Ladder
  88, //Floor2 Ladder
  88, //FloorExit
  32, //Enemy PosX
  20, //Enemy PosY
  0, //Enemy LeftMax
  0, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  0,0,0,0,0,0,0,0,30,5,
  0,0,0,0,0,0,0,0,31,6,
  5,5,5,5,5,5,5,5,5,5,
  0,0,13,0,0,13,0,30,13,0,
  0,0,13,0,0,13,0,31,13,0,
  14,17,17,17,17,17,17,17,16,0,
  11,0,0,0,0,0,0,0,13,0,
  11,0,0,0,0,0,0,0,13,0,
  5,5,5,5,5,5,5,5,5,5
};

uint8_t LevelPlan73[114]={
  9, //frame width 
  10, //frame height
  0, //north
  74, //west
  0, //south
  72, //east
  3, //enemyId
  16, //enemyHealth
  0,80, //Ground limit
  0,80, //Floor1 limit
  0,80, //Floor2 limit
  88, //Ground Ladder
  32, //Floor1 Ladder
  88, //Floor2 Ladder
  88, //FloorExit
  40, //Enemy PosX
  37, //Enemy PosY
  16, //Enemy LeftMax
  56, //Enemy RightMax
  1, //Enemy Moving Direction
  0, //Secret
  0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,
  5,5,5,5,20,5,5,5,5,5,
  13,0,0,13,20,0,13,0,0,13,
  13,0,0,13,20,0,13,0,0,13,
  17,17,17,15,17,17,17,17,17,16,
  0,0,0,12,0,0,0,0,0,13,
  0,0,0,12,0,0,0,0,0,13,
  5,5,5,5,5,5,5,5,5,5
};

uint8_t LevelPlan74[114]={
  9, //frame width 
  10, //frame height
  0, //north
  75, //west
  0, //south
  73, //east
  10, //enemyId
  16, //enemyHealth
  24,80, //Ground limit
  8,80, //Floor1 limit
  32,80, //Floor2 limit
  32, //Ground Ladder
  88, //Floor1 Ladder
  88, //Floor2 Ladder
  88, //FloorExit
  16, //Enemy PosX
  20, //Enemy PosY
  0, //Enemy LeftMax
  0, //Enemy RightMax
  0, //Enemy Moving Direction
  75, //Secret
  5,5,5,5,32,0,0,0,0,0,
  6,6,6,0,33,0,0,0,0,0,
  5,5,5,5,5,5,5,5,5,5,
  6,0,0,13,0,0,13,0,0,13,
  5,0,0,13,0,0,13,0,0,13,
  6,17,17,17,20,17,17,17,17,17,
  5,5,0,0,20,0,0,0,0,0,
  6,6,6,0,20,0,0,0,0,0,
  5,5,5,5,5,5,5,5,5,5
};

uint8_t LevelPlan75[114]={
  9, //frame width 
  10, //frame height
  0, //north
  0, //west
  0, //south
  74, //east
  0, //enemyId
  0, //enemyHealth
  16,64, //Ground limit
  56,80, //Floor1 limit
  16,64, //Floor2 limit
  56, //Ground Ladder
  88, //Floor1 Ladder
  88, //Floor2 Ladder
  88, //FloorExit
  0, //Enemy PosX
  0, //Enemy PosY
  0, //Enemy LeftMax
  0, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  5,5,5,5,5,5,5,5,5,5,
  6,6,6,6,0,0,6,6,6,6,
  5,5,5,5,0,0,5,5,5,5,
  6,6,6,0,0,0,0,0,0,0,
  5,5,5,0,0,0,0,0,0,0,
  6,6,0,0,0,0,0,20,6,6,
  5,5,34,32,0,0,0,20,5,5,
  6,0,35,33,0,0,0,20,0,6,
  5,5,5,5,5,5,5,5,5,5
};

uint8_t LevelPlan76[114]={
  9, //frame width 
  10, //frame height
  0, //north
  66, //west
  71, //south
  77, //east
  2, //enemyId
  16, //enemyHealth
  24,80, //Ground limit
  0,16, //Floor1 limit
  8,80, //Floor2 limit
  88, //Ground Ladder
  8, //Floor1 Ladder
  88, //Floor2 Ladder
  56, //FloorExit
  48, //Enemy PosX
  2, //Enemy PosY
  24, //Enemy LeftMax
  48, //Enemy RightMax
  1, //Enemy Moving Direction
  0, //Secret
  5,0,0,0,0,0,0,34,0,0,
  6,0,0,0,0,0,0,35,0,0,
  5,20,5,17,17,17,17,17,17,17,
  0,20,6,0,0,0,0,0,0,0,
  0,20,5,12,12,12,12,12,12,12,
  6,6,6,6,6,6,6,6,6,6,
  5,5,5,0,32,0,0,0,0,0,
  6,6,6,0,33,0,0,0,0,0,
  5,5,5,5,5,5,5,20,5,5
};

uint8_t LevelPlan77[114]={
  9, //frame width 
  10, //frame height
  0, //north
  76, //west
  86, //south
  78, //east
  9, //enemyId
  16, //enemyHealth
  0,72, //Ground limit
  64,72, //Floor1 limit
  0,80, //Floor2 limit
  64, //Ground Ladder
  64, //Floor1 Ladder
  88, //Floor2 Ladder
  16, //FloorExit
  48, //Enemy PosX
  37, //Enemy PosY
  26, //Enemy LeftMax
  54, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,
  17,17,17,17,17,17,17,17,20,17,
  0,0,0,0,0,0,0,0,20,6,
  12,12,12,12,12,12,12,12,20,5,
  6,6,6,6,6,6,6,6,20,6,
  0,0,0,0,0,0,0,0,20,5,
  0,0,0,0,0,0,0,0,20,6,
  5,5,20,5,5,5,5,5,5,5
};

uint8_t LevelPlan78[114]={
  9, //frame width 
  10, //frame height
  0, //north
  77, //west
  85, //south
  79, //east
  10, //enemyId
  16, //enemyHealth
  16,24, //Ground limit
  8,72, //Floor1 limit
  0,80, //Floor2 limit
  16, //Ground Ladder
  88, //Floor1 Ladder
  88, //Floor2 Ladder
  16, //FloorExit
  48, //Enemy PosX
  20, //Enemy PosY
  0, //Enemy LeftMax
  0, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,
  5,5,5,5,5,5,5,5,5,5,
  6,0,0,0,0,0,0,0,30,6,
  5,0,0,0,0,0,0,0,31,5,
  6,6,20,6,6,6,6,6,6,6,
  5,5,20,5,5,5,5,5,5,5,
  6,6,20,6,6,6,6,6,6,6,
  5,5,20,5,5,5,5,5,5,5
};

uint8_t LevelPlan79[114]={
  9, //frame width 
  10, //frame height
  90, //north
  78, //west
  84, //south
  80, //east
  2, //enemyId
  16, //enemyHealth
  16,80, //Ground limit
  40,80, //Floor1 limit
  0,80, //Floor2 limit
  88, //Ground Ladder
  88, //Floor1 Ladder
  8, //Floor2 Ladder
  64, //FloorExit
  48, //Enemy PosX
  37, //Enemy PosY
  24, //Enemy LeftMax
  50, //Enemy RightMax
  1, //Enemy Moving Direction
  0, //Secret
  0,20,0,0,0,0,0,0,0,0,
  0,20,0,0,0,0,0,0,0,0,
  5,5,5,5,5,5,5,5,5,5,
  6,6,0,0,0,11,32,0,0,0,
  5,5,0,0,0,11,33,0,0,0,
  6,6,0,0,0,17,17,17,17,17,
  5,5,30,0,0,0,0,0,0,0,
  6,6,31,0,0,0,0,0,0,0,
  5,5,5,5,5,5,5,5,20,5
};

uint8_t LevelPlan80[114]={
  9, //frame width 
  10, //frame height
  0, //north
  79, //west
  0, //south
  81, //east
  3, //enemyId
  16, //enemyHealth
  0,80, //Ground limit
  0,80, //Floor1 limit
  0,80, //Floor2 limit
  88, //Ground Ladder
  8, //Floor1 Ladder
  88, //Floor2 Ladder
  88, //FloorExit
  48, //Enemy PosX
  20, //Enemy PosY
  24, //Enemy LeftMax
  64, //Enemy RightMax
  1, //Enemy Moving Direction
  0, //Secret
  0,0,0,0,0,11,0,0,0,0,
  0,0,0,0,0,11,0,0,0,0,
  5,20,17,17,17,14,17,17,17,17,
  0,20,0,0,0,11,0,0,0,0,
  0,20,0,0,0,11,0,0,0,0,
  17,17,17,17,17,17,17,17,17,17,
  0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,
  5,5,5,5,5,5,5,17,5,5
};

uint8_t LevelPlan81[114]={
  9, //frame width 
  10, //frame height
  0, //north
  80, //west
  0, //south
  0, //east
  1, //enemyId
  16, //enemyHealth
  0,72, //Ground limit
  0,72, //Floor1 limit
  0,32, //Floor2 limit
  64, //Ground Ladder
  24, //Floor1 Ladder
  88, //Floor2 Ladder
  88, //FloorExit
  48, //Enemy PosX
  37, //Enemy PosY
  16, //Enemy LeftMax
  48, //Enemy RightMax
  1, //Enemy Moving Direction
  0, //Secret
  0,0,0,13,0,0,0,5,5,5,
  0,0,0,13,0,0,0,6,6,6,
  5,5,5,20,0,0,0,5,5,5,
  0,0,0,20,0,0,0,0,0,6,
  0,0,0,20,0,0,0,0,0,5,
  17,17,17,17,17,17,17,6,20,6,
  0,0,0,0,0,0,0,0,20,5,
  0,0,0,0,0,0,0,0,20,6,
  5,5,5,5,5,5,5,5,5,5
};

uint8_t LevelPlan82[114]={
  9, //frame width 
  10, //frame height
  0, //north
  84, //west
  0, //south
  83, //east
  7, //enemyId
  16, //enemyHealth
  0,32, //Ground limit
  16,64, //Floor1 limit
  0,0, //Floor2 limit
  16, //Ground Ladder
  88, //Floor1 Ladder
  88, //Floor2 Ladder
  88, //FloorExit
  48, //Enemy PosX
  20, //Enemy PosY
  0, //Enemy LeftMax
  0, //Enemy RightMax
  0, //Enemy Moving Direction
  83, //Secret
  5,5,5,5,5,5,5,0,5,5,
  5,5,0,5,5,0,0,0,0,5,
  5,0,0,0,5,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,5,
  0,0,0,0,0,0,0,0,5,5,
  0,0,20,5,5,5,5,5,5,5,
  0,0,20,0,0,0,0,0,0,0,
  0,0,20,0,5,0,0,0,0,0,
  5,5,5,5,5,5,5,5,5,5
};

uint8_t LevelPlan83[114]={
  9, //frame width 
  10, //frame height
  0, //north
  82, //west
  0, //south
  0, //east
  0, //enemyId
  0, //enemyHealth
  0,16, //Ground limit
  8,16, //Floor1 limit
  8,72, //Floor2 limit
  8, //Ground Ladder
  8, //Floor1 Ladder
  88, //Floor2 Ladder
  88, //FloorExit
  0, //Enemy PosX
  0, //Enemy PosY
  0, //Enemy LeftMax
  0, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  5,0,0,0,0,0,32,0,34,5,
  5,0,0,0,0,0,33,0,35,5,
  5,20,14,17,17,17,17,17,17,5,
  5,20,11,0,0,0,0,0,0,5,
  5,20,11,0,0,0,0,0,0,5,
  5,20,11,0,0,1,0,0,0,5,
  0,20,11,0,1,1,1,0,0,5,
  0,20,11,1,1,1,1,1,0,5,
  5,5,11,1,1,1,1,1,0,5
};

uint8_t LevelPlan84[114]={
  9, //frame width 
  10, //frame height
  79, //north
  85, //west
  0, //south
  82, //east
  5, //enemyId
  16, //enemyHealth
  0,80, //Ground limit
  8,72, //Floor1 limit
  0,72, //Floor2 limit
  8, //Ground Ladder
  16, //Floor1 Ladder
  64, //Floor2 Ladder
  88, //FloorExit
  48, //Enemy PosX
  20, //Enemy PosY
  0, //Enemy LeftMax
  0, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  0,0,0,0,0,0,0,0,20,5,
  0,0,0,0,0,0,0,0,20,6,
  5,5,20,5,5,5,5,5,5,5,
  0,0,20,0,0,0,0,0,30,0,
  0,0,20,0,0,0,0,0,31,0,
  0,20,14,17,17,17,17,17,16,0,
  0,20,11,0,0,0,0,0,13,0,
  0,20,11,0,0,0,0,0,13,0,
  5,5,5,5,5,5,5,5,5,5
};

uint8_t LevelPlan85[114]={
  9, //frame width 
  10, //frame height
  78, //north
  86, //west
  0, //south
  84, //east
  2, //enemyId
  16, //enemyHealth
  0,80, //Ground limit
  24,64, //Floor1 limit
  8,80, //Floor2 limit
  24, //Ground Ladder
  88, //Floor1 Ladder
  16, //Floor2 Ladder
  88, //FloorExit
  48, //Enemy PosX
  37, //Enemy PosY
  32, //Enemy LeftMax
  50, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  5,0,20,0,0,0,0,0,0,0,
  6,0,20,0,0,0,0,0,0,0,
  5,5,5,5,5,5,5,5,5,5,
  6,6,0,0,0,0,0,34,6,6,
  5,5,0,0,0,0,0,35,5,5,
  0,0,0,20,6,6,6,6,6,6,
  0,0,0,20,0,0,0,0,0,0,
  0,0,0,20,0,0,0,0,0,0,
  5,5,5,5,5,5,5,5,5,5
};

uint8_t LevelPlan86[114]={
  9, //frame width 
  10, //frame height
  77, //north
  71, //west
  0, //south
  85, //east
  6, //enemyId
  16, //enemyHealth
  0,80, //Ground limit
  8,24, //Floor1 limit
  16,24, //Floor2 limit
  8, //Ground Ladder
  16, //Floor1 Ladder
  16, //Floor2 Ladder
  88, //FloorExit
  48, //Enemy PosX
  37, //Enemy PosY
  32, //Enemy LeftMax
  56, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  5,0,20,5,5,5,5,5,5,5,
  6,0,20,6,6,6,6,6,6,6,
  5,0,20,5,1,1,1,1,1,5,
  6,0,20,6,1,1,1,1,1,6,
  5,0,20,5,1,1,1,1,1,5,
  6,20,6,6,0,0,0,0,0,0,
  0,20,30,0,0,0,0,0,0,0,
  0,20,31,0,0,0,0,0,0,0,
  5,5,5,5,5,5,5,5,5,5
};

uint8_t LevelPlan87[114]={
  9, //frame width 
  10, //frame height
  0, //north
  0, //west
  0, //south
  88, //east
  0, //enemyId
  0, //enemyHealth
  0,0, //Ground limit
  0,0, //Floor1 limit
  16,80, //Floor2 limit
  88, //Ground Ladder
  88, //Floor1 Ladder
  88, //Floor2 Ladder
  88, //FloorExit
  0, //Enemy PosX
  0, //Enemy PosY
  0, //Enemy LeftMax
  0, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  0,1,0,34,0,32,0,0,0,0,
  0,1,0,35,0,33,0,0,0,0,
  0,1,1,1,1,1,1,1,1,17,
  0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,
  12,12,12,12,12,12,12,12,12,12
};

uint8_t LevelPlan88[114]={
  9, //frame width 
  10, //frame height
  0, //north
  87, //west
  0, //south
  89, //east
  11, //enemyId
  16, //enemyHealth
  16,72, //Ground limit
  16,80, //Floor1 limit
  8,80, //Floor2 limit
  64, //Ground Ladder
  88, //Floor1 Ladder
  88, //Floor2 Ladder
  88, //FloorExit
  40, //Enemy PosX
  20, //Enemy PosY
  16, //Enemy LeftMax
  48, //Enemy RightMax
  1, //Enemy Moving Direction
  87, //Secret
  0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,
  0,1,1,1,1,1,1,1,1,1,
  0,1,0,0,0,0,0,0,0,0,
  0,5,0,0,0,0,0,0,0,0,
  0,5,5,5,5,5,5,5,20,5,
  0,5,0,0,30,0,0,0,20,5,
  0,5,0,0,31,0,0,0,20,5,
  12,5,5,5,5,5,5,5,5,5
};

uint8_t LevelPlan89[114]={
  9, //frame width 
  10, //frame height
  0, //north
  88, //west
  0, //south
  90, //east
  5, //enemyId
  16, //enemyHealth
  8,80, //Ground limit
  0,16, //Floor1 limit
  0,80, //Floor2 limit
  88, //Ground Ladder
  8, //Floor1 Ladder
  88, //Floor2 Ladder
  88, //FloorExit
  40, //Enemy PosX
  37, //Enemy PosY
  0, //Enemy LeftMax
  0, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,
  1,20,1,1,1,1,1,1,1,1,
  0,20,1,1,1,0,0,0,1,1,
  0,20,5,5,0,0,0,0,5,5,
  5,5,5,0,0,0,0,0,0,0,
  5,0,30,0,0,0,0,0,0,0,
  5,0,31,0,0,0,0,0,0,0,
  5,5,5,5,5,5,5,5,5,5
};

uint8_t LevelPlan90[114]={
  9, //frame width 
  10, //frame height
  55, //north
  89, //west
  79, //south
  91, //east
  8, //enemyId
  16, //enemyHealth
  0,80, //Ground limit
  32,80, //Floor1 limit
  0,80, //Floor2 limit
  32, //Ground Ladder
  88, //Floor1 Ladder
  56, //Floor2 Ladder
  8, //FloorExit
  56, //Enemy PosX
  20, //Enemy PosY
  0, //Enemy LeftMax
  0, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  0,0,0,0,0,0,0,20,0,0,
  0,0,0,0,0,0,0,20,0,0,
  1,1,1,1,1,1,1,1,1,1,
  1,0,0,0,0,0,0,0,0,0,
  5,0,0,0,0,0,0,0,0,0,
  0,0,0,0,20,17,17,17,17,17,
  0,0,0,0,20,0,0,0,0,0,
  0,0,0,0,20,0,0,0,0,0,
  5,20,5,5,5,5,5,5,5,5
};

uint8_t LevelPlan91[114]={
  9, //frame width 
  10, //frame height
  0, //north
  90, //west
  0, //south
  92, //east
  6, //enemyId
  16, //enemyHealth
  0,64, //Ground limit
  0,72, //Floor1 limit
  0,16, //Floor2 limit
  88, //Ground Ladder
  8, //Floor1 Ladder
  88, //Floor2 Ladder
  88, //FloorExit
  56, //Enemy PosX
  37, //Enemy PosY
  16, //Enemy LeftMax
  48, //Enemy RightMax
  1, //Enemy Moving Direction
  92, //Secret
  0,13,0,0,0,0,0,0,13,0,
  0,13,0,0,0,0,0,0,13,0,
  1,20,0,0,0,0,0,0,13,0,
  0,20,0,0,0,0,30,0,13,0,
  0,20,0,0,0,0,31,0,13,0,
  17,17,17,17,17,17,17,17,16,0,
  0,0,0,0,0,0,0,0,13,0,
  0,0,0,0,0,0,0,0,5,5,
  5,5,5,5,5,5,5,5,5,5
};

uint8_t LevelPlan92[114]={
  9, //frame width 
  10, //frame height
  0, //north
  91, //west
  0, //south
  0, //east
  0, //enemyId
  0, //enemyHealth
  8,56, //Ground limit
  0,32, //Floor1 limit
  0,0, //Floor2 limit
  8, //Ground Ladder
  88, //Floor1 Ladder
  88, //Floor2 Ladder
  88, //FloorExit
  0, //Enemy PosX
  0, //Enemy PosY
  0, //Enemy LeftMax
  0, //Enemy RightMax
  0, //Enemy Moving Direction
  0, //Secret
  0,0,0,0,0,0,0,0,0,5,
  0,0,0,0,0,0,0,0,0,5,
  0,0,0,0,0,0,0,0,0,5,
  0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,
  5,20,17,17,0,0,0,17,17,5,
  5,20,0,32,0,32,0,0,5,5,
  5,20,0,33,0,33,0,5,5,5,
  5,5,5,5,5,5,5,5,5,5
};

//----------------------Level logic----------------

void setCurrentLevel(uint8_t arr[114])
{
  switch(LevelId)
  {
    case 1:
      copyLevel(arr,LevelPlan1); break;
    case 2:
      copyLevel(arr,LevelPlan2); break;
    case 3:
      copyLevel(arr,LevelPlan3); break;
    case 4:
      copyLevel(arr,LevelPlan4); break;
    case 5:
      copyLevel(arr,LevelPlan5); break; 
    case 6:
      copyLevel(arr,LevelPlan6); break;
    case 7:
      copyLevel(arr,LevelPlan7); break;
    case 8:
      copyLevel(arr,LevelPlan8); break;
    case 9:
      copyLevel(arr,LevelPlan9); break; 
    case 10:
      copyLevel(arr,LevelPlan10); break; 
    case 11:
      copyLevel(arr,LevelPlan11); break; 
    case 12:
      copyLevel(arr,LevelPlan12); break; 
    case 13:
      copyLevel(arr,LevelPlan13); break; 
    case 14:
      copyLevel(arr,LevelPlan14); break; 
    case 15:
      copyLevel(arr,LevelPlan15); break; 
    case 16:
      copyLevel(arr,LevelPlan16); break;  
    case 17:
      copyLevel(arr,LevelPlan17); break;    
    case 18:
      copyLevel(arr,LevelPlan18); break; 
    case 19:
      copyLevel(arr,LevelPlan19); break; 
    case 20:
      copyLevel(arr,LevelPlan20); break; 
    case 21:
      copyLevel(arr,LevelPlan21); break; 
    case 22:
      copyLevel(arr,LevelPlan22); break;
    case 23:
      copyLevel(arr,LevelPlan23); break;
    case 24:
      copyLevel(arr,LevelPlan24); break;
    case 25:
      copyLevel(arr,LevelPlan25); break;
    case 26:
      copyLevel(arr,LevelPlan26); break; 
    case 27:
      copyLevel(arr,LevelPlan27); break; 
    case 28:
      copyLevel(arr,LevelPlan28); break; 
    case 29:
      copyLevel(arr,LevelPlan29); break; 
    case 30:
      copyLevel(arr,LevelPlan30); break;
    case 31:
      copyLevel(arr,LevelPlan31); break;
    case 32:
      copyLevel(arr,LevelPlan32); break;
    case 33:
      copyLevel(arr,LevelPlan33); break;
    case 34:
      copyLevel(arr,LevelPlan34); break;
    case 35:
      copyLevel(arr,LevelPlan35); break;
    case 36:
      copyLevel(arr,LevelPlan36); break; 
    case 37:
      copyLevel(arr,LevelPlan37); break; 
    case 38:
      copyLevel(arr,LevelPlan38); break;
    case 39:
      copyLevel(arr,LevelPlan39); break;
    case 40:
      copyLevel(arr,LevelPlan40); break; 
    case 41:
      copyLevel(arr,LevelPlan41); break; 
    case 42:
      copyLevel(arr,LevelPlan42); break; 
    case 43:
      copyLevel(arr,LevelPlan43); break; 
    case 44:
      copyLevel(arr,LevelPlan44); break; 
    case 45:
      copyLevel(arr,LevelPlan45); break; 
    case 46:
      copyLevel(arr,LevelPlan46); break;
    case 47:
      copyLevel(arr,LevelPlan47); break;
    case 48:
      copyLevel(arr,LevelPlan48); break; 
    case 49:
      copyLevel(arr,LevelPlan49); break;
    case 50:
      copyLevel(arr,LevelPlan50); break;
    case 51:
      copyLevel(arr,LevelPlan51); break;
    case 52:
      copyLevel(arr,LevelPlan52); break;
    case 53:
      copyLevel(arr,LevelPlan53); break;
    case 54:
      copyLevel(arr,LevelPlan54); break; 
    case 55:
      copyLevel(arr,LevelPlan55); break;
    case 56:
      copyLevel(arr,LevelPlan56); break; 
    case 57:
      copyLevel(arr,LevelPlan57); break; 
    case 58:
      copyLevel(arr,LevelPlan58); break; 
    case 59:
      copyLevel(arr,LevelPlan59); break; 
    case 60:
      copyLevel(arr,LevelPlan60); break; 
    case 61:
      copyLevel(arr,LevelPlan61); break; 
    case 62:
      copyLevel(arr,LevelPlan62); break;
    case 63:
      copyLevel(arr,LevelPlan63); break;
    case 64:
      copyLevel(arr,LevelPlan64); break;
    case 65:
      copyLevel(arr,LevelPlan65); break;
    case 66:
      copyLevel(arr,LevelPlan66); break;
    case 67:
      copyLevel(arr,LevelPlan67); break;
    case 68:
      copyLevel(arr,LevelPlan68); break;
    case 69:
      copyLevel(arr,LevelPlan69); break;
    case 70:
      copyLevel(arr,LevelPlan70); break;
    case 71:
      copyLevel(arr,LevelPlan71); break;
    case 72:
      copyLevel(arr,LevelPlan72); break;
    case 73:
      copyLevel(arr,LevelPlan73); break;
    case 74:
      copyLevel(arr,LevelPlan74); break;
    case 75:
      copyLevel(arr,LevelPlan75); break;
    case 76:
      copyLevel(arr,LevelPlan76); break;
    case 77:
      copyLevel(arr,LevelPlan77); break;
    case 78:
      copyLevel(arr,LevelPlan78); break;
    case 79:
      copyLevel(arr,LevelPlan79); break;
    case 80:
      copyLevel(arr,LevelPlan80); break;
    case 81:
      copyLevel(arr,LevelPlan81); break; 
    case 82:
      copyLevel(arr,LevelPlan82); break; 
    case 83:
      copyLevel(arr,LevelPlan83); break; 
    case 84:
      copyLevel(arr,LevelPlan84); break; 
    case 85:
      copyLevel(arr,LevelPlan85); break; 
    case 86:
      copyLevel(arr,LevelPlan86); break;
    case 87:
      copyLevel(arr,LevelPlan87); break;
    case 88:
      copyLevel(arr,LevelPlan88); break;
    case 89:
      copyLevel(arr,LevelPlan89); break;
    case 90:
      copyLevel(arr,LevelPlan90); break;
    case 91:
      copyLevel(arr,LevelPlan91); break;
    case 92:
      copyLevel(arr,LevelPlan92); break; 
  }
}

void saveCurrentLevel(uint8_t arr[114])
{
  switch(LevelId)
  {
    case 1:
      copyLevel(LevelPlan1,arr); break;
    case 2:
      copyLevel(LevelPlan2,arr); break;
    case 3:
      copyLevel(LevelPlan3,arr); break; 
    case 4:
      copyLevel(LevelPlan4,arr); break; 
    case 5:
      copyLevel(LevelPlan5,arr); break;
    case 6:
      copyLevel(LevelPlan6,arr); break; 
    case 7:
      copyLevel(LevelPlan7,arr); break; 
    case 8:
      copyLevel(LevelPlan8,arr); break;
    case 9:
      copyLevel(LevelPlan9,arr); break;
    case 10:
      copyLevel(LevelPlan10,arr); break;
    case 11:
      copyLevel(LevelPlan11,arr); break;
    case 12:
      copyLevel(LevelPlan12,arr); break;
    case 13:
      copyLevel(LevelPlan13,arr); break;
    case 14:
      copyLevel(LevelPlan14,arr); break;
    case 15:
      copyLevel(LevelPlan15,arr); break;
    case 16:
      copyLevel(LevelPlan16,arr); break;  
    case 17:
      copyLevel(LevelPlan17,arr); break;
    case 18:
      copyLevel(LevelPlan18,arr); break;  
    case 19:
      copyLevel(LevelPlan19,arr); break; 
    case 20:
      copyLevel(LevelPlan20,arr); break;
    case 21:
      copyLevel(LevelPlan21,arr); break;
    case 22:
      copyLevel(LevelPlan22,arr); break;
    case 23:
      copyLevel(LevelPlan23,arr); break; 
    case 24:
      copyLevel(LevelPlan24,arr); break; 
    case 25:
      copyLevel(LevelPlan25,arr); break; 
    case 26:
      copyLevel(LevelPlan26,arr); break;  
    case 27:
      copyLevel(LevelPlan27,arr); break; 
    case 28:
      copyLevel(LevelPlan28,arr); break; 
    case 29:
      copyLevel(LevelPlan29,arr); break; 
    case 30:
      copyLevel(LevelPlan30,arr); break; 
    case 31:
      copyLevel(LevelPlan31,arr); break; 
    case 32:
      copyLevel(LevelPlan32,arr); break;
    case 33:
      copyLevel(LevelPlan33,arr); break;
    case 34:
      copyLevel(LevelPlan34,arr); break;
    case 35:
      copyLevel(LevelPlan35,arr); break; 
    case 36:
      copyLevel(LevelPlan36,arr); break;
    case 37:
      copyLevel(LevelPlan37,arr); break;
    case 38:
      copyLevel(LevelPlan38,arr); break; 
    case 39:
      copyLevel(LevelPlan39,arr); break;
    case 40:
      copyLevel(LevelPlan40,arr); break;
    case 41:
      copyLevel(LevelPlan41,arr); break;
    case 42:
      copyLevel(LevelPlan42,arr); break;
    case 43:
      copyLevel(LevelPlan43,arr); break;
    case 44:
      copyLevel(LevelPlan44,arr); break;
    case 45:
      copyLevel(LevelPlan45,arr); break;
    case 46:
      copyLevel(LevelPlan46,arr); break;
    case 47:
      copyLevel(LevelPlan47,arr); break;
    case 48:
      copyLevel(LevelPlan48,arr); break; 
    case 49:
      copyLevel(LevelPlan49,arr); break; 
    case 50:
      copyLevel(LevelPlan50,arr); break; 
    case 51:
      copyLevel(LevelPlan51,arr); break;
    case 52:
      copyLevel(LevelPlan52,arr); break;  
    case 53:
      copyLevel(LevelPlan53,arr); break;
    case 54:
      copyLevel(LevelPlan54,arr); break;
    case 55:
      copyLevel(LevelPlan55,arr); break;
    case 56:
      copyLevel(LevelPlan56,arr); break;
    case 57:
      copyLevel(LevelPlan57,arr); break;
    case 58:
      copyLevel(LevelPlan58,arr); break;
    case 59:
      copyLevel(LevelPlan59,arr); break;
    case 60:
      copyLevel(LevelPlan60,arr); break;
    case 61:
      copyLevel(LevelPlan61,arr); break;
    case 62:
      copyLevel(LevelPlan62,arr); break;
    case 63:
      copyLevel(LevelPlan63,arr); break;
    case 64:
      copyLevel(LevelPlan64,arr); break;
    case 65:
      copyLevel(LevelPlan65,arr); break;
    case 66:
      copyLevel(LevelPlan66,arr); break;
    case 67:
      copyLevel(LevelPlan67,arr); break;
    case 68:
      copyLevel(LevelPlan68,arr); break;
    case 69:
      copyLevel(LevelPlan69,arr); break;
    case 70:
      copyLevel(LevelPlan70,arr); break;
    case 71:
      copyLevel(LevelPlan71,arr); break;
    case 72:
      copyLevel(LevelPlan72,arr); break;
    case 73:
      copyLevel(LevelPlan73,arr); break;
    case 74:
      copyLevel(LevelPlan74,arr); break;
    case 75:
      copyLevel(LevelPlan75,arr); break; 
    case 76:
      copyLevel(LevelPlan76,arr); break; 
    case 77:
      copyLevel(LevelPlan77,arr); break; 
    case 78:
      copyLevel(LevelPlan78,arr); break; 
    case 79:
      copyLevel(LevelPlan79,arr); break; 
    case 80:
      copyLevel(LevelPlan80,arr); break; 
    case 81:
      copyLevel(LevelPlan81,arr); break;
    case 82:
      copyLevel(LevelPlan82,arr); break;
    case 83:
      copyLevel(LevelPlan83,arr); break;
    case 84:
      copyLevel(LevelPlan84,arr); break;
    case 85:
      copyLevel(LevelPlan85,arr); break;
    case 86:
      copyLevel(LevelPlan86,arr); break;
    case 87:
      copyLevel(LevelPlan87,arr); break;
    case 88:
      copyLevel(LevelPlan88,arr); break;
    case 89:
      copyLevel(LevelPlan89,arr); break;
    case 90:
      copyLevel(LevelPlan90,arr); break;
    case 91:
      copyLevel(LevelPlan91,arr); break;
    case 92:
      copyLevel(LevelPlan92,arr); break;   
  }
}

void copyLevel(uint8_t arr[114], uint8_t level[114])
{
  for(int i=0;i<114;i++)
      arr[i]=level[i];
}

//24-33
//34-43
//44-53
//54-63
//64-73
//74-83
//84-93
//94-103
//104-113

void openGate()
{
  LevelPlan57[70]=0;
  LevelPlan57[9]=80;
}

void checkSecret(uint8_t displayPlan[114])
{
  switch(displayPlan[23])
  {
    case 16:
      displayPlan[8]=0;
      displayPlan[84]=0;
      displayPlan[85]=0;
      displayPlan[94]=0;
      displayPlan[95]=0;
      break;
    case 17:
      displayPlan[10]=0;
      displayPlan[54]=0;
      displayPlan[55]=0;
      displayPlan[64]=0;
      displayPlan[65]=0;
      break;
    case 32:
      displayPlan[9]=80;
      displayPlan[93]=0;
      displayPlan[103]=0;
      break;
    case 36:
      displayPlan[15]=56;
      displayPlan[21]=20;
      displayPlan[31]=20;
      displayPlan[41]=20;
      displayPlan[51]=20;
      displayPlan[61]=20;
      displayPlan[71]=20;
      break;
    case 39:
      displayPlan[10]=0;
      displayPlan[54]=0;
      displayPlan[55]=0;
      displayPlan[64]=0;
      displayPlan[65]=0;
      break;
    case 47:
      displayPlan[17]=56;
      displayPlan[111]=20;
      break;
    case 53:
      displayPlan[16]=16;
      displayPlan[26]=20;
      displayPlan[36]=20;
      break;
    case 61:
      displayPlan[12]=0;
      displayPlan[24]=0;
      displayPlan[34]=0;
      break;
    case 68:
      displayPlan[10]=0;
      displayPlan[54]=0;
      displayPlan[64]=0;
      break;
    case 75:
      displayPlan[10]=0;
      displayPlan[54]=0;
      displayPlan[64]=0;
      break;
    case 83:
      displayPlan[9]=80;
      displayPlan[98]=0;
      break;
    case 87:
      displayPlan[12]=0;
      displayPlan[44]=17;
      break;
    case 92:
      displayPlan[11]=80;
      displayPlan[83]=17;
      break;
  }
  displayPlan[23]=0;
}

void renewMonsters()
{
  LevelPlan1[7]=16;
  LevelPlan2[7]=16;
  LevelPlan3[7]=16;
  LevelPlan4[7]=16;
  LevelPlan5[7]=16;
  LevelPlan6[7]=16;
  LevelPlan7[7]=16;
  LevelPlan8[7]=16;
  LevelPlan9[7]=16;
  LevelPlan10[7]=16;
  LevelPlan11[7]=16;
  LevelPlan12[7]=16;
  LevelPlan13[7]=16;
  LevelPlan14[7]=16;
  LevelPlan15[7]=16;
  
  LevelPlan18[7]=16;
  LevelPlan19[7]=16;
  LevelPlan20[7]=16;
  LevelPlan21[7]=16;
  LevelPlan22[7]=16;
  LevelPlan23[7]=16;
  LevelPlan24[7]=16;
  LevelPlan25[7]=16;
  LevelPlan26[7]=16;
  LevelPlan27[7]=16;
  LevelPlan28[7]=16;
  LevelPlan29[7]=16;
  LevelPlan30[7]=16;
  LevelPlan31[7]=16;
  
  LevelPlan33[7]=16;
  LevelPlan34[7]=16;
  LevelPlan35[7]=16;
  
  LevelPlan37[7]=16;
  LevelPlan38[7]=16;

  LevelPlan40[7]=16;
  LevelPlan41[7]=16;
  LevelPlan42[7]=16;
  LevelPlan43[7]=16;
  LevelPlan44[7]=16;
  LevelPlan45[7]=16;
  LevelPlan46[7]=16;
  
  LevelPlan48[7]=16;
  LevelPlan49[7]=16;
  LevelPlan50[7]=16;
  LevelPlan51[7]=16;
  LevelPlan52[7]=16;

  LevelPlan54[7]=16; 
  LevelPlan55[7]=16;
  LevelPlan56[7]=16;

  LevelPlan58[7]=16;
  LevelPlan59[7]=16;
  LevelPlan60[7]=16;

  LevelPlan62[7]=16;
  LevelPlan63[7]=16;
  LevelPlan64[7]=16;
  LevelPlan65[7]=16;
  LevelPlan66[7]=16;
  LevelPlan67[7]=16;

  LevelPlan69[7]=16;
  LevelPlan70[7]=16;
  LevelPlan71[7]=16;
  LevelPlan72[7]=16;
  LevelPlan73[7]=16;
  LevelPlan74[7]=16;
  LevelPlan76[7]=16;
  LevelPlan77[7]=16;
  LevelPlan78[7]=16;
  LevelPlan79[7]=16;
  LevelPlan80[7]=16;
  LevelPlan81[7]=16;
  LevelPlan82[7]=16;
  
  LevelPlan84[7]=16;
  LevelPlan85[7]=16;
  LevelPlan86[7]=16;
  LevelPlan88[7]=16;
  LevelPlan89[7]=16;
  LevelPlan90[7]=16;
  LevelPlan91[7]=16;
}

//32 CupUp
//33 CupBase

void renewCups()
{
  setCup(LevelPlan1,91);
  setCup(LevelPlan2,87);
  setCup(LevelPlan7,86);
  setCup(LevelPlan10,61);
  setCup(LevelPlan10,91);
  setCup(LevelPlan11,31);
  setCup(LevelPlan16,86);
  setCup(LevelPlan14,86);
  setCup(LevelPlan17,87);
  setCup(LevelPlan20,62);
  setCup(LevelPlan22,56);
  setCup(LevelPlan24,59);
  setCup(LevelPlan25,58);
  setCup(LevelPlan28,86);
  setCup(LevelPlan32,87);
  setCup(LevelPlan32,90);
  setCup(LevelPlan34,60);
  setCup(LevelPlan36,55);
  setCup(LevelPlan39,27);
  setCup(LevelPlan39,87);
  setCup(LevelPlan40,58);
  setCup(LevelPlan56,31);
  setCup(LevelPlan44,90);
  setCup(LevelPlan46,30);
  setCup(LevelPlan47,58);
  setCup(LevelPlan49,88);
  setCup(LevelPlan52,30);
  setCup(LevelPlan53,55);
  setCup(LevelPlan60,85);
  setCup(LevelPlan61,89);
  setCup(LevelPlan64,27);
  setCup(LevelPlan68,55);
  setCup(LevelPlan68,57);
  setCup(LevelPlan69,60);
  setCup(LevelPlan74,28);
  setCup(LevelPlan75,86);
  setCup(LevelPlan76,88);
  setCup(LevelPlan79,60);
  setCup(LevelPlan83,30);
  setCup(LevelPlan87,29);
  setCup(LevelPlan92,87);
  setCup(LevelPlan92,89);
}

void setCup(uint8_t displayPlan[114],uint8_t index)
{
  displayPlan[index]=32;
  displayPlan[index+10]=33;
}

//30 DiamondUp
//31 DiamondDown

void renewDiamonds()
{
  setDiamond(LevelPlan1,61);
  setDiamond(LevelPlan4,89);
  setDiamond(LevelPlan15,86);
  setDiamond(LevelPlan19,55);
  setDiamond(LevelPlan22,55);
  setDiamond(LevelPlan24,57);
  setDiamond(LevelPlan25,56);
  setDiamond(LevelPlan31,86);
  setDiamond(LevelPlan34,92);
  setDiamond(LevelPlan34,58);
  setDiamond(LevelPlan35,56);
  setDiamond(LevelPlan44,86);
  setDiamond(LevelPlan48,58);
  setDiamond(LevelPlan50,28);
  setDiamond(LevelPlan52,28);
  setDiamond(LevelPlan54,55);
  setDiamond(LevelPlan55,26);
  setDiamond(LevelPlan59,26);
  setDiamond(LevelPlan62,32);
  setDiamond(LevelPlan64,25);
  setDiamond(LevelPlan70,55);
  setDiamond(LevelPlan72,61);
  setDiamond(LevelPlan72,32);
  setDiamond(LevelPlan71,55);
  setDiamond(LevelPlan78,62);
  setDiamond(LevelPlan79,86);
  setDiamond(LevelPlan84,62);
  setDiamond(LevelPlan86,86);
  setDiamond(LevelPlan88,88);
  setDiamond(LevelPlan89,86);
  setDiamond(LevelPlan91,60);
}

void setDiamond(uint8_t displayPlan[114],uint8_t index)
{
  displayPlan[index]=30;
  displayPlan[index+10]=31;
}

//34 PowerUp
//35 PowerBase

void renewPowers()
{
  setPower(LevelPlan12,55);
  setPower(LevelPlan16,88);
  setPower(LevelPlan17,89);
  setPower(LevelPlan26,91);
  setPower(LevelPlan31,87);
  setPower(LevelPlan36,57);
  setPower(LevelPlan38,61);
  setPower(LevelPlan46,59);
  setPower(LevelPlan47,59);
  setPower(LevelPlan53,57);
  setPower(LevelPlan56,59);
  setPower(LevelPlan59,28);
  setPower(LevelPlan61,56);
  setPower(LevelPlan87,27);
  setPower(LevelPlan70,56);
  setPower(LevelPlan75,87);
  setPower(LevelPlan76,31);
  setPower(LevelPlan83,32); 
  setPower(LevelPlan85,61);
}

void setPower(uint8_t displayPlan[114],uint8_t index)
{
  displayPlan[index]=34;
  displayPlan[index+10]=35;
}

void sealSecrets()
{
  LevelPlan6[8]=16;
  LevelPlan6[23]=16;
  LevelPlan6[94]=1;
  LevelPlan6[95]=1;
  LevelPlan6[84]=1;
  LevelPlan6[85]=1;

  LevelPlan13[10]=16;
  LevelPlan13[23]=17;
  LevelPlan13[54]=1;
  LevelPlan13[55]=1;
  LevelPlan13[64]=1;
  LevelPlan13[65]=1;
  LevelPlan13[93]=1;
  LevelPlan13[103]=1;
  
  LevelPlan26[15]=88;
  LevelPlan26[23]=36;
  LevelPlan26[31]=1;
  LevelPlan26[41]=1;
  LevelPlan26[51]=1;
  LevelPlan26[61]=0;
  LevelPlan26[71]=0;

  LevelPlan30[9]=72;
  LevelPlan30[23]=32;
  LevelPlan30[93]=1;
  LevelPlan30[103]=1;
  
  LevelPlan38[10]=32;
  LevelPlan38[23]=39;
  LevelPlan38[54]=1;
  LevelPlan38[55]=1;
  LevelPlan38[64]=1;
  LevelPlan38[65]=1;

  LevelPlan46[17]=88;
  LevelPlan46[23]=47;
  LevelPlan46[111]=2;

  LevelPlan50[16]=88;
  LevelPlan50[23]=53;
  LevelPlan50[26]=0;
  LevelPlan50[36]=0;
  
  LevelPlan60[12]=8;
  LevelPlan60[24]=5;
  LevelPlan60[34]=6;
  LevelPlan60[23]=61;

  LevelPlan67[10]=8;
  LevelPlan67[54]=5;
  LevelPlan67[64]=5;
  LevelPlan67[23]=68;

  LevelPlan74[10]=8;
  LevelPlan74[54]=6;
  LevelPlan74[64]=5;
  LevelPlan74[23]=75;

  LevelPlan82[9]=32;
  LevelPlan82[98]=5;
  LevelPlan82[23]=83;

  LevelPlan88[12]=8;
  LevelPlan88[44]=0;
  LevelPlan88[23]=87;

  LevelPlan91[11]=72;
  LevelPlan91[83]=0;
  LevelPlan91[23]=92;

  //seal gate
  LevelPlan57[70]=7;
  LevelPlan57[9]=48;
}

