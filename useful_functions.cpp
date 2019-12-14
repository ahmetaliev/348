#include "stdlib.h"
#include "stdio.h"
#include "unistd.h"
#include "iostream"

#include "./time_date.cpp"

int main (){

 char *envr = getenv("PATH");
 printf("%s",envr);
 system("echo this path pwd= $PWD");
char *gcc ="g++ log.cpp -w -o log";
system(gcc);//execute bash script
system("./log \r\n echo what the heck .. 5his is working ?\r\n_--------[]\r\n ls \r\n$PWD");
system("echo executing ls commans on /sdcard/CCtools : \r\nls /sdcard/CCtools/Examples/SDL/draw2/");
int e;
char cmd[900]="/sdcard/CCtools/Examples/SDL/draw2";
e=chdir(cmd);
printf("\r\n%i",e);
system("ls");
system("make");
envr = getenv("CCTOOLSDIR");
std::cout<<"-->"<<envr;

chdir(envr);
//system("grep -r \"getenv\(\" ./");
system("ls -RS $CCTOOLSDIR ");
};