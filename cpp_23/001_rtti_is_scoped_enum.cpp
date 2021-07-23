#include <iostream>
#include <type_traits>
 
class A {};
 
enum E {};
 
enum struct Es { oz };
 
enum class Ec : int {};
 
int main() 
{
    std::cout << std::boolalpha;
    std::cout << std::is_scoped_enum_v<A> << '\n';
    std::cout << std::is_scoped_enum_v<E> << '\n';
    std::cout << std::is_scoped_enum_v<Es> << '\n';
    std::cout << std::is_scoped_enum_v<Ec> << '\n';
    std::cout << std::is_scoped_enum_v<int> << '\n';
}
