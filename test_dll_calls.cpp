 #include <stdlib.h> 
#include <stdio.h>
 #include <dlfcn.h>
 
   typedef void (*v)(char *);
//  v f=(v)dlsym(handle, "now"); 
 v loadfunct(char *dll,char *function){  
 void *handle;
 handle = dlopen (dll, RTLD_LAZY); 
   if (!handle) { fputs (dlerror(), stderr); 
   printf("error loading dll");
   exit(1); } ;
   
   
  return (v)dlsym(handle, function); 
 };
 
 
  int main(int argc, char **argv) { 
  void *handle;
   int (*cosine)(char *,char *); 
   char *error; 
   handle = dlopen ("/sdcard/lib/td.so", RTLD_LAZY); 
   if (!handle) { fputs (dlerror(), stderr); 
   exit(1); } 
   
   typedef char* (*v)();
  v f=(v)dlsym(handle, "now"); 
 //printf("%s",f());
  
  
v x=(v) loadfunct("./td.so","now"); 
 printf("%s",x());


// void * loadfx(char *dll,char * fx){
 
//  void *handle; 
  // char *error; 
  // handle = dlopen (dll, RTLD_LAZY); -
  // if (!handle) { fputs (dlerror(), stderr); 
  
  // exit(1); } 
// };
 //typedef void (*v)(char * ,char *);
//  v f=dlsym(handle, fx); 
  
//  handle ("hello world","/sdcard/lib/test2.txt");
  // v("hello","/sdcard/lib/test.txt");
 }; 