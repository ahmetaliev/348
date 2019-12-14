#include "SDL2/SDL.h"

SDL_Window *window;
SDL_Renderer *renderer;
int done;

void
DrawChessBoard(SDL_Renderer * renderer)
{
    int row = 0,column = 0,x = 0;
    SDL_Rect rect, darea;
SDL_RenderClear(renderer);
    /* Get the Size of drawing surface */
    SDL_RenderGetViewport(renderer, &darea);

    SDL_Point p;

Uint32 sg;
SDL_Delay(40);
sg=   SDL_GetMouseState(&p.x,&p.y );
            rect.w = 0;
            rect.h = 0;
            rect.x = rect.w;
            rect.y =  rect.h;
            SDL_SetRenderDrawColor(renderer, 0xff, 0xff, 0, 0xFF);
            SDL_RenderFillRect(renderer, &rect);


    for ( ; row < 8; row++) {
        column = row%2;
        x = column;
        for ( ; column < 4+(row%2); column++) {





            rect.w = darea.w/8;
            rect.h = darea.h/8;
            rect.x = x * rect.w;
            rect.y = row * rect.h;
            x = x + 2;
 SDL_SetRenderDrawColor(renderer, 0xff, 0xff, 0, 0xFF);

            SDL_RenderFillRect(renderer, &rect);


        }
    }


            rect.w = darea.w/8;
            rect.h = darea.h/8;
            rect.x =   p.x - (rect.w/2);
            rect.y =   p.y- (rect.h/2);
//            x = x + 1;
#define BYTE_TO_BINARY_PATTERN "%c%c%c%c%c%c%c%c"
#define BYTE_TO_BINARY(byte)  \
  (byte & 0x80 ? '1' : '0'), \
  (byte & 0x40 ? '1' : '0'), \
  (byte & 0x20 ? '1' : '0'), \
  (byte & 0x10 ? '1' : '0'), \
  (byte & 0x08 ? '1' : '0'), \
  (byte & 0x04 ? '1' : '0'), \
  (byte & 0x02 ? '1' : '0'), \
  (byte & 0x01 ? '1' : '0')
screen_detect:
int a,b;
a=p.x/(rect.w );
b=p.y/(rect.h );

printf("%d %i  %i\r\n",  a ,b,sg);
printf("Leading text "BYTE_TO_BINARY_PATTERN, BYTE_TO_BINARY(sg));
SDL_Rect r;

r.w = darea.w/8;
r.h = darea.h/8;
r.x=a*darea.w/8;
r.y=b*darea.h/8;
SDL_SetRenderDrawColor(renderer, 0xff, 0xff, 0xff, 0xFF);
SDL_RenderFillRect(renderer, &r);


 //if(SDL_PointInRect(&p,&rect ) ){
 SDL_SetRenderDrawColor(renderer, 0xff, 0, 0, 0xFF);
     //       SDL_RenderFillRect(renderer, &rect);








}

void
loop()
{
    SDL_Event e;
    while (SDL_PollEvent(&e)) {
        if (e.type == SDL_QUIT) {
            done = 1;
            return;
        }

printf("SDL BUTTON_LEFT %i\r\n" , e.button.type);

        if ((e.type == SDL_KEYDOWN) && (e.key.keysym.sym == SDLK_ESCAPE)) {
            done = 1;
            return;
        }
    }

    DrawChessBoard(renderer);

    /* Got everything on rendering surface,
       now Update the drawing image on window screen */
    SDL_UpdateWindowSurface(window);
}

int
main(int argc, char *argv[])
{
    SDL_Surface *surface;

    /* Enable standard application logging */
    SDL_LogSetPriority(SDL_LOG_CATEGORY_APPLICATION, SDL_LOG_PRIORITY_INFO);

    /* Initialize SDL */
    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "SDL_Init fail : %s\n", SDL_GetError());
        return 1;
    }

    /* Create window and renderer for given surface */
    window = SDL_CreateWindow("Chess Board", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, 0);
    if (!window) {
        SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "Window creation fail : %s\n",SDL_GetError());
        return 1;
    }
    surface = SDL_GetWindowSurface(window);
    renderer = SDL_CreateSoftwareRenderer(surface);
    if (!renderer) {
        SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "Render creation for surface fail : %s\n",SDL_GetError());
        return 1;
    }

    /* Clear the rendering surface with the specified color */
    SDL_SetRenderDrawColor(renderer, 0xff, 0xff, 0, 0xFF);
    SDL_RenderClear(renderer);

    /* Draw the Image on rendering surface */
    done = 0;

    while (!done) {
        loop();
    }

    SDL_Quit();
    return 0;
}
/* Initialize SDL */
   
   