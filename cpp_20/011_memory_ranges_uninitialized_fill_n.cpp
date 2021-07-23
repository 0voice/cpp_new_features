#include <iostream>
#include <memory>
#include <string>
 
int main()
{
    constexpr int n {3};
    alignas(alignof(std::string)) char out[n * sizeof(std::string)];
 
    try
    {
        auto first {reinterpret_cast<std::string*>(out)};
        auto last = std::ranges::uninitialized_fill_n(first, n, "cppreference");
 
        for (auto it {first}; it != last; ++it) {
            std::cout << *it << '\n';
        }
 
        std::ranges::destroy(first, last);
    }
    catch(...)
    {
        std::cout << "Exception!\n";
    }
}
