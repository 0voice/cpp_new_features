#include <array>
#include <cassert>
#include <cstddef>
#include <iostream>
#include <span>
#include <string_view>
#include <vector>
 
int main()
{
    auto print = [](std::string_view const name, std::size_t ex) {
        std::cout << name << ", ";
        if (ex == std::dynamic_extent) {
            std::cout << "dynamic extent\n";
        } else {
            std::cout << "static extent = " << ex << '\n';
        }
    };
 
    int a[]{1,2,3,4,5};
 
    std::span span1{a};
    print("span1", span1.extent);
 
    std::span<int, std::dynamic_extent> span2{a};
    print("span2", span2.extent);
 
    std::array ar{1,2,3,4,5};
    std::span span3{ar};
    print("span3", span3.extent);
 
    std::vector v{1,2,3,4,5};
    std::span span4{v};
    print("span4", span4.extent);
}
