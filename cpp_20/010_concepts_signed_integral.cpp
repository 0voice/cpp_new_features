#include <concepts>
#include <iostream>
 
void print(std::signed_integral auto i) {
    std::cout << "Signed integral: " << i << '\n';
}
 
void print(std::unsigned_integral auto u) {
    std::cout << "Unsigned integral: " << u << '\n';
}
 
void print(auto x) {
    std::cout << "Non-integral: " << x << '\n';
}
 
int main() {
    print(42);     // signed
    print(0xFull); // unsigned
    print(true);   // unsigned
    print('A');    // platform-dependent
    print(4e-2);   // non-integral (hex-float)
    print("∫∫∫");  // non-integral
}
