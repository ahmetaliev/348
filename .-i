
#include <dirent.h>
#include <stdio.h>
#include <deque>
#include <stdio.h> /* printf, scanf, NULL */
#include <stdlib.h> /* malloc, free, rand */ 

#define dq std::deque < char *>

extern "C" std::deque <char*> dirl(char *loc ){
std::deque <char*> files;
//char name[256][256];
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
      char *x;
      x=(char*)malloc(strlen( dir->d_name ) );
      sprintf(x,"%s", dir->d_name );
      files.push_back(x);
//printf("-- %s  -- size=%i %s\r\n",files[count],files.size(), dir->d_name );

  //    strcpy(name[count],dir->d_name);
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
  }
*/
return files;

};


extern "C"  void* t(char *v){
system("echo $(date)");
printf("what the ...");
return (void*)55;
};
int main(void)
{
//char v [256][256] ;8
std::deque <char*> b;
b=dirl("./");
int c;
//printf("...%s",v[1]);
t("");
x:
c=getchar();//also reads buffered las key content ..@
printf(" your choice is: %i -- %s  -- size=%i\r\n",c,b[c],b.size());
char ch[400];
printf("eneter integer :\r\n");
scanf("%i",&c);
scanf("%s" ,&ch);
printf("you wrote: str=%s int=%i FILE:%s\r\n",ch,c, b[c]);
if(strstr("quit",ch)){printf("quit command received..\r\n");  goto q; };

goto x;
q:
  return(0);
};