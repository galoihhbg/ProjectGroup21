#ifndef COMMON_FUNCTION_H_
#define COMMON_FUNCTION_H_

#include <Windows.h>
#include <string>
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <math.h>

static SDL_Window* g_window = NULL;
static SDL_Renderer* g_screen = NULL;
static SDL_Event g_event;

// Screen
const int FRAME_PER_SECOND = 25; //FPS
const int SCREEN_WIDTH = 1472;
const int SCREEN_HEIGHT = 768;
const int SCREEN_BPP = 32;

const int COLOR_KEY_R = 167;
const int COLOR_KEY_G = 175;
const int COLOR_KEY_B = 180;

#define GRASS_TILE 1
#define TILE_SIZE  64
#define MAX_MAP_X  23
#define MAX_MAP_Y  12

struct Input
{
	int left_;
	int right_;
	int up_;
	int down_;
};

struct Map
{
	int start_x_;
	int start_y_;

	int max_x_;
	int max_y_;

	int tile[MAX_MAP_Y][MAX_MAP_X];

	char* file_name_;
};

#endif // !COMMON_FUNCTION_H_
