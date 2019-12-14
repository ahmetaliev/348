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
 int SCREEN_WIDTH = 640;
 int SCREEN_HEIGHT = 480;



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


#include <SDL.h>

int main_(int argc, char *argv[]) {
    int gogogo = 1;
    SDL_Event event;

    SDL_Init(SDL_INIT_EVERYTHING);
    //SDL_WM_SetCaption("Hello World! :D", NULL);
 //   SDL_SetVideoMode(800, 600, 32, SDL_HWSURFACE);
SDL_Window* window = NULL;
	 int SCREEN_WIDTH = 320;
 int SCREEN_HEIGHT = 240;

window = SDL_CreateWindow( "SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN );
		
    while (gogogo) {
        SDL_WaitEvent(&event);
        if (event.type == SDL_QUIT)
            gogogo = 0;
    }
    SDL_Quit();
    return 0;
}


//SDL2 flashing random color example
//Should work on iOS/Android/Mac/Windows/Linux

#include <SDL.h>
#include <SDL_opengles2.h>

#include <stdlib.h> //rand()

static bool quitting = false;
static float r = 0.0f;
static SDL_Window *window = NULL;
static SDL_GLContext gl_context;


    void render() {

        SDL_GL_MakeCurrent(window, gl_context);

            r = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);

            glClearColor( r, 0.4f, 0.1f, 1.0f );
            glClear( GL_COLOR_BUFFER_BIT );

        SDL_GL_SwapWindow(window);

    } //render


    int SDLCALL watch(void *userdata, SDL_Event* event) {

        if (event->type == SDL_APP_WILLENTERBACKGROUND) {
            quitting = true;
        }

        return 1;
    }

int main(int argc, char *argv[]) {


    if (SDL_Init(SDL_INIT_VIDEO|SDL_INIT_EVENTS) != 0) {
        SDL_Log("Failed to initialize SDL: %s", SDL_GetError());
        return 1;
    }

    window = SDL_CreateWindow("title", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 512, 512, SDL_WINDOW_OPENGL);

    gl_context = SDL_GL_CreateContext(window);

    SDL_AddEventWatch(watch, NULL);


    while(!quitting) {

        SDL_Event event;
        while( SDL_PollEvent(&event) ) {
            if(event.type == SDL_QUIT) {
                quitting = true;
            }
        }

        render();
        SDL_Delay(2);

    }

    SDL_DelEventWatch(watch, NULL);
    SDL_GL_DeleteContext(gl_context);
    SDL_DestroyWindow(window);
    SDL_Quit();

    exit(0);
}