# cpp_new_features
2021年最新整理，500个c++11/14/17/20的新特性代码案例，包含lambda匿名函数，右值引用，auto，coroutine库，synchronization库

-----------

# C++新特性

* [C++11新特性](#cpp_11)
* [C++14新特性](#cpp_14)
* [C++17新特性](#cpp_17)
* [C++20新特性](#cpp_20)
* [C++23新特性](#cpp_23)

<br/>
<br/>

# C++关键字
* <img src="https://www.0voice.com/uiwebsite/cpp_new_features/cpp_keywords.png"  alt="C++关键字" />
* (1) — meaning changed or new meaning added in C++11.
* (2) — meaning changed in C++17.
* (3) — meaning changed in C++20.

<h2 id="cpp_11">C++11新特性</h2>

### Language support library

Type support  −  traits
Program utilities
numeric_limits  −  type_info
initializer_list

### General utilities library

Smart pointers and allocators
unique_ptr
shared_ptr
Date and time
Function objects  −  hash
Utility functions
pair  −   tuple

### Strings library

basic_string
byte  −  multibyte  −  wide

### Containers library

array (C++11)  −  vector  −  deque
map  −  unordered_map (C++11)
set  −  unordered_set (C++11)

### Numerics library

### Input/output library

### Filesystem library


### Regular expressions library

### Atomic operations library

### Thread support library






#### 关键字

```C
alignas
alignof
char16_t
char32_t
constexpr
decltype
noexcept
nullptr
static_assert
thread_local
```

#### 新特性

<h7>所有细分出来的新特性(95个)</h7>

* [long long 类型](#cpp_11_01)
* 列表初始化
* nullptr 常量
* constexpr 变量
* 类型别名声明
* auto 类型指示符
* decltype 类型指示符
* 类内初始化
* 使用auto或decltype缩写类型
* 范围for语句
* 定义vector对象的vector
* vector对象的列表初始化
* 容器的cbegin和cend函数
* 标准库begin和end函数
* 使用auto和decltype简化声明
* 除法的舍入规则
* 用大括号包围的值列表赋值
* 将sizeof用于类成员
* 范围for语句
* 标准库initializer_list类
* 列表初始化返回值
* 定义尾置返回类型
* 使用decltype简化返回类型定义
* constexpr函数
* 使用=default生成默认构造函数
* 类对象成员的类内初始化
* 委托构造函数
* constexpr构造函数
* 用string对象处理文件名
* array和forward_list容器
* 容器的cbegin和cend函数
* 容器的列表初始化
* 容器的费成员函数swap
* 容器insert成员的返回类型
* 容器的emplace成员
* shrink_to_fit
* string的数值转换函数
* lambda表达式
* lambda表达式中的尾置返回类型
* 标准库bind函数
* 关联容器的列表初始化
* 列表初始化pair的返回类型
* pair的列表初始化
* 无序容器
* 智能指针
* shared_ptr类
* 动态分配对象的列表初始化
* auto和动态分配
* unique_ptr类
* weak_ptr类
* 范围for语句不能应用于动态内存分配数据
* 动态分配数组的列表初始化
* auto不能用于分配数组
* allocator::construct可使用任意构造函数
* 将=default用于拷贝控制成员
* 使用=delete阻止拷贝类对象
* 用移动类对象代替拷贝类对象
* 右值引用
* 标准库move函数
* 移动构造函数和移动赋值
* 移动构造函数通常应该是noexcept
* 移动迭代器
* 引用限定成员函数
* fcuntion类模板
* explicit类型转换运算符
* 虚函数的override指示符
* 通过定义类为final来阻止继承
* 虚函数的override和final指示符
* 删除的拷贝控制和继承
* 继承的构造函数
* 声明模板类型形参为友员
* 模板类型别名
* 模板函数的默认模板参数
* 实例化的显式控制
* 模板函数与尾置返回类型
* 引用折叠规则
* 用static_cast将左值转换为右值
* 标准库forward函数
* 可变参数模板
* sizeof...运算符
* 可变参数模板与转发
* 标准库tuple类模板
* 新的bitset运算
* 正则表达式库
* 随机数库
* 浮点数格式控制
* noexcept异常指示符
* noexcept运算符
* 内联命名空间
* 继承的构造函数与多重继承
* 有作用域的enum
* 说明类型用于保存enum对象
* enum的前置声明
* 标准库mem_fn类模板
* 类类型的union成员

<h2 id="cpp_14">C++14新特性</h2>

* [函数返回值类型推导](https://github.com/0voice/cpp_new_features/blob/main/cpp_14/README.md#cpp_14_01)
* [lambda参数auto](https://github.com/0voice/cpp_new_features/blob/main/cpp_14/README.md#cpp_14_02)
* [变量模板](https://github.com/0voice/cpp_new_features/blob/main/cpp_14/README.md#cpp_14_03)
* [别名模板](https://github.com/0voice/cpp_new_features/blob/main/cpp_14/README.md#cpp_14_04)
* [[[deprecated]]标记](https://github.com/0voice/cpp_new_features/blob/main/cpp_14/README.md#cpp_14_05)
* [二进制字面量与整形字面量分隔符](https://github.com/0voice/cpp_new_features/blob/main/cpp_14/README.md#cpp_14_06)
* [std::make_unique](https://github.com/0voice/cpp_new_features/blob/main/cpp_14/README.md#cpp_14_07)
* [std::shared_timed_mutex与std::shared_lock](https://github.com/0voice/cpp_new_features/blob/main/cpp_14/README.md#cpp_14_08)
* [std::integer_sequence](https://github.com/0voice/cpp_new_features/blob/main/cpp_14/README.md#cpp_14_09)
* [std::exchange](https://github.com/0voice/cpp_new_features/blob/main/cpp_14/README.md#cpp_14_10)
* [std::quoted](https://github.com/0voice/cpp_new_features/blob/main/cpp_14/README.md#cpp_14_11)

<h2 id="cpp_17">C++17新特性</h2>

### 1 

#### 1.1 

##### 1.1.1 


<h2 id="cpp_20">C++20新特性</h2>

### 1 

#### 1.1 

##### 1.1.1 
