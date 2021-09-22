> 原文链接：https://www.oracle.com/cn/servers/technologies/howto-use-lambda-exp-cpp11.html
### Lambda 表达式不仅具有函数指针的灵活性，还可以通过捕获局部变量提高可扩展性。本文介绍 Lambda 表达式的语法和用法。

### 简介

Lambda 可能是最新的 C++11 标准的典型特性之一。Lambda 表达式把函数看作对象。Lambda 表达式可以像对象一样使用，比如可以将它们赋给变量和作为参数传递，还可以像函数一样对其求值。

当一个函数需要将另一个函数用作参数时，可以使用 Lambda。例如，C qsort() 函数接受一个指向比较函数的指针，如清单 1 所示。

```c++
#include <stdlib.h> 
 #include <stdio.h> 
 static int intcompare(const void *p1, const void *p2) 
 {   
 int i = *((int *)p1);  
 int j = *((int *)p2); 
 return (i < j) ;
 }  
 int main() 
 {   
 int a[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }; 
 qsort((void *)a, 10, sizeof (int), intcompare);
 for (int i = 0; i < 10; i++) { printf("%d ", a[i]); }  
 printf("\n"); 
 return 0;  }
```

**清单 1**

清单 1 中的代码有以下几点不足：

- 比较函数需要单独声明。这增加了将错误的比较函数传递给 qsort() 操作的风险。
- 比较函数接受 void * 参数，因此缺失了某种程度的类型检查。
- 比较函数看不到任何局部作用的变量。因此，如果存在其他影响排序的因素，必须在更大范围内声明。

清单 2 显示重新编写后的清单 1 中的示例，将 C++ std::sort() 算法与 lambda 表达式结合使用。由于 std::sort() 是一个模板，因此会保留所有类型信息。注意如何在通常出现函数名的位置编写 lambda 表达式。

```c++
#include <algorithm> 
 int main() 
 {
 int a[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };   
std::sort( a, &a[10], [](int x, int y){ return x < y; } );
    for(int i=0; i<10; i++) { printf("%i ", a[i]); }  
  printf("\n");    
  return 0; 
  }
```

**清单 2**

### Lambda 表达式的基本语法

Lambda 表达式本质上与函数声明非常类似。我们可以提取清单 2 中的 lambda 表达式，详加说明。提取的 lambda 表达式如清单 3 所示：

```c++
[](int x, int y){ return x < y ; }
```

**清单 3**

如果我们将 lambda 表达式比作函数，可以看到它与函数名对应的是一对空的方括号，即*捕获表达式*。这些括号表示后面跟着一个 lambda 表达式。这些方括号不必为空；稍后将讨论其内容。

如果 lambda 主体只含一个返回类型，则暗示返回的表达式类型为 lambda 返回类型。如果要显式指定返回类型，需使用新的 C++11 语法表示函数声明中的后置返回类型。对于返回类型 T 的普通函数，您可以这样编写：

```c++
auto foo(...) -> T { ... }
```

对于 lambda，您需要要这样编写：

```c++
[] (...) -> T { ... }
```

lambda 表达式的其余部分与常规 C 或 C++ 函数主体类似。

### 将 Lambda 传递到函数指针

C++11 标准库中有一个名为 function 的模板，它可以接受指定类型的函数或者具有匹配的返回类型和参数列表的 lambda。这将产生一个指向函数类型的指针，例如，清单 4 可用作函数参数类型，接受 int 参数，返回 void。您可以向其传递任何类似匹配函数或 lambda 的内容。

```c++
std::function<void(int)>
```

**清单 4**

清单 5 显示的函数扫描一个数组，对每个元素应用一个给定函数。

```c++
void scan( int* a, int length, std::function<void(int)> process ) 
 {  
 for(int i=0; i<length; i++) 
 {   
 process(a[i]); 
 } 
 }
```

**清单 5**

清单 6 显示如何通过传递一个函数或 lambda 表达式作为参数来调用 scan() 函数。

```c++
void f(int);
  int a[10];  
  ... 
  scan(a, 10, f); 
  scan(a, 10, [](int k)->void { ... } );
```

**清单 6**

### Lambda 表达式中的变量捕获

到目前为止，我们对 lambda 表达式的处理基本与标准函数调用类似：传入参数，返回结果。然而，在函数主体中声明的 lambda 表达式还是可以捕获在声明 lambda 处可见的函数的任何局部变量。

