#### <h2 id="cpp_11_new_keywords">C++11含义变化或者新增含义关键字</h2>

##### <h4 id="auto">auto</h4>

C++11标准和C++98/03标准的auto是不同的。C++98/03标准中，auto表示自动储存类型 ；C++11标准中，auto表示由编译器静态判断其应有的类型。

C++98 auto

```C++
int a =10 ;  //拥有自动生命期
auto int b = 20 ;//拥有自动生命期
static int c = 30 ;//延长了生命期
```

C++11 auto

auto可以在声明变量的时候根据变量初始值的类型自动为此变量选择匹配的类型，类似的关键字还有decltype。

```C++
int a = 10;
auto b = a;//自动推断类型，b为 int类型
auto c = 1.9;//自动推断类型，c为double类型
auto d = 1.2e12L;//自动推断类型，d 是 long double
```

<br />

##### <h4 id="clazz">class</h4>

C++11中对类(class)新增的特性：
* default/delete 控制默认函数
* override /final 强制重写/禁止重写虚函数
* 委托构造函数 Delegating constructors
* 继承的构造函数 Inheriting constructors
* 类内部成员的初始化 Non-static data member initializers
* 移动构造和移动赋值

<br />

##### <h4 id="default">default</h4>

在C+11中，对于defaulted函数，编译器会为其自动生成默认的函数定义体，从而获得更高的代码执行效率，也可免除程序员手动定义该函数的工作量。

C++的类有四类特殊成员函数，它们分别是：默认构造函数、析构函数、拷贝构造函数以及拷贝赋值运算符。这些类的特殊成员函数负责创建、初始化、销毁，或者拷贝类的对象。如果程序员没有显式地为一个类定义某个特殊成员函数，而又需要用到该特殊成员函数时，则编译器会隐式的为这个类生成一个默认的特殊成员函数。当存在用户自定义的特殊成员函数时，编译器将不会隐式的自动生成默认特殊成员函数，而需要程序员手动编写，加大了程序员的工作量。并且手动编写的特殊成员函数的代码执行效率比编译器自动生成的特殊成员函数低。

C++11标准引入了一个新特性：defaulted函数。程序员只需在函数声明后加上”=default;”，就可将该函数声明为defaulted函数，编译器将为显式声明的defaulted函数自动生成函数体。

defaulted函数特性仅适用于类的特殊成员函数，且该特殊成员函数没有默认参数。

defaulted函数既可以在类体里(inline)定义，也可以在类体外(out-of-line)定义。

```C++
#include "default.hpp"
#include <iostream>
 
class Foo
{
	Foo(int x); // Custom constructor
	Foo() = default; // The compiler will now provide a default constructor for class Foo as well
};
 

struct A
{
	int x;
	A(int x = 1) : x(x) {} // user-defined default constructor
};
 
struct B : A
{
	// B::B() is implicitly-defined, calls A::A()
};
 
struct C
{
	A a;
	// C::C() is implicitly-defined, calls A::A()
};
 
struct D : A
{
	D(int y) : A(y) {}
	// D::D() is not declared because another constructor exists
};
 
struct E : A
{
	E(int y) : A(y) {}
	E() = default; // explicitly defaulted, calls A::A()
};
 
struct F
{
	int& ref; // reference member
	const int c; // const member
	// F::F() is implicitly defined as deleted
};
 
int test_default1()
{
	A a;
	B b;
	C c;
	// D d; // compile error
	E e;
	// F f; // compile error
 
	return 0;
}
 
///
struct widget
{
	widget() = default;
 
	inline widget& operator=(const widget&);
};
 
// Notice that you can default a special member function outside the body of a class as long as it’s inlinable.
inline widget& widget::operator=(const widget&) = default;
```

<br />

##### <h4 id="delete">delete</h4>

C++11 中，可在想要 “禁止使用” 的特殊成员函数声明后加 “= delete”，而需要保留的加 "= default" 或者不采取操作
```C++
class LeafOfTree{
public:
　　LeafOfTree() = default;
    ~LeafOfTree() = default;　　
    LeafOfTree(const LeafOfTree&) = delete;　　// mark copy ctor or copy assignment operator as deleted functions
　　LeafOfTree & operator=(const LeafOfTree&) = delete; 
};
```

delete 的扩展
C++11 中，delete 关键字可用于任何函数，不仅仅局限于类成员函数

<br />

##### <h4 id="export">export</h4>

C++11 中，不使用并保留该关键词

<br />

##### <h4 id="extern">extern</h4>

外部模板
```C++
extern template<class T>void(T t);
```

<br />

##### <h4 id="inline">inline</h4>

C++11中引入了内联命名空间（inline namespace），它的特点就是不需要使用using语句就可以直接在外层命名空间使用该命名空间内部的内容，而且无需使用命名空间前缀。
```C++
inline namespace inline_namespacel{
    class Inlinel{
    public:
        int iv;
    };
}
namespace inline_namespaceli
    class Inline2{
    public:
        double dv;
    };
}
```

