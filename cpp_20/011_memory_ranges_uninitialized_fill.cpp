#include <iostream>
#include <memory>
#include <string>
 
int main()
{
    constexpr int n {4};
    alignas(alignof(std::string)) char out[n * sizeof(std::string)];
 
    try
    {
        auto first {reinterpret_cast<std::string*>(out)};
        auto last {first + n};
        std::ranges::uninitialized_fill(first, last, "▄▀▄▀▄▀▄▀");
 
        int count {1};
        for (auto it {first}; it != last; ++it) {
            std::cout << count++ << ' ' << *it << '\n';
        }
 
        std::ranges::destroy(first, last);
    }
    catch(...)
    {
        std::cout << "Exception!\n";
    }
}
