#include <cstddef> // for std::byte
 
std::byte b1{0x3F};
std::byte b2{0b1111'0000};
std::byte b4[4] {b1, b2, std::byte{1}}; // 4 bytes (last is 0)
 
if (b1 == b4[0]) 
{
    b1 <<= 1;
}
 
std::cout << std::to_integer<int>(b1) << '\n'; // outputs: \T{126}
