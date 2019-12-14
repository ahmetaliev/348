#include <SDL.h>
#include <stdio.h>

typedef struct sdl_cpl{

		//The window we'll be rendering to
	SDL_Window* window = NULL;
	
	//The surface contained by the window
	SDL_Surface* screenSurface = NULL;

};