//C++ 11 统一初始化方法
//变量，数组，STL容器，类的构造的初始化都可以使用{}方法
class test {
    int a ,b,c[4];
    int *d = new int[3]{1,2,3,4};//C++ 11提供的独有的初始化方式
    vector<int> vec = {1,2,3}; //c++ 11 独有的
    map<string, int> _map = {{"hello",1},{"world",2}};//c++ 11 独有的
public:
    test(int i ,int j):a(i),b(j),c{2,3,4,2}{};
};
 
int main(int argc, const char * argv[])
{
    
    test t{1,2};//初始化test类
    return 0;
}
