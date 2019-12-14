//#define F="filesystemoperations"
#include <dirent.h>
#include <stdio.h>
#include <string.h>
#include <deque>
#include <stdlib.h>
#include <fstream>
#include <string>

std::string read_file_line(char *f) 
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

void *e;
std::deque <char*>q;



 char *rf10(char *file){
FILE* fp=fopen(file,"rb");
char *b;
b=new char(13);
fread(b,1,10,fp);
fclose(fp);
//printf("log:[%s]",b);
return b;
};

void * dirl(char *loc){

char name[256][256];
char **c;



  DIR           *d;
  struct dirent *dir;
  int count = 0;
  int index = 0;
  d = opendir(".");
  if (d)
  {
    while ((dir = readdir(d)) != NULL)
    {
 //     printf("%s\n", dir->d_name);
      strcpy(name[count],dir->d_name);
     q.push_back(name[count]);
       count++;
    }

    closedir(d);
  }
/*
  while( count > 0 )
  {
     //printf("%s/%s\r\n",getenv("PWD"),name[index]);
      index++;
      count--;
  }*/
//files= (char    *)malloc(sizeof(name));

//memcpy((char*)&files,(char *)&name,sizeof(name));
return 0;

};

int print_deque(std::deque <char*>x){
int s=x.size();	
for (int t=0;t<s;t=t+1){
	printf("void=%s index=%i %s \r\n",(char*)x[t],t, read_file_line(x[t]).c_str());

//char cmd[400];	//sprintf(cmd,"..->%s=[%s]",x[t],rf(x[t]));
//	system(cmd);966
};	
	return 0;};
int main(void)
{
	char v1[200]=".";
// dirl(v1);
 //printf("v=%i\r\n",q.size());
  int t=0;   
char c;
//print_deque(q);
x:
c=getchar();//also reads buffered las key content ..
//printf("choice is=%i asii_code= [->%c<-]",c,c);
//printf("file=%s index=%i ..%s\r\n",(char*)q[t],t ,r2(q[t]).c_str());
 t=t+1;
goto x;
  return 'c';
};