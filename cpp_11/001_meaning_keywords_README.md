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



<br />


