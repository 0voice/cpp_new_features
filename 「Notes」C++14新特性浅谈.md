> 原文链接：https://liuxizai.ac.cn/post/notes-cpp14/

基于 Ubuntu 20.04 的 NOI 2.0 发布后，我们或许有机会开始使用 C++14。

这篇 Blog 将对 OI 中可能会使用到的 C++14 的新特性进行简要总结。

> 由于大部分 OIer 被 CCF 迫害可能是 C++98 转 C++14，文中部分特性实际上是来源于 C++11 标准的。
>
> 另一个重要原因是，C++14 并不是 C++ 的一个主要版本（主要版本：C++03 C++11 C++17），其被认为是 C++11 一个更加完善的版本，C++11 这一更新经历了整整8年时间，引入了大量更改，可以说是 C++98 以来最重要的更新，所以提到 C++11 的特性确实很有必要。

这篇 Blog 以简洁易懂为主要目标，为此可能有些地方会在不影响理解的情况下使用一些不准确的表达，这些地方往往都有脚注，可以通过我给出的链接查看更详细的内容。

## constexpr

C++ 中一直存在着常量表达式的概念，在 C++98 中我们可以这样定义一个常量

```cpp
const int SIZE = 100005;
```

常量将无法修改，并且这也是编译器的一个优化机会，编译器往往会在编译时就处理好常量表达式的值，并在程序中硬编码结果，也就是不会在程序运行时再去计算表达式的值。

```cpp
const int MOD = 1e9 + 7;

// source code
ans = ans % MOD;

// after compilation
ans = ans % 1000000007; // yes, 1e9 + 7 has been calculated
ans = ans % (1e9 + 7); // no
```

另外，常量可以用来初始化数组

```cpp
int len = 10;
int a[len]; // compile error

const int len = 10;
int a[len]; // ok
```

C++11 中的 `constexpr` 关键字更进一步放宽了常量表达式的限制

```cpp
const int f() { return 10; }
int a[f()+5]; // compile error

constexpr int f() { return 10; }
int a[f()+5]; // ok
```

你可能已经发现了，C++11 允许将函数作为常量表达式，但是 C++11 要求函数必须恰由一条 `return` 语句组成，而 C++14 解除了这一限制，但你仍需要保证函数中没有：

- `goto` 语句

- 未进行初始化的变量定义

  ```cpp
  int a; // no
  int a = 10; // yes
  ```

- 非字面类型的变量定义（算术类型如 `int` 属于字面类型，而自定义类型如 `string` 属于非字面类型）

为了方便 OIer 理解，以上内容并不完全准确。

## lambda

C++11 中允许使用匿名函数，其能够内联于语句中

```cpp
struct node { int x, y; };
std::vector<node> arr;

// C++98
bool cmp(node a, node b) { return a.x < b.x; }
std::sort(arr.begin(), arr.end(), cmp);

// C++11
std::sort(arr.begin(), arr.end(), [](node a, node b){ return a.x < b.x; });
```

两种写法效果都是一样的。

具体地说，`lambda` 表达式的语法为

```cpp
[捕获](形参){函数体}
```

其中需要具体讲解的是捕获这一部分。

捕获分为这样几个类型：

- `[]` - 空捕获列表，`lambda` 表达式只能够使用非局部变量。
- `[names]` - `names` 是一个逗号分割的名字列表，这些名字为匿名函数所在的局部变量，这些局部变量将被拷贝（也就是说在函数中修改其值后并不会影响到其本身），如果 `name` 前面使用了 `&`，将会使用引用的方式捕获。
- `[&]` - 隐式的以引用方式捕获所有匿名函数使用的局部变量。
- `[=]` - 隐式的以值方式（即拷贝）捕获所有匿名函数使用的局部变量。
- `[&, list]` - `list` 是一个逗号分割的列表，列表中的变量以值方式捕获，其他局部变量隐式的以引用方式捕获。
- `[=, list]` - `list` 是一个逗号分割的列表，列表中的变量以引用方式捕获，其他局部变量隐式的以值方式捕获。

C++14 标准中规定了泛型 `lambda`，由于过于复杂，选择不将其写入 Blog。

另外，你会发现匿名函数没有规定返回值，编译器将会自行判断函数的返回值，如果需要指定函数返回值，可以使用以下语法

```cpp
[捕获](形参)->返回值类型 {函数体}
```

## 变量模板（variable template）

C++14 允许通过变量模板定义一族变量。

```cpp
template<typename T> // variable template
const T pi = T(3.14159265);

template<typename T> // function template
T circleArea(T r){
    return pi<T> * r * r; // variable template instantiation
}
```

## 聚合初始化（aggregate initialization）

聚合初始化是 C++11 中列表初始化的一种形式。

首先，聚合体是下列类型之一：

- 数组类型
- 满足一下条件的类类型（常为struct）
  - 没有私有或受保护的非静态数据成员（在类中声明的非 `static` 数据成员）
  - 没有用户提供的构造函数
  - 没有虚成员函数

你可以像这样进行聚合初始化

```cpp
struct node{
    int a, b;
    int c[3];
    int d;
};
node nd = {2, 3, 5, 6, 3, 4};
```

这样初始化过后

```cpp
a = 2;
b = 3;
c = {5, 6, 3};
d = 4;
```

可以发现聚合初始化是按照地址顺序依次进行的，所以对于类中的数组成员可以很方便的进行初始化，当然这也意味着聚合初始化无法直接指定一些成员进行初始化。

> 在 C++20 中允许进行指派初始化器的聚合初始化，即可以指定成员进行初始化

另一个很重要的特性，聚合初始化是递归进行的，也就是说其允许嵌套

