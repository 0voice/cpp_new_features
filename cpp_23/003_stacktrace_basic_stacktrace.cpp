#include <stacktrace>
#include <iostream>
 
int main()
{
    std::cout << std::boolalpha;
    std::stacktrace bktr;
    std::cout << "Initially, bktr.empty(): " << bktr.empty() << '\n';
 
    bktr = std::stacktrace::current();
    std::cout << "After getting entries, bktr.empty(): " << bktr.empty() << '\n';
}
