#include <iostream>
using namespace std;

class ConvertTo
{
};

class Convertable
{
public:
    explicit operator ConvertTo () const
    {
        cout << "callCount : " << ++(m_nCallCnt) << endl;
        return ConvertTo();
    }

    static int m_nCallCnt;
};

int Convertable::m_nCallCnt = 0;

void Func(ConvertTo ct) { }

int main()
{
    Convertable c;
    ConvertTo ct(c);   // 直接初始化，通过
//  ConvertTo ct2 = c; // 拷贝构造初始化，编译失败
    ConvertTo ct3 = static_cast<ConvertTo>(c);  // 强制转化，通过
//  Func(c);          // 拷贝构造初始化，编译失败
    system("pause");
}
