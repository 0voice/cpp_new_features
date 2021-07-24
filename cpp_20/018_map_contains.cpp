#include <iostream>
#include <set>
 
int main()
{  
    std::set<int> example = {1, 2, 3, 4};
 
    if (example.contains(2)) {
        std::cout << "Found\n";
    } else {
        std::cout << "Not found\n";
    }
}
