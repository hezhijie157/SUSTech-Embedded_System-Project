#ifndef __GAME_ENGINE_H
#define __GAME_ENGINE_H

#include <stdbool.h>
#include "LinkedList.h"
#include "GameEvent.h"
#include "lcd.h"

#define SELF_LIFE_MAX 100

// Global screen
Color **screen;

/*Global vars*/

unsigned Game_Life;
unsigned Game_KillCount;
unsigned Game_Score;
unsigned Game_BombNum;
unsigned Game_ChapterNum;
bool Game_ChapterPassed;

/*Events*/

GameEvent* Engine_SelfEvent;

LinkedList Engine_EnemyEvents;

LinkedList Engine_BulletEvents;

LinkedList Engine_UIEvents;

int Engine_KeyPressed;

void GameEngineInit();

void GameEngineLoop(void (*OnLoop)(void));

void GameOver();

#endif