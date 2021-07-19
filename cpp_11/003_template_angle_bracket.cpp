template<typename T>
struct Foo
{
      typedef T type;
};

template <typename T>
class A
{
    // ...
};

int main()
{
    Foo<A<int>>::type xx;  //C++11之前编译出错,要写成  Foo<A<int> >
    return 0;
}

