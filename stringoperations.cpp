#define findstrfunctions
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>

char * findin(char *wanted ,char *area){
    char  *substr;
 return   substr = strstr(area, wanted);
//fimd a word in str and print after ...

};
int find_stdlib(std::string area,std::string wanted){

    size_t found = area.find(wanted);
    if(found!=std::string::npos){ 
        std::cout << "first 'two' found at: " << found << '\n';
    };
};

int main() { 
    printf("%s\n",findin("hello","wtf hello world"));
typedef  std::string tds;
    tds str ("There are two needles in this haystack with needles.");
    tds str2 ("two");
   find_stdlib(str,str2);
    return 0;
}
