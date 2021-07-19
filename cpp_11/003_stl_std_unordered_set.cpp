#include <set>
#include <iostream>
int main()
{
    std::multiset<int> c = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // 从 c 擦除所有奇数
    for(auto it = c.begin(); it != c.end(); )
        if(*it % 2 == 1)
            it = c.erase(it);
        else
            ++it;
    for(int n : c)
        std::cout << n << ' ';
}
