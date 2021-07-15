#include <iostream>
#include <type_traits>
 
int main() {
    class cls {};
    std::cout << (std::is_member_pointer<int(cls::*)>::value
                     ? "T is member pointer"
                     : "T is not a member pointer") << '\n';
    std::cout << (std::is_member_pointer<int>::value
                     ? "T is member pointer"
                     : "T is not a member pointer") << '\n';
}
