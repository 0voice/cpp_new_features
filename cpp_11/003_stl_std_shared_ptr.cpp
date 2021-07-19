#include <memory> 
#include <iostream> 
 
void fun(std::shared_ptr<int> sp)
{
    std::cout << "fun: sp.use_count() == " << sp.use_count() << '\n'; 
}
 
int main() 
{ 
    auto sp1 = std::make_shared<int>(5);
    std::cout << "sp1.use_count() == " << sp1.use_count() << '\n'; 
 
    fun(sp1);
}
