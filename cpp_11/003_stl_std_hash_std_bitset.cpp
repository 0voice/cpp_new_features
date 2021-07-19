#include <bitset>
#include <iostream>
#include <functional>
 
int main()
{
    std::bitset<4> b1{0}, b2{42};
    std::bitset<8> b3{0}, b4{42};
 
    std::hash<std::bitset<4>> hash_fn4;
    std::hash<std::bitset<8>> hash_fn8;
    using bin64 = std::bitset<64>;
 
    std::cout
        << bin64{hash_fn4(b1)} << " = " << hash_fn4(b1) << '\n'
        << bin64{hash_fn4(b2)} << " = " << hash_fn4(b2) << '\n'
        << bin64{hash_fn8(b3)} << " = " << hash_fn8(b3) << '\n'
        << bin64{hash_fn8(b4)} << " = " << hash_fn8(b4) << '\n';
}