内联命名空间的声明方法就是在原来的声明语法前面增加inline关键字。除此之外上面代码还有以下特点：

两处声明的命名空间同名，它们同属一个命名空间。这是C++命名空间从来就有的特性。

第一次声明命名空间时使用了inline关键字，这叫显式内联；第二次没有使用inline关键字，但是由于第一次已经声明了inline，这里声明的还是内联命名空间。这种情况成为隐式内联。

内联命名空间声明之后，就可以在外层命名空间不适用前缀而直接使用它们了。

```C++
namespace inline_test{
    inline namespace inline_namespace1{
        class Inlinel {
        public :
            int iv;
        };
    }
    namespace inline_namespace1{
        class Inline2{
        public :
            double dv ;
        };
    }
    void test_inline_namespace(){
        Inlinel inl;
        inl.iv = 5;
        Inline2 in2;in2.dv = 2;
    }
}
void test_inline_namespace2(){
    inline_test::Inlinel inl;
    in1.iv = 5;
    inline_test::Inline2 in2;
    in2.dv = 2;
}
```
上述代码中test_inline_namespace处在linline_namespace1的外层，所以可以直接使用Inline1和Inline2。test_inline_namespace2处在更外层，这时也只是需要使用外层命名空间inline_test前缀即可。
看起来inline_namespace就像不存在一样。

<br />

##### <h4 id="mutable">mutable</h4>

C++11中的mutable是用来修改const函数中的不可修改类成员的缺陷

```C++
class Log{
 
public:
    //
    void print(const std::string& str) const
    {    
        printf("%s", str_cstr());
        //统计输出次数
        printNums++;
    }
 
private:
    //这里必须声明为mutable
    mutable int printNums;
}
```

<br />

##### <h4 id="sizeof">sizeof</h4>

在标准C++，sizeof可以作用在对象以及类别上。但是不能够做以下的事：
```C++
struct someType { otherType member; } ;
sizeof(SomeType: :member); //直接由someType型别取得非静态成员的大小，C++03不行。C++11允哥
```
这会传回OtherType的大小。C++03并不允许这样做，所以会引发编译错误。C++11将会允许这种使用。

```C++
#include <iostream>
using namespace  std;
struct Empty{};
struct Base{int a;};
struct Derived:Base
{
    int b;
};
struct Bit
{
    unsigned bit:1;
};
int main()
{
    Empty e;
    Derived d;
    Base& b = d;
    Bit bit;
    cout << sizeof(e) << endl;
    cout << sizeof(Empty) << endl;
    cout << sizeof(&e) << endl;
    cout << sizeof(Derived) << endl;
    cout << sizeof(d) << endl;
    cout << sizeof(void) << endl;//BAD
    return 0;
}
```

<br />

##### <h4 id="struct">struct</h4>

C++11 struct可以给每个成员变量赋予默认的初始值
```C++
struct Student{
    char* name = nullptr;
    unsigned int age  = 15;
    int number = 21509111;  
};
```
所有声明的新结构体对象就是默认上面的值。

<br />

##### <h4 id="using">using</h4>

* using 在 C++11之前主要用于名字空间、类型、函数与对象的引入，实际上是去除作用域的限制。
```C++
//引入名字空间
using namespace std;
//引入类型
using std::iostream;
//引入函数
using std::to_string;
//引入对象
using std::cout;
```

* 通过using引入函数可以解除函数隐藏
“隐藏”是指派生类的函数屏蔽了与其同名的基类函数，规则如下：
1）如果派生类的函数与基类的函数同名，但是参数不同。此时，不论有无virtual关键字，基类的函数将被隐藏（注意别与重载混淆）
2）如果派生类的函数与基类的函数同名，并且参数也相同，但是基类函数没有virtual关键字。此时，基类的函数被隐藏（注意别与覆盖混淆）
使用了using关键字，就可以避免1的情况，是的父类同名函数在子类中得以重载，不被隐藏
```C++
class Base{
public:
  void func()	{ cout << "in Base::func()" << endl; }
  void func(int n) { cout << "in Base::func(int)" << endl;}
};

class Sub : public Base {
public:
  using Base::func;	//引入父类所有同名函数func，解除函数隐藏
  void func()	{ cout<<"in Sub::func()"<<endl;}
};

int main() {
  Sub s;
  s.func();
  s.func(1); // Success!
}
```

* 使用 using 代替 typedef，给类型命名
```C++
using uint8=unsigned char; //等价于typedef unsigned char uint8;
using FunctionPtr = void (*)(); //等价于typedef void (FunctionPtr)();
template using MapString = std::map<T, char>; //定义模板别名，注意typedef无法定义模板别名，因为typedef只能作用于具体类型而非模板
```

