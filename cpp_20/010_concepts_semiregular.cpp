#include <concepts>
#include <iostream>
 
template<std::semiregular T>
struct Single {
    T value;
};
 
int main()
{
    Single<int> myInt1{4};
    Single<int> myInt2;
    myInt2 = myInt1;
 
    std::cout << myInt1.value << ' ' << myInt2.value << '\n';
}
