template <class T, class U = double>
void f(T t = 0, U u = 0) {};
void g()
{
    f(1, 'c'); // f<int, char>(1, 'c')
    f(1);      // f<int, double>(1, 0), 使用了默认模板参数double
    f();       // 错误: T无法被推导出来
    f<int>();  // f<int, double>(0, 0), 使用了默认模板参数double
    f<int, char>(); // f<int, char>(0, 0)
}
