#include <iostream>
#include <type_traits>
 
int main() {
    class cls {};
    std::cout << (std::is_member_object_pointer<int(cls::*)>::value
                     ? "T is member object pointer"
                     : "T is not a member object pointer") << '\n';
    std::cout << (std::is_member_object_pointer<int(cls::*)()>::value
                     ? "T is member object pointer"
                     : "T is not a member object pointer") << '\n';
}
