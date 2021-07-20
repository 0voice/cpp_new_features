#include <iostream>
#include <iterator>
 
int main() 
{
    auto il = { 3, 1, 4 };
    for (auto it = std::rbegin(il); it != std::rend(il); ++it)
        std::cout << *it << ' '; 
}
