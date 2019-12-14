#include <SDL.h>
#include <stdio.h>


class sdla{



};

typedef struct sdl_cpl{

		//The window we'll be rendering to
	SDL_Window* window = NULL;
	
	//The surface contained by the window
	SDL_Surface* screenSurface = NULL;

};



int init_sdl(sdl_cpl * ss	){
//Screen dimension constants
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;



	//Initialize SDL
	if( SDL_Init( SDL_INIT_VIDEO ) < 0 )
	{

		printf( "SDL could not initialize! SDL_Error: %s\n", SDL_GetError() );
	}
	else
	{
		//Create window
		ss->window = SDL_CreateWindow( "SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN );
		if( ss->window == NULL )
		{
			printf( "Window could not be created! SDL_Error: %s\n", SDL_GetError() );
		}
		else
		{
		//int i=0;
		
//a:			//Get window surface
			ss->screenSurface = SDL_GetWindowSurface( ss->window );

			//Fill the surface white
//			i++;
//			SDL_FillRect( ss.screenSurface, NULL, SDL_MapRGB( ss.screenSurface->format, 0xFF, 0xFF, sin(i/10.0)*255.0 ) );
			
			//Update the surface
	//		SDL_UpdateWindowSurface( ss.window );	
//		SDL_Delay( 200 );
	
//goto a;
			//Wait two seconds
		}
	}

	//Destroy window
//	SDL_DestroyWindow( window );

	//Quit SDL subsystems
//	SDL_Quit();



};