#include <iostream>
#include <memory>
#include <string>
 
int main()
{
    struct S { std::string m{ "Default value" }; };
 
    constexpr int n {3};
    alignas(alignof(S)) unsigned char mem[n * sizeof(S)];
 
    try
    {
        auto first {reinterpret_cast<S*>(mem)};
        auto last = std::uninitialized_value_construct_n(first, n);
 
        for (auto it {first}; it != last; ++it) {
            std::cout << it->m << '\n';
        }
 
        std::destroy(first, last);
    }
    catch(...)
    {
        std::cout << "Exception!\n";
    }
 
    // Notice that for "trivial types" the uninitialized_value_construct_n
    // zero-initializes the given uninitialized memory area.
    int v[] { 1, 2, 3, 4 };
    for (const int i : v) { std::cout << i << ' '; }
    std::cout << '\n';
    std::uninitialized_value_construct_n(std::begin(v), std::size(v));
    for (const int i : v) { std::cout << i << ' '; }
    std::cout << '\n';
}
