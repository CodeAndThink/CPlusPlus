#include <iostream>
#include <string>
#include <cstring>
 
int main()
{
    std::string s = "Hello World!";
 
    char cstr[s.size() + 1];
    strcpy(cstr, s.c_str());    // or, pass `&s[0]`
 
    std::cout << cstr << std::endl;
 
    return 0;
}

