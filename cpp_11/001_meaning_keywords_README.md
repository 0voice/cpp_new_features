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

##### <h4 id="default">default</h4>



<br />

##### <h4 id="delete">delete</h4>



<br />

##### <h4 id="export">export</h4>



<br />

##### <h4 id="extern">extern</h4>



<br />

##### <h4 id="inline">inline</h4>



<br />

##### <h4 id="mutable">mutable</h4>



<br />

##### <h4 id="sizeof">sizeof</h4>



<br />

##### <h4 id="struct">struct</h4>



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

<br />


