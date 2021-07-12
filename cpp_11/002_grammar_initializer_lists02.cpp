#include <iostream>
#include <vector>
using namespace std;
template <typename T>
class MyArray
{ 
private:
    vector<T> m_Array;
public:
    MyArray() { }
    MyArray(const initializer_list<T>& il)
    {
        for (auto x : il)
        m_Array.push_back(x);
    }
};

int main()
{
    MyArray<int> foo = { 3, 4, 6, 9 };
    return 0;
}
