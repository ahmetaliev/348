#include "SDL2/SDL.h"
#include "SDL_ttf.h"


int initfont( TTF_Font *font ){
TTF_Init();
char *FONT_FILE="font.ttf";
int ptsize=25;
font = TTF_OpenFont(FONT_FILE, ptsize);

};

SDL_Surface * renderfont(char *string, TTF_Font *font ){
    SDL_Color white = { 0xFF, 0xFF, 0xFF, 0 };
    SDL_Color black = { 0x00, 0x00, 0x00, 0 };


return TTF_RenderText_Solid(font, string, black);
};

