// C++中的初始化风格，大体有如下形式：
//  int a = 2; //"赋值风格"的初始化
//  int aa [] = { 2, 3 }; //用初始化列表进行的赋值风格的初始化
//  complex z(1, 2); //"函数风格"的初始化

// C++ 11 中，允许通过以花括号的形式来调用构造函数
//  int a = { 2 };
//  int aa [] = { 2, 3 };
//  complex z = { 1, 2 };

#include <iostream>
using namespace std;

class complex
{ 
public:
    complex(int x, int y)
        :_x(x),_y(y){}
    private:
    int _x;
    int _y;
};

complex func(const complex & com)
{
    return {1,2};
} 

int main(int argc, char *argv[])
{
    int a = 10;
    int aa[] = {1,2,3};
    complex com(1,2);
    int a_ = {1};
    int aa_[] = {1,2,3};
    complex com_ = {1,2};
    func({1,2});
    return 0;
}
 
