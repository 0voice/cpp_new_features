#include <cstring>
#include <iostream>
#include <memory>
#include <string>
 
int main()
{
    struct S { std::string m{ "█▓▒░ █▓▒░ " }; };
 
    constexpr int n {4};
    alignas(alignof(S)) char out[n * sizeof(S)];
 
    try
    {
        auto first {reinterpret_cast<S*>(out)};
        auto last = std::ranges::uninitialized_default_construct_n(first, n);
 
        auto count {1};
        for (auto it {first}; it != last; ++it) {
            std::cout << count++ << ' ' << it->m << '\n';
        }
 
        std::ranges::destroy(first, last);
    }
    catch(...) { std::cout << "Exception!\n"; }
 
    // Notice that for "trivial types" the uninitialized_default_construct_n
    // generally does not zero-fill the given uninitialized memory area.
    constexpr int etalon[] { 1, 2, 3, 4, 5, 6 };
    int v[] { 1, 2, 3, 4, 5, 6 };
    std::ranges::uninitialized_default_construct_n(std::begin(v), std::size(v));
    if (std::memcmp(v, etalon, sizeof(v)) == 0) {
        // Maybe undefined behavior, pending CWG 1997:
        // for (const int i : v) { std::cout << i << ' '; }
        for (const int i : etalon) { std::cout << i << ' '; }
    } else {
        std::cout << "Unspecified!";
    }
    std::cout << '\n';
}
