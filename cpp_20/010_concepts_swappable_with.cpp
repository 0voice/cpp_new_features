#include <concepts> 

template <typename T, typename U>
requires std::swappable_with<T,U>
void mySwap(T& t, U& u)
{
    T temp = t; t = u; u = temp;
}

int main()
{
    int x, y;
    mySwap(x, y);

    return 0;
}
