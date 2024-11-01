#pragma once

#include <SDL.h>

// some switch buttons
#define JOY_A 0
#define JOY_B 1
#define JOY_X 2
#define JOY_Y 3
#define JOY_PLUS 10
#define JOY_MINUS 11
#define JOY_LEFT 12
#define JOY_UP 13
#define JOY_RIGHT 14
#define JOY_DOWN 15

const int SCREEN_WIDTH = 960;
const int SCREEN_HEIGHT = 544;

int startSDL(SDL_Window *window, SDL_Renderer *renderer);