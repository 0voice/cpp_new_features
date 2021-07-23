#include <iostream>
#include <memory>
 
struct S {
    int x;
    float y;
    double z;
 
    S(int x, float y, double z) : x{x}, y{y}, z{z} { std::cout << "S::S();\n"; }
 
    ~S() { std::cout << "S::~S();\n"; }
 
    void print() const {
        std::cout << "S { x=" << x << "; y=" << y << "; z=" << z << "; };\n";
    }
};
 
int main()
{
    alignas(S) unsigned char buf[sizeof(S)];
 
    S* ptr = std::ranges::construct_at(reinterpret_cast<S*>(buf), 42, 2.71828f, 3.1415);
    ptr->print();
 
    std::ranges::destroy_at(ptr);
}
