 #include <stdlib.h> 
#include <stdio.h>
 #include <dlfcn.h>
 #include <dlfcn.h>
#include <deque>

 //debyg.cpp


  int main(int argc, char **argv) { 
  void *handle;
   
   char *error; 
   handle = dlopen ("./dll", RTLD_LAZY); 
   if (!handle) { fputs (dlerror(), stderr); 
   exit(1); } 
   
   typedef void* (*v)(char * );;
  v f=(v)dlsym(handle, "t"); 
//  handle ("hello world","/sdcard/lib/test2.txt");
printf ("%s..",v("2"));
//  x= f("./");
 //printf("%i",x.size());
 
 }; 