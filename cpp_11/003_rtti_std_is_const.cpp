#include <iostream>
#include <type_traits>
 
int main() 
{
    std::cout << std::boolalpha
        << std::is_const_v<int> << '\n' // false
        << std::is_const_v<const int> << '\n' // true
        << std::is_const_v<const int*> /*false*/
        << " because the pointer itself can be changed but not the int pointed at\n"
        << std::is_const_v<int* const> /*true*/ 
        << " because the pointer itself can't be changed but the int pointed at can\n"
        << std::is_const_v<const int&> << '\n' // false
        << std::is_const_v<std::remove_reference_t<const int&>> << '\n' // true
        ;
}
