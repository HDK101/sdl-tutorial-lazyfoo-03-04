#ifndef GAME_H
#define GAME_H

#include <stdio.h>
#include <SDL2/SDL.h>
#include <math.h>
#include "sprites.h";
#include "tilemap.h";
#include "eventChecker.h";
#include "player.h";

void gameStart(void);
void gameEvent(SDL_Event *event);
void gameLoop(void);

#endif
