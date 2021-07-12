
#include <vector>
#include <iostream>
#include <random>
#include <ctime>
 
std::vector<unsigned> randomGenerate(const unsigned low, const unsigned high)
{
    static std::default_random_engine e(time(0));
    static std::uniform_int_distribution<unsigned> u(low, high);
 
    std::vector<unsigned> vec;
    for (int i = 0; i < 10; i++)
        vec.push_back(u(e));
    return vec;
}
 
int main()
{
    for (int i = 0; i < 10; i++) {
        std::vector<unsigned> vec = randomGenerate(0, 30);
        for (auto &i : vec)
            std::cout << i << " ";
        std::cout << std::endl;
    }
 
 
    return 0;
}
