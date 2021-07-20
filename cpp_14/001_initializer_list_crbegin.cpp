#include <iostream>
#include <vector>
#include <iterator>
 
int main() 
{
    std::vector<int> v = { 3, 1, 4 };
    auto vi = std::rbegin(v); // the type of `vi` is std::vector<int>::reverse_iterator
    std::cout << "*vi = " << *vi << '\n';
 
    *std::rbegin(v) = 42; // OK: after assignment v[2] == 42
//  *std::crbegin(v) = 13; // error: the location is read-only
 
    int a[] = { -5, 10, 15 };
    auto ai = std::rbegin(a); // the type of `ai` is std::reverse_iterator<int*>
    std::cout << "*ai = " << *ai << '\n';
 
    auto il = { 3, 1, 4 };
    // the type of `it` below is std::reverse_iterator<int const*>:
    for (auto it = std::rbegin(il); it != std::rend(il); ++it)
        std::cout << *it << ' '; 
}
