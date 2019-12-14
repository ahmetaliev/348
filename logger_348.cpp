
#include <stdio.h>
#include <dirent.h>
#include <stdio.h>
#include <string.h>
#include <deque>
#include <stdlib.h>
#include <fstream>
#include <string>
// extern "C"  export function fol dll style dynloading 
extern "C" std::string r2(char *f) 
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

extern "C" void log(char* str){
					FILE* fp = fopen("log.txt", "a+");
					fprintf(fp, "%s\n", str);
					fclose(fp);
					printf("executed function is log1");		
					}// End of debug

extern "C" void logf(char *fle,char* str){
					FILE* fp = fopen(fle, "a+");
					fprintf(fp, "%s\n", str);
					fclose(fp);
					 printf("executed function is logf (log2)");		
					}// End of debug


int main(){
log("default log file mode\r\n");
logf("Log.txt","HELLO WORLD ..\r\n");
logf("ttf.ini","/system/fonts/DroidSans.ttf");
printf("read font fi;e from file=%s \r\n",r2("ttf.ini").c_str());
char cmd[200];
sprintf(cmd,"ls -s %s ",r2("ttf.ini").c_str());
system(cmd);
};
