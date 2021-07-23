#include <cstring>
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
 
        std::ranges::uninitialized_default_construct(first, last);
 
        auto count {1};
        for (auto it {first}; it != last; ++it) {
            std::cout << count++ << ' ' << it->m << '\n';
        }
 
        std::ranges::destroy(first, last);
    }
    catch(...) { std::cout << "Exception!\n"; }
 
    // Notice that for "trivial types" the uninitialized_default_construct
    // generally does not zero-fill the given uninitialized memory area.
    constexpr char etalon[] { 'A', 'B', 'C', 'D', '\n' };
    char v[] { 'A', 'B', 'C', 'D', '\n' };
    std::ranges::uninitialized_default_construct(std::begin(v), std::end(v));
    if (std::memcmp(v, etalon, sizeof(v)) == 0) {
        std::cout << "  ";
        // Maybe undefined behavior, pending CWG 1997:
        // for (const char c : v) { std::cout << c << ' '; }
        for (const char c : etalon) { std::cout << c << ' '; }
    } else {
        std::cout << "Unspecified\n";
    }
}
