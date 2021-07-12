#include <cassert>
#include <cstring>
using namespace std;

template <typename T, typename U> int bit_copy(T& a, U& b)
{
    assert(sizeof(b) == sizeof(a));
    //static_assert(sizeof(b) == sizeof(a), "template parameter size no equal!");
    memcpy(&a, &b, sizeof(b));
};

int main()
{
    int varA = 0x2468;
    double varB;
    bit_copy(varA, varB);
    getchar();
    return 0;
}
