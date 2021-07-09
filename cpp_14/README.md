<h2>C++14新特性</h2>

<h5 id="cpp_14_01">函数返回值类型推导</h5>

C++14对函数返回类型推导规则做了优化，先看一段代码：

```CPP
#include <iostream>

using namespace std;

auto func(int i) {
    return i;
}

int main() {
    cout << func(4) << endl;
    return 0;
}
```
使用C++11编译：
```CPP
~/test$ g++ test.cc -std=c++11
test.cc:5:16: error: ‘func’ function uses ‘auto’ type specifier without trailing return type
 auto func(int i) {
                ^
test.cc:5:16: note: deduced return type only available with -std=c++14 or -std=gnu++14
```
上面的代码使用C++11是不能通过编译的，通过编译器输出的信息也可以看见这个特性需要到C++14才被支持。

返回值类型推导也可以用在模板中：

```CPP
#include <iostream>
using namespace std;

template<typename T> auto func(T t) { return t; }

int main() {
    cout << func(4) << endl;
    cout << func(3.4) << endl;
    return 0;
}
```
