#include <iostream>
#include <vector>
#include <iterator>
 
int main() 
{
    std::vector<int> v = { 3, 1, 4 };
    auto vi = std::rbegin(v);
    std::cout << *vi << '\n'; 
 
    int a[] = { -5, 10, 15 };
    auto ai = std::rbegin(a);
    std::cout << *ai << '\n';
}
