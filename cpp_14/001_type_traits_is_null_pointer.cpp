#include <cstddef>
#include <iostream>
 
void f(int*)
{
   std::cout << "Pointer to integer overload\n";
}
 
void f(double*)
{
   std::cout << "Pointer to double overload\n";
}
 
void f(std::nullptr_t)
{
   std::cout << "null pointer overload\n";
}
 
int main()
{
    int* pi {}; double* pd {};
 
    f(pi);
    f(pd);
    f(nullptr); // would be ambiguous without void f(nullptr_t)
    // f(0);    // ambiguous call: all three functions are candidates
    // f(NULL); // ambiguous if NULL is an integral null pointer constant 
                // (as is the case in most implementations)
}
