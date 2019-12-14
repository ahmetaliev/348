#define info "ncurses gui 2"
#include <ncurses.h>
#include <math.h>

int main()
{
	initscr();
//	printw("Hello, world!");
//	getch();
	//printw("Hello, world! ",x);
    start_color();  
 int x=1;
 int y=1;
char d[100],c;


a:

//x=sin(8)*10;
	

int col,row;

            	init_pair(1, COLOR_WHITE,   COLOR_RED);
            	init_pair(2,COLOR_RED, COLOR_WHITE);

  color_set(1, NULL);
getmaxyx(stdscr,row,col);
sprintf(d,"info: %i %i",y,x,d);
mvaddstr(y,x, d);
sprintf(d,"max's : %i %i",row,col);
color_set(2, NULL);
mvaddstr(y+1,x ,d);
c=getch();
refresh();
if( c=='a')x=x-1;
if(c=='d')x=x+1;

if( c=='s')y=y+1;
if(c=='w')y=y-1;
goto a;
//	endwin();
	return 0;
}