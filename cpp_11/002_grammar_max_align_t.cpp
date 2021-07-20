#include <iostream>
#include <cstddef>
int main()
{
    std::cout << alignof(std::max_align_t) << '\n';
}