假设我们需要使用函数 scan()，但希望 process 函数只对大于某个阈值的值起作用。我们不能修改 scan()，不能让 scan() 向 process 函数传递多个参数。但如果我们将一个 lambda 表达式传递给 scan() 函数，则可以从其环境捕获一个局部变量。

在清单 7 中，我们将希望捕获的变量放在方括号中，即放在捕获表达式中。这实际上向 lambda 表达式中额外传递了一个参数，但无需更改 scan 函数的定义。就像传递参数给函数一样，我们实际上是在函数的调用点捕获值 threshold 的副本，这称为*通过值捕获*。

```c++
#include <algorithm> 
 void scan( int* a, int length, std::function<void(int)> process) 
 {  
 for(int i=0; i<length; i++) {   
 process(a[i]); 
 } 
 } 
 int main()  
 {   
 int a[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };   
 int threshold = 5;   
scan(a, 10,
     [threshold](int v)
  { if (v>threshold) { printf("%i ", v); } }
  );  
  printf("\n");   
  return 0;  }
```

**清单 7**

有一个简写形式 [=]，表示“通过值捕获每个变量”。在清单 8 中，我们将函数调用重新编写为使用这种更短的表达式。

```c++
scan(a, 10, [=](int v) { if (v>threshold) { printf("%i ", v); } });
```

**清单 8**

**注**：通过值捕获变量意味着生成局部副本。如果有多个局部变量，全部捕获可能会导致 lambda 产生显著开销。

但有些情况下，我们希望修改捕获的变量。例如，假设我们要计算最大值并将其存储在变量 max 中。在这种情况下，我们不想使用该变量值的副本，而是希望使用该变量的引用，这样，我们就可以在模板中修改该变量。这称为*通过引用捕获变量*。清单 9 显示了这样一个示例。

```c++
#include <algorithm> 
 void scan(int * a, int length, std::function<void (int)> func) 
 {   
 for(int i=0; i<length; i++) {  
 func(a[i]);   
 } 
 } 
 int main() 
 {  
 int a[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }; 
 int threshold = 5; 
 int max =0;   
 std::sort( a, &a[10], [](int x, int y){return (x < y);});  
 scan(a, 10,
 [threshold,&max](int v) { if (v>max) {max = v;}
if (v>threshold) { printf("%i ", v); } });
   printf("\n");  
   printf("Max = %i\n",max);  
   return 0; 
   }
```

**清单 9**

同样，也有一个简写形式 [&]，用于应通过引用捕获每个变量的情况。

### Lambda 表达式、函数对象和函子

虽然 lambda 表达式是 C++11 的新特性，但用这种方式访问现有语言特性的确很方便。lambda 表达式是*函数对象* 的速记表示法。函数对象是一个具有成员 operator()()（函数调用运算符）的类类型对象，因此可以像函数一样调用。函数对象类型被称作*函子*。清单 10 显示了一个函子的示例。

```c++
class compare_ints { 
 public:  
 compare_ints(int j, int k ) : l(j), r(k) { } 
 bool operator()() { return l < r; }  
 private:  
 int l, r;  };
```

**清单 10**

您可以创建一个 compare_ints 对象，用两个整型值初始化，如果第一个值小于第二个值，使用函数调用运算符返回 true：

```c++
compare_ints comp(j, k); 
 bool less_than = comp();
```

也可以动态创建一个临时对象，然后直接使用：

```c++
bool less_than = compare_ints(j, k)();
```

使用 lambda 表达式不必创建和命名函子类即可达到这种效果。编译器为您创建一个匿名函子，如清单 11 所示。

```c++
auto comp = [](int j, int k) { return j < k; };  
bool less_than =  comp(l,r);
```

**清单 11**

在清单 11 中，comp 是匿名函子类型的对象。

您也可以动态执行此操作：

```c++
bool less_than = [l,r]() { return l < r; }();
```

### 总结

Lambda 表达式是一种非常强大的 C++ 扩展。它们不仅具有函数指针的灵活性，还可以通过捕获局部变量提高可扩展性。

显然，与 C++11 中广泛的模板特性结合时，lambda 表达式会变得更加 有用，这种情况在按 C++11 标准编写的代码中会经常遇到。
