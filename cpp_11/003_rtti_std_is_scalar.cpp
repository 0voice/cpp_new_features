#include <iostream>
#include <type_traits>
 
int main() {
    class cls {};
    std::cout << (std::is_scalar<int>::value
                     ? "T is a scalar"
                     : "T is not a scalar") << '\n';
    std::cout << (std::is_scalar<cls>::value
                     ? "T is a scalar"
                     : "T is not a scalar") << '\n';
}
