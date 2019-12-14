
#include <dirent.h>
#include <stdio.h>
#include <string.h>


void *e;

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
      count++;
    }

    closedir(d);
  }

  while( count > 0 )
  {
     //printf("%s/%s\r\n",getenv("PWD"),name[index]);
      index++;
      count--;
  }
//files= (char    *)malloc(sizeof(name));

//memcpy((char*)&files,(char *)&name,sizeof(name));
e=(char*) &name;
return (void *)name;

};
int main(void)
{/*
	char *c2=".";
 char v [256][256] ;
printf("...%s",v[1]);
*/
int c;
 	char *c2=".";
 	void *v;
 	
v=(void*) dirl(c2);
 printf("void=%s\r\n",(char*)e);
  int t=0;   
x:
c=getchar();//also reads buffered las key content ..
printf(" your choice is: %i ",c);
printf("void=%s\r\n",(char*)(e+t));
 t=t+1;
//printf(" sizeof: %i \r\n",sizeof(&v));
//printf(" sitrlen: %s\r\n",((char*)&v[1]));

goto x;
  return 'c';
};