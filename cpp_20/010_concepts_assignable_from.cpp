#include <iostream>

template <typename T>
class A
{
public:
    const A& operator= (const A& other)    {  return *this;    }
};

int main ()
{
    A<double> d1, d2; d1 = d2; //this works fine

    std::cout << std::boolalpha
        << "Is double assignable?    " << std::assignable_from<double&, double> << '\n' //Says true, as it should
        << "Is A<double> assignable? " << std::assignable_from<A<double>&, A<double>> << '\n'; //Says false

    return 0;
}
