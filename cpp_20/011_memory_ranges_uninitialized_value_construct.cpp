#include <iostream>
#include <memory>
#include <string>
 
int main()
{
    struct S { std::string m{ "▄▀▄▀▄▀▄▀" }; };
 
    constexpr int n {4};
    alignas(alignof(S)) char out[n * sizeof(S)];
 
    try
    {
        auto first {reinterpret_cast<S*>(out)};
        auto last {first + n};
 
        std::ranges::uninitialized_value_construct(first, last);
 
        auto count {1};
        for (auto it {first}; it != last; ++it) {
            std::cout << count++ << ' ' << it->m << '\n';
        }
 
        std::ranges::destroy(first, last);
    }
    catch(...)
    {
        std::cout << "Exception!\n";
    }
 
    // Notice that for "trivial types" the uninitialized_value_construct
    // zero-fills the given uninitialized memory area.
    int v[] { 0, 1, 2, 3 };
    std::cout << ' ';
    for (const int i : v) { std::cout << ' ' << static_cast<char>(i + 'A'); }
    std::cout << "\n ";
    std::ranges::uninitialized_value_construct(std::begin(v), std::end(v));
    for (const int i : v) { std::cout << ' ' << static_cast<char>(i + 'A'); }
    std::cout << '\n';
}
