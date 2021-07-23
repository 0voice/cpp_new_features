#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <memory>
#include <string>
 
int main()
{
    const char* v[] { "This", "is", "an", "example", };
 
    if (const auto sz{std::size(v)};
        void* pbuf = std::aligned_alloc(alignof(std::string), sizeof(std::string) * sz))
    {
        try
        {
            auto first {static_cast<std::string*>(pbuf)};
            auto last {first + sz};
            std::ranges::uninitialized_copy(std::begin(v), std::end(v), first, last);
 
            std::cout << "{ ";
            for (auto it {first}; it != last; ++it)
                std::cout << std::quoted(*it) << ", ";
            std::cout << "};\n";
 
            std::ranges::destroy(first, last);
        }
        catch(...)
        {
            std::cout << "uninitialized_copy exception\n";
        }
        std::free(pbuf);
    }
}
