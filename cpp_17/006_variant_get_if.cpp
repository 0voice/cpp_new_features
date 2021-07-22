#include <variant>
#include <iostream>
 
int main()
{
    std::variant<int, float> v{12};
 
    if(auto pval = std::get_if<int>(&v))
      std::cout << "variant value: " << *pval << '\n'; 
    else 
      std::cout << "failed to get value!" << '\n'; 
}
