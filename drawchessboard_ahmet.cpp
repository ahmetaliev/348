/*
   Copyright (C) 1997-2013 Sam Lantinga <slouken@libsdl.org>

   This software is provided 'as-is', without any express or implied
   warranty.  In no event will the authors be held liable for any damages
   arising from the use of this software.

   Permission is granted to anyone to use this software for any purpose,
   including commercial applications, and to alter it and redistribute it
   freely.

   This file is created by : Nitin Jain (nitin.j4@samsung.com)
*/

/* Sample program:  Draw a Chess Board  by using SDL_CreateSoftwareRenderer API */

#include <stdlib.h>
#include <stdio.h>
#include <SDL.h>
#include <SDL_ttf.h>
#include "sdl_tools.c"
#include "time_ahmet.cpp"
class sdl_gui_text{

public :
    SDL_Window *window;
    SDL_Surface *surface;
    SDL_Renderer *renderer;
    SDL_DisplayMode mode;

      SDL_Color foregroundColor= {205,205,0};
    SDL_Color backgroundColor= {0,25,0};
       char *text_buffer="hello";
     SDL_Rect textLocation= {100,100,0,0};

    
    
int error(){};
int draw(){

if(surface==NULL){ /*erroor ..!*/};
text_buffer=(char *)malloc(500);
    sprintf(text_buffer,"%s", now());
    SDL_Delay(300);// slow down to 2.2 fps
     TTF_Init();
    char fnt[800];
    //fnt= (char*)malloc(  1040 );
    sprintf ( fnt ,"%s%s", getenv("PWD") ,"0.ttf");
    TTF_Font* font=TTF_OpenFont("/sdcard/cpl/font.ttf",30);
    printf( " %s", fnt );

    SDL_Surface* textSurface=TTF_RenderText_Shaded(font,text_buffer,foregroundColor, backgroundColor);
     SDL_BlitSurface(textSurface,NULL, surface ,&textLocation);


};
}t;

class sdl_gui_bitmap{

public :
  SDL_Surface* bitmap_surface;

    SDL_Window *window;
    SDL_Surface *surface;
    SDL_Renderer *renderer;
    SDL_DisplayMode mode;
SDL_Rect destination={	1,100,100,100};
SDL_Rect source={	1,1,400,400};

      SDL_Color foregroundColor= {205,205,0};
    SDL_Color backgroundColor= {0,25,0};
 
     SDL_Rect textLocation= {100,100,0,0};

    char *bmp_location="/sdcard/hello_world.bmp";
    
int error(){};
int draw(){
    bitmap_surface=SDL_LoadBMP(bmp_location);
        draw_bmp();


};

int draw_bmp(  ){

	 	 // Part of the bitmap that we want to draw
/*
*/
		 	 SDL_BlitSurface(bitmap_surface,&source,surface,&destination);
};
SDL_Surface* ahmet_load_bmp(char *file){
return	  SDL_LoadBMP(file);
	
};
}b;


class sdl_home{
public :
	
    SDL_Window *window;
    SDL_Surface *surface;
    SDL_Renderer *renderer;
    SDL_DisplayMode mode;
int init (){
    /* Enable standard application logging */
    SDL_LogSetPriority(SDL_LOG_CATEGORY_APPLICATION, SDL_LOG_PRIORITY_INFO);

    /* Initialize SDL */
    if(SDL_Init(SDL_INIT_VIDEO) != 0)
    {
        SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "SDL_Init fail : %s\n", SDL_GetError());
        return 1;
    }

    SDL_GetDesktopDisplayMode(0, &mode);

    /* Create window and renderer for given surface */
    window = SDL_CreateWindow("Chess Board", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, mode.w, mode.h, SDL_WINDOW_SHOWN);
    if(!window)
    {
        SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "Window creation fail : %s\n",SDL_GetError());

        return 1;
    }
    surface = SDL_GetWindowSurface(window);
    renderer = SDL_CreateSoftwareRenderer(surface);
    if(!renderer)
    {
        SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "Render creation for surface fail : %s\n",SDL_GetError());
        return 1;
    }

    /* Clear the rendering surface with the specified color */
    SDL_SetRenderDrawColor(renderer, 0xFF, 0xFF, 0xFF, 0);
    SDL_RenderClear(renderer);


    /* Draw the Image on rendering surface */
    //char ch[100];
    //sprintf( ch ,"\r\n%s %s\r\n",SDL_GetError(), fnt );
    //SDL_setenv("","");
    //SDL_Log(ch);
    //  system("echo this is it CD=$CD cd=$cd PWD=$PWD pwd=$pwd");
    SDL_Delay(10);
}
} sdl;
int
main(int argc, char *argv[])
{


sdl.init();
    while(1)
    {
        SDL_Event e;
        if (SDL_PollEvent(&e))
        {
            if (e.type == SDL_QUIT)



                break;
            if (e.key.keysym.sym == SDLK_ESCAPE)
                break;
            if (e.key.keysym.scancode == SDL_SCANCODE_AC_BACK)
                break;
        }

//	printf("SDL_FINGERMOTION =%x  SDL_FINGERDOWN=%x SDL_FINGERUP=%x e.tfinger.type=%x key=%x\r\n"
//	, SDL_FINGERMOTION ,SDL_FINGERDOWN,SDL_FINGERUP,  e.tfinger.type ,e.key.type  );

        DrawChessBoard(sdl.renderer);
        draw_line_ahmet(sdl.renderer);

  b.destination.x=400;
   
   b.surface=sdl.surface;
   b.draw();
      
        //	 	 SDL_FillRect( surface ,NULL,SDL_MapRGB( surface->format,0,0,0));
   
   t.surface=sdl.surface;
   t.draw();
        //	 	 SDL_Flip(screen);

        /* Got everything on rendering surface,
           now Update the drawing image on window screen */
        SDL_UpdateWindowSurface(sdl.window);

    }

    return 0;
}