#include <algorithm>
#include <iostream>
 
int main()
{
    int a = 5, b = 3;
 
    // before
    std::cout << a << ' ' << b << '\n';
 
    std::swap(a,b);
 
    // after
    std::cout << a << ' ' << b << '\n';
}