```cpp
struct A{
    struct B{
        int a;
        int b;
        int c;
    };
    B d;
    int e;
    vector<int> f;
};
```

这样一个结构体我们仍然可以使用聚合初始化

```cpp
A a = {{1, 2, 3}, 4, {5, 6}};
```

初始化结果如下

```cpp
d.a = 1;
d.b = 2;
d.c = 3;
e = 4;
f = {5, 6};
```

在 C++11 中，聚合初始化要求类成员没有默认初始化器（`int a = 10`），但在 C++14 中允许我们这么做，所以另外很重要的一点是，当聚合初始化与默认初始化器结合时，到底会产生怎么样的结果。

举个例子说明

```cpp
struct A {
    struct B {
        int a = 21;
        int b;
        int c = 22;
        int d;
        int e = 23;
    };
    B b1  = { 11, 12 };
    B b2  = { 11, 12, 13 };
    int x;
};
```

接下来进行聚合初始化

```cpp
A a = { { 1, 2, 3, 4 }, { 1 }, 5 };
```

你会得到这样的结果

```cpp
b1.a = 1;
b1.b = 2;
b1.c = 3;
b1.d = 4;
b1.e = 23;
b2.a = 1;
b2.b = 0;
b2.c = 22;
b2.d = 0;
b2.e = 23;
x = 5;
```

你会发现，`b2`的初始化好像失效了，否则我们应该得到这样的结果

```cpp
b2.a = 1;
b2.b = 12;
b2.c = 13;
b2.d = 0;
b2.e = 23;
```

初始化器提供的值比类成员少时，根据 N3605，C++14 会采用如下策略

- 从成员的默认初始化器进行初始化
- 如果没有默认初始化器，用一个空初始化器列表进行初始化

那么，我们在对 `a` 进行聚合初始化时， 实际上为 `b2` 提供了值 `{1}`，所以 `b2` 的初始化器**完全失效**，接下来，`b2.a` 从聚合初始化中的到了值，其他成员没有得到值，所以隐式的按照 N3605 进行初始化。

这正是我们得到的结果。

## auto

`auto` 于 C++11 引入作为占位类型说明符，其能够从初始化器自动推导变量类型。

```cpp
auto a = 12;        // int
auto b = 2 + 4 * 7; // int
auto c = 0.17;      // double
auto d = a;         // int
auto e = a + c;     // double
复制代码
```

C++14 还允许使用 `auto` 自动推断函数返回值类型

```cpp
auto f() { return 2 + 3; } // int
```

如下写法将会被推导为列表初始化器

```cpp
auto g = {1, 2, 3, 4, 5}; // std::initializer_list<int>
auto h{1, 2, 3, 4, 5}; // std::initializer_list<int>
```

> 第二种写法在 C++17 中被弃用

另外，`auto` 还常用于无名类型，如 `lambda` 表达式类型

```cpp
auto lambda = []() { return 9 + 12; }
std::cout << lambda() << std::endl; // 21
```

需要注意的是，`auto` 说明符要求变量必须拥有初始化器

```cpp
auto x; // compile error
auto y = 10; // ok
```

> `auto x;` 这种写法在 C 中被允许。

如果想要了解更多，可以参考 cppreference。

## 基于范围的 for 循环（range-based for loop）

C++11 规定了基于范围的 `for` 循环，其在一个范围上执行 `for` 循环，是传统 `for` 循环一个更加可读的等价版本，OI 中常用于图遍历。

其语法如下

```cpp
[属性-可选]
for(范围声明: 范围表达式){
    循环语句
}
```

> 属性：属性说明符序列，不在 Blog 中进行说明，几乎不会用到。

- 范围声明：一个具名变量的声明，类型为范围表达式中元素的类型或其引用，一般使用 `auto` 对其类型进行推导。
- 范围表达式：一个序列（数组，或是定义了 `begin` 和 `end` 的对象，如 `vector`），或是一个花括号列表初始化器（如 `{1, 2, 3, 4, 5}`）。
- 循环语句：常规函数体。

基于范围的 `for` 循环可以用这样的常规 `for` 循环替代

```cpp
for(auto __begin = 首表达式, __end = 尾表达式; __begin != __end; __begin++){
    范围声明 = *__begin;
    循环语句
}
```

其中，对于数组 `a[]`，其首表达式为 `a`，尾表达式为 `(a + __bound)`，`__bound` 为数组长度，我们要求数组是有确定长度的。

对于定义了 `begin` 和 `end` 的对象 `b`，其首表达式为 `b.begin()`，尾表达式为 `b.end()`。

否则，通过实参依赖查找进行查找。

一些实际使用的例子

```cpp
vector<int> g[10005];
for(auto v: g[u]){
    /* something here */
}

int a[] = {1, 2, 3, 4, 5};
for(auto &x: a){
   	x++;
    std::cout << x << ' ';
}
// after - a: {2, 3, 4, 5, 6}

for(auto x: {1, 3, 5, 7}){
    std::cout << x << ' ';
}
```

## 变参数模板（variadic template）

在我看来无比实用的特性之一，你可以在我的 `template` 中找到这样一个函数

```cpp
void input() {}
template<typename Type, typename... Types>
void input(Type& arg, Types&... args){
    arg = read<Type>();
    input(args...);
}
```

这就是一个变参数模板的使用案例，你可以通过 `input()` 函数一次性对任意个变量通过快读进行读入。

```cpp
int x, y, z;
input(x); // ok
input(x, y, z); // ok
```

常用的变参数模板格式和上面大同小异，都是通过递归调用，`input(Type& arg, Types&... args)` 递归变参函数，`input(args...)` 就是在进行递归调用，我们当然需要给这样一个递归函数一个终止条件，`input()` 被称为基础函数，递归变参数函数最终在这里停止。
