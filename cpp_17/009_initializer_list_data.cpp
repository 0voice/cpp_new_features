#include <string>
#include <cstring>
#include <iostream>
 
int main()
{
    std::string s {"Hello world!\n"};
 
    char a[20]; // storage for a C-style string
    std::strcpy(a, std::data(s));
    // [s.data(), s.data() + s.size()] is guaranteed to be an NTBS since C++11
 
    std::cout << a;
}
