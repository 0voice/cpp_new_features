//gcc (GCC) 7.3.0
#include<memory>
#include<string>
using namespace std;
template<typename T>
using ptr=std::shared_ptr<T>;
 
int main()
{
    //这里借助模板别名，用ptr<string> 来代替std::shared_ptr<string>
    ptr<string> p=std::make_shared<std::string>();
    return 0;
}
