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
        auto last = std::uninitialized_default_construct_n(first, n);
 
        for (auto it {first}; it != last; ++it) {
            std::cout << it->m << '\n';
        }
 
        std::destroy(first, last);
    }
    catch(...)
    {
        std::cout << "Exception!\n";
    }
 
    // Notice that for "trivial types" the uninitialized_default_construct_n
    // generally does not zero-initialize the given uninitialized memory area.
    int v[] { 1, 2, 3, 4 };
    const int original[] { 1, 2, 3, 4 };
    std::uninitialized_default_construct_n(std::begin(v), std::size(v));
    // for (const int i : v) { std::cout << i << ' '; }
    // Maybe undefined behavior, pending CWG 1997.
    std::cout <<
        (std::memcmp(v, original, sizeof(v)) == 0 ? "Unmodified\n" : "Modified\n");
    // The result is unspecified.
}
