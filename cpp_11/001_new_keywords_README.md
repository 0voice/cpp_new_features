#### <h2 id="cpp_11_new_keywords">C++11新增关键字</h2>

##### <h4 id="thread_local">thread_local</h4>

thread_local是C++11增加的存储类指定符

C++中有4种存储周期：
  * automatic
  * static
  * dynamic
  * thread

有且只有thread_local关键字修饰的变量具有线程周期(thread duration)，这些变量(或者说对象）在线程开始的时候被生成(allocated)，在线程结束的时候被销毁(deallocated)。并且每 一个线程都拥有一个独立的变量实例(Each thread has its own instance of the object)。thread_local 可以和static 与 extern关键字联合使用，这将影响变量的链接属性(to adjust linkage)。

那么，哪些变量可以被声明为thread_local？可以是以下3类：

  * 命名空间下的全局变量
  * 类的static成员变量
  * 本地变量

thread_local案例

```C++
#include <iostream>
#include <mutex>
#include <string>
#include <thread>
 
thread_local unsigned int rage = 1;
std::mutex cout_mutex;
 
void increase_rage(const std::string& thread_name) {
  ++rage; // 在锁外修改 OK ；这是线程局域变量
  std::lock_guard<std::mutex> lock(cout_mutex);
  std::cout << "Rage counter for " << thread_name << ": " << rage << '\n';
}
 
void test() {
  thread_local int i = 0;
  printf("id=%d, n=%d\n", std::this_thread::get_id(), i);
  i++;
}
 
void test2() {
  test();
  test();
}
 
int main() {
  std::thread a(increase_rage, "a"), b(increase_rage, "b");
 
  {
    std::lock_guard<std::mutex> lock(cout_mutex);
    std::cout << "Rage counter for main: " << rage << '\n';
  }
 
  a.join();
  b.join();
 
  std::thread t1(test);
  std::thread t2(test);
  t1.join();
  t2.join();
 
  std::thread t3(test2);
  t3.join();
 
  system("pause");
  return 0;
}
```

<br/>

##### <h4 id="static_assert">static_assert</h4>

```C++
struct MyClass
{
    char m_value;
};

struct MyEmptyClass
{
    void func();
};

// 确保MyEmptyClass是一个空类（没有任何非静态成员变量，也没有虚函数）
static_assert(std::is_empty<MyEmptyClass>::value, "empty class needed");

//确保MyClass是一个非空类
static_assert(!std::is_empty<MyClass>::value, "non-empty class needed");

template <typename T, typename U, typename V>
class MyTemplate
{
    // 确保模板参数T是一个非空类
    static_assert(
        !std::is_empty<T>::value,
        "T should be n non-empty class"
    );

    // 确保模板参数U是一个空类
    static_assert(
        std::is_empty<U>::value,
        "U should be an empty class"
    );

    // 确保模板参数V是从std::allocator<T>直接或间接派生而来，
    // 或者V就是std::allocator<T>
    static_assert(
        std::is_base_of<std::allocator<T>, V>::value,
        "V should inherit from std::allocator<T>"
    );

};

// 仅当模板实例化时，MyTemplate里面的那三个static_assert才会真正被演算，
// 藉此检查模板参数是否符合期望
template class MyTemplate<MyClass, MyEmptyClass, std::allocator<MyClass>>;
```

<br/>

##### <h4 id="nullptr">nullptr</h4>

nullptr关键字用于标识空指针，是std::nullptr_t类型的（constexpr）变量。它可以转换成任何指针类型和bool布尔类型（主要是为了兼容普通指针可以作为条件判断语句的写法），但是不能被转换为整数。
```C++
char *p1 = nullptr;     // 正确
int  *p2 = nullptr;     // 正确
bool b = nullptr;       // 正确. if(b)判断为false
int a = nullptr;        // error
```

<br/>

##### <h4 id="noexcept">noexcept</h4>

noexcept有两类作用：noexcept指定符和noexcept运算符

* noexcept 指定符
```C++
void f() noexcept;  // 函数 f() 不抛出
void (*fp)() noexcept(false); // fp 指向可能抛出的函数
void g(void pfa() noexcept);  // g 接收指向不抛出的函数的指针
// typedef int (*pf)() noexcept; // 错误
```

* noexcept运算符
```C++
#include <iostream>
#include <utility>
#include <vector>
 
// noexcept 运算符 
void may_throw() {};
void no_throw() noexcept {};
auto lmay_throw = [] {};
auto lno_throw = []() noexcept {};
 
class T {
};
class T1 {
public:
  ~T1() {}
};
class T2 {
public:
  ~T2() {}
  int v;
};
class T3 {
public:
  ~T3() {}
  std::vector<int> v;
};
class T4 {
public:
  std::vector<int> v;
};
 
int main()
{
  T t;
  T1 t1;
  T2 t2;
  T3 t3;
  T4 t4;
 
  std::vector<int> vc;
 
  std::cout << std::boolalpha
    << "Is may_throw() noexcept? " << noexcept(may_throw()) << '\n'
    << "Is no_throw() noexcept? " << noexcept(no_throw()) << '\n'
    << "Is lmay_throw() noexcept? " << noexcept(lmay_throw()) << '\n'
    << "Is lno_throw() noexcept? " << noexcept(lno_throw()) << '\n'
    << "Is ~T1() noexcept? " << noexcept(std::declval<T1>().~T1()) << '\n'
    << '\n'
    << '\n'
 
    << "Is T(rvalue T) noexcept? " << noexcept(T(std::declval<T>())) << '\n'
    << "Is T(lvalue T) noexcept? " << noexcept(T(t)) << '\n'
    << '\n'
 
    << "Is T1(rvalue T1) noexcept? " << noexcept(T1(std::declval<T1>())) << '\n'
    << "Is T1(lvalue T1) noexcept? " << noexcept(T1(t1)) << '\n'
    << '\n'
 
    << "Is T2(rvalue T2) noexcept? " << noexcept(T2(std::declval<T2>())) << '\n'
    << "Is T2(lvalue T2) noexcept? " << noexcept(T2(t2)) << '\n'
    << '\n'
 
    << "Is T3(rvalue T3) noexcept? " << noexcept(T3(std::declval<T3>())) << '\n'
    << "Is T3(lvalue T3) noexcept? " << noexcept(T3(t3)) << '\n'
    << '\n'
 
    << "Is T4(rvalue T4) noexcept? " << noexcept(T4(std::declval<T4>())) << '\n'
    << "Is T4(lvalue T4) noexcept? " << noexcept(T4(t4)) << '\n'
    << '\n'
 
    << "Is std::vector<int>(rvalue std::vector<int>) noexcept? " << noexcept(std::vector<int>(std::declval<std::vector<int>>())) << '\n'
    << "Is std::vector<int>(lvalue std::vector<int>) noexcept? " << noexcept(std::vector<int>(vc)) << '\n';
 
  system("pause");
  return 0;
}
```

<br/>

##### <h4 id="decltype">decltype</h4>

decltype类型说明符，它的作用是选择并返回操作数的数据类型，在此过程中，编译器分析表达式并得到它的类型，却不实际计算表达式的值。
decltype用法
* 基本用法
```C++
int getSize();

int main(void)
{
    int tempA = 2;
    
    /*1.dclTempA为int*/
    decltype(tempA) dclTempA;
    /*2.dclTempB为int，对于getSize根本没有定义，但是程序依旧正常，因为decltype只做分析，并不调用getSize，*/
    decltype(getSize()) dclTempB;

    return 0;
}
```

* 与const结合
```C++
double tempA = 3.0;
    const double ctempA = 5.0;
    const double ctempB = 6.0；
    const double *const cptrTempA = &ctempA;
    
    /*1.dclTempA推断为const double（保留顶层const，此处与auto不同）*/
    decltype(ctempA) dclTempA = 4.1;
    /*2.dclTempA为const double，不能对其赋值，编译不过*/
    dclTempA = 5;
    /*3.dclTempB推断为const double * const*/
    decltype(cptrTempA) dclTempB = &ctempA;
    /*4.输出为4（32位计算机）和5*/
    cout<<sizeof(dclTempB)<<"    "<<*dclTempB<<endl;
    /*5.保留顶层const，不能修改指针指向的对象，编译不过*/
    dclTempB = &ctempB;
    /*6.保留底层const，不能修改指针指向的对象的值，编译不过*/
    *dclTempB = 7.0;
```C

* 与引用结合
```C
int tempA = 0, &refTempA = tempA;

    /*1.dclTempA为引用，绑定到tempA*/
    decltype(refTempA) dclTempA = tempA;
    /*2.dclTempB为引用，必须绑定到变量，编译不过*/
    decltype(refTempA) dclTempB = 0;
    /*3.dclTempC为引用，必须初始化，编译不过*/
    decltype(refTempA) dclTempC;
    /*4.双层括号表示引用，dclTempD为引用，绑定到tempA*/
    decltype((tempA)) dclTempD = tempA;
    
    const int ctempA = 1, &crefTempA = ctempA;
    
    /*5.dclTempE为常量引用，可以绑定到普通变量tempA*/
    decltype(crefTempA) dclTempE = tempA;
    /*6.dclTempF为常量引用，可以绑定到常量ctempA*/
    decltype(crefTempA) dclTempF = ctempA;
    /*7.dclTempG为常量引用，绑定到一个临时变量*/
    decltype(crefTempA) dclTempG = 0;
    /*8.dclTempH为常量引用，必须初始化，编译不过*/
    decltype(crefTempA) dclTempH;
    /*9.双层括号表示引用,dclTempI为常量引用，可以绑定到普通变量tempA*/
    decltype((ctempA))  dclTempI = ctempA;
```

* 与指针结合
```C++
int tempA = 2;
int *ptrTempA = &tempA;
/*1.常规使用dclTempA为一个int *的指针*/
decltype(ptrTempA) dclTempA;
/*2.需要特别注意，表达式内容为解引用操作，dclTempB为一个引用，引用必须初始化，故编译不过*/
decltype(*ptrTempA) dclTempB;
```

decltype总结
decltype和auto都可以用来推断类型，但是二者有几处明显的差异：
1.auto忽略顶层const，decltype保留顶层const；
2.对引用操作，auto推断出原有类型，decltype推断出引用；
3.对解引用操作，auto推断出原有类型，decltype推断出引用；
4.auto推断时会实际执行，decltype不会执行，只做分析。
总之在使用中过程中和const、引用和指针结合时需要特别小心。

<br/>

##### <h4 id="constexpr">constexpr</h4>

constexpr意义
将变量声明为constexpr类型以便由编译器来验证变量是否是一个常量表达式（不会改变，在编译过程中就能得到计算结果的表达式）。是一种比const更强的约束，这样可以得到更好的效率和安全性。

constexpr用法
* 修饰函数
```C++
/*1.如果size在编译时能确定，那么返回值就可以是constexpr,编译通过*/
constexpr int getSizeA(int size)
{
    return 4*size;
}
/*2.编译通过，有告警：在constexpr中定义变量*/
constexpr int getSizeB(int size)
{
    int index = 0;
    return 4;
}
/*3.编译通过，有告警：在constexpr中定义变量（这个有点迷糊）*/
constexpr int getSizeC(int size)
{
    constexpr int index = 0;
    return 4;
}
/*4.编译通过，有告警：使用了if语句（使用switch也会告警）*/
constexpr int getSizeD(int size)
{
    if(0)
    {}
    return 4;
}
/*5.定义变量并且没有初始化，编译不过*/
constexpr int getSizeE(int size)
{
    int index;
    return 4;
}
/*6.rand()为运行期函数，不能在编译期确定，编译不过*/
constexpr int getSizeF(int size)
{
    return 4*rand();
}
/*7.使用了for，编译不过*/
constexpr int getSizeG(int size)
{
    for(;0;)
    {}
    return 4*rand();
}
```

* 修改类型
```C++
int tempA;
cin>>tempA;

const int ctempA = 4;
const int ctempB = tempA;
/*1.可以再编译器确定，编译通过*/
constexpr int conexprA = 4;
constexpr int conexprB = conexprA + 1;
constexpr int conexprC = getSizeA(conexprA);
constexpr int conexprD = ctempA;
/*2.不能在编译期决定，编译不过*/
constexpr int conexprE = tempA;
constexpr int conexprF = ctempB;
```

* 修饰指针
```C++
int g_tempA = 4;
const int g_conTempA = 4;
constexpr int g_conexprTempA = 4;

int main(void)
{
    int tempA = 4;
    const int conTempA = 4;
    constexpr int conexprTempA = 4;
    
    /*1.正常运行,编译通过*/
    const int *conptrA = &tempA;
    const int *conptrB = &conTempA;
    const int *conptrC = &conexprTempA;
    /*2.局部变量的地址要运行时才能确认，故不能在编译期决定，编译不过*/
    constexpr int *conexprPtrA = &tempA;
    constexpr int *conexprPtrB = &conTempA
    constexpr int *conexprPtrC = &conexprTempA;
    /*3.第一个通过，后面两个不过,因为constexpr int *所限定的是指针是常量，故不能将常量的地址赋给顶层const*/
    constexpr int *conexprPtrD = &g_tempA;
    constexpr int *conexprPtrE = &g_conTempA
    constexpr int *conexprPtrF = &g_conexprTempA;
    /*4.局部变量的地址要运行时才能确认，故不能在编译期决定，编译不过*/
    constexpr const int *conexprConPtrA = &tempA;
    constexpr const int *conexprConPtrB = &conTempA;
    constexpr const int *conexprConPtrC = &conexprTempA;
    /*5.正常运行，编译通过*/
    constexpr const int *conexprConPtrD = &g_tempA;
    constexpr const int *conexprConPtrE = &g_conTempA;
    constexpr const int *conexprConPtrF = &g_conexprTempA;

    return 0;
}
 ```
 
* 修饰引用
```C++
int g_tempA = 4;
const int g_conTempA = 4;
constexpr int g_conexprTempA = 4;

int main(void)
{
    int tempA = 4;
    const int conTempA = 4;
    constexpr int conexprTempA = 4;
    /*1.正常运行，编译通过*/
    const int &conptrA = tempA;
    const int &conptrB = conTempA;
    const int &conptrC = conexprTempA;
    /*2.有两个问题：一是引用到局部变量，不能再编译器确定；二是conexprPtrB和conexprPtrC应该为constexpr const类型，编译不过*/
    constexpr int &conexprPtrA = tempA;
    constexpr int &conexprPtrB = conTempA 
    constexpr int &conexprPtrC = conexprTempA;
    /*3.第一个编译通过，后两个不通过，原因是因为conexprPtrE和conexprPtrF应该为constexpr const类型*/
    constexpr int &conexprPtrD = g_tempA;
    constexpr int &conexprPtrE = g_conTempA;
    constexpr int &conexprPtrF = g_conexprTempA;
    /*4.正常运行，编译通过*/
    constexpr const int &conexprConPtrD = g_tempA;
    constexpr const int &conexprConPtrE = g_conTempA;
    constexpr const int &conexprConPtrF = g_conexprTempA;

    return 0;
}
```

<br/>

##### <h4 id="char16_t">char16_t和char32_t</h4>

char16_t和char32_t:

产生原因：
随着编程人员日益的熟悉Unicode，类型wchar_t显然已经满足不了需求，在计算机系统上进行的编码字符和字符串编码时，仅仅使用Unicode码点显然是不够的。
比如：如果在进行字符串编码时，如果有特定长度和符号特征的类型将很有帮助，而类型wchar_t的长度和符号特征随实现而已。
因此C++11新增了类型char16_t,char32_t。

char16_t:无符号类型，长16位，
char32_t无符号类型，长32位

C++11使用前缀u表示char16_t字符常量和字符串常量如：u‘L’；u“lilili”;
C++11使用前缀U表示char32_t字符常量和字符串常量如：U'L';U"lilili";

类型char16_t与/u00F6形式的通用字符名匹配，
类型char32_t与/U0000222B形式的通用字符名匹配。
前缀u和U分别指出字符字面值的类型为char16_t和char32_t。

注意：
如果你在VS中使用char16_t或者char32_t的话，不要加前缀u或者U只能加前缀L.

<br/>

##### <h4 id="alignof">alignof和alignas</h4>

C++11新引入操作符alignof， 对齐描述符alignas，基本对齐值 alignof(std::max_align_t)

alignas可以接受常量表达式和类型作为参数，可以修饰变量、类的数据成员等，不能修饰位域和用register申明的变量。一般往大对齐。

```C++
struct s3
{
    char s;
    double d;
    int i;
};
 
 
struct s11
{
    alignas(16) char s;
    int i;
};
 
struct s12
{
    alignas(16) char s;
    int i;
};
 
 
// alignof
cout << "-------------------alignof---------------------" << endl;
// 基本对齐值
cout << "alignof(std::max_align_t)	" << alignof(std::max_align_t) << endl;
cout << endl;
cout << "-------basic type" << endl;
cout << "alignof(char)		" << alignof(char) << endl;
cout << "alignof(int)		" << alignof(int) << endl;
cout << "alignof(double)	" << alignof(double) << endl;
 
cout << endl;
cout << "-------struct" << endl;
cout << "alignof(s1)		" << alignof(s1) << endl;
cout << "alignof(s2)		" << alignof(s2) << endl;
cout << "alignof(s3)		" << alignof(s3) << endl;
 
cout << endl;
cout << endl;
 
// alignas
cout << "-------------------alignas---------------------" << endl;
cout << "alignof(s1)		" << alignof(s1) << endl;
cout << "alignof(s11)		" << alignof(s11) << endl;
cout << "alignof(s12)		" << alignof(s12) << endl;
 
cout << "sizeof(s1)    	" << sizeof(s1) << endl;
cout << "sizeof(s11)	" << sizeof(s11) << endl;
cout << "sizeof(s12)	" << sizeof(s12) << endl;
```

//结果如下：
```C++
-------------------alignof---------------------
alignof(std::max_align_t)	8

-------basic type
alignof(char)	1
alignof(int)	4
alignof(double)	8

-------struct
alignof(s1)	4
alignof(s2)	8
alignof(s3)	8


-------------------alignas---------------------
alignof(s1)	4
alignof(s11)	16
alignof(s12)	16
sizeof(s1)	4
sizeof(s11)	16
sizeof(s12)	16
```
