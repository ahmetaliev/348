#include <fstream>
#include <string>
#include "stdlib.h"
std::string read_line(char *f) 
{ 
    std::ifstream file(f);
    std::string str; 
   std::getline(file, str);
 //printf("----->>>>[%s]<<<<-----\r\n",str.c_str() );
//               while (std::getline(file, str))  {
// Process str //printf("----->>>>[%s]<<<<-----\r\n",str.c_str() );
//    }
return str;
};


#include <stdio.h>
//char buf[500];
char *read_10bytes(char *file){
FILE* fp=fopen(file,"rb");
char * b;
b=new char[10]	;
fread(b,1,10,fp);
fclose(fp);
//printf(">>>>>>[Log:%s]<<<<<<",b);
return b;
};

int main(){
system("date >x");

printf("r2=..[%s]..\r\n",read_line( "/sdcard/cpl/i.txt").c_str());

printf("r2=..[%s]..\r\n",read_line( "/sdcard/cpl/i.txt").c_str());

printf("r1=..[%s]..\r\n",read_10bytes( "x"));
system("chose a file:");
//system("ls ");
char ch[500];
r:
scanf("%s",&ch);
printf("your chosen file=%s\r\n",ch);
printf("file contents=%s\r\n",read_10bytes(ch));
goto r;
};