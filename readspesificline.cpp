#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool isWanted(const std::string & line);

int main()
{
    ifstream fin("Test.txt");
    
    string line;
    while (getline(fin, line))
    {
        if (isWanted(line))
            cout << line << endl;
    }
    
    return 0;
}

bool isWanted(const std::string & line)
{
    // any selection criteria you like
    return (line.find("two") != string::npos);
}