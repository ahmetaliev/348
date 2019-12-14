
// replacing in a string
#include <iostream>
#include <string>
#include <stdlib.h>
int ReplaceStrings(std::string& subject, const std::string& search,
                          const std::string& replace);
int main ()
{/*
  std::string base="this is a test string.";
  std::string str2="n example";
  std::string str3="sample phrase";
  std::string str4="useful.";

  // replace signatures used in the same order as described above:

  // Using positions:                 0123456789*123456789*12345
  std::string str=base;           // "this is a test string."
  str.replace(9,5,str2);          // "this is an example string." (1)
  str.replace(19,6,str3,7,6);     // "this is an example phrase." (2)
  str.replace(8,10,"just a");     // "this is just a phrase."     (3)
  str.replace(8,6,"a shorty",7);  // "this is a short phrase."    (4)
  str.replace(22,1,3,'!');        // "this is a short phrase!!!"  (5)

  // Using iterators:                                               0123456789*123456789*
  str.replace(str.begin(),str.end()-3,str3);                    // "sample phrase!!!"      (1)
  str.replace(str.begin(),str.begin()+6,"replace");             // "replace phrase!!!"     (3)
  str.replace(str.begin()+8,str.begin()+14,"is coolness",7);    // "replace is cool!!!"    (4)
  str.replace(str.begin()+12,str.end()-4,4,'o');                // "replace is cooool!!!"  (5)
  str.replace(str.begin()+11,str.end(),str4.begin(),str4.end());// "replace is useful."    (6)
*/
 //   std::cout << str << '\n'; 
  std::string input = "abc abc def";
std::cout << "Input string: " << input << std::endl;

ReplaceStrings(input, "bc", "??");
std::cout << "ReplaceStrings() input string modified: "         << input << std::endl;
       
system("echo cwd= $PWD  $(date)" );/*nix spesific shell code */
  return 0;
}

int ReplaceStrings(std::string& subject, const std::string& search,
                          const std::string& replace) {
    size_t pos = 0;
    while ((pos = subject.find(search, pos)) != std::string::npos) {
         subject.replace(pos, search.length(), replace);
         pos += replace.length();
    }

// tests..
          

}


int ReplaceStringOnce(std::string& subject, const std::string& search,
                          const std::string& replace) {
    size_t pos = 0;
    pos = subject.find(search, pos);
         subject.replace(pos, search.length(), replace);
        
    }
