#### <h2 id="cpp_20_new_keywords">C++20新增关键字</h2>

##### <h4 id="char8_t">char8_t</h4>

char8_t - UTF-8 字符表示的类型，要求大到足以表示任何 UTF-8 编码单元（ 8 位）。它与 unsigned char 具有相同的大小、符号性和对齐（从而与 char 和 signed char 具有相同的大小和对齐），但它是独立的类型。

##### <h4 id="concept">concept</h4>

C++20引进了概念（Concepts）这一新特性。
概念是指给一组要求（Requirements）所起的名字。概念是一种具名谓词。
使用这些要求和概念可以给函数和类模板的参数加上约束（Constraints）。

###### <h6 id="concept">引入概念的目的</h6>

* 约束成为模板界面的一部分
* 基于概念的重载成为可能
* 模板的出错信息更加友好
* 没有约束的 auto 和有约束的概念得到统一

###### <h6 id="concept">约束的种类</h6>

约束有三种类型
* 合取（conjunction）
  约束的合取:使用 && 运算符
* 析取（disjunction）
  约束的析取:使用 || 运算符
* 原子约束（atomic constraint）

###### <h6 id="concept">Requires 子句</h6>

Requires 子句由关键字 requires 后加上常量表达式构成，用于指定约束。

###### <h6 id="concept">Requires 表达式</h6>

Requires 表达式是 bool 类型的右值表达式，用于表达约束。其形式为
requires ( 形参列表(可选) ) { 要求序列 }

要求序列中的要求有以下四种形式：

* 简单要求（simple requirement）
  * 简单要求是任意表达式语句。
* 类型要求（type requirement）
  * 类型要求是关键字 typename 加一个类型名。
* 复合要求（compound requirement）
  * { 表达式 } noexcept(可选) 返回类型要求(可选) ;
  * 返回类型要求 - -> 类型约束
* 嵌套要求（nested requirement）
  * reuires 约束表达式 ;

###### <h6 id="concept">Concepts的定义</h6>
```C++
template < template-parameter-list >
concept  concept-name = constraint-expression;
```
其中，constraint-expression是一个可以被eval为bool的表达式或者编译期函数。 在使用定义好的concept时，constraint-expression会根据上面template-parameter-list传入的类型，执行编译期计算，判断使用该concept的模板定义是否满足。 如果不满足，则编译期会给定一个具有明确语义的错误，即 这个concept没有匹配成功啦啦这种。 注意到，上述匹配的行为都是在编译期完成的，因此concept其实是zero-cost的。 举个例子来描述一下，最基本的concept的定义。
```C++
// 一个永远都能匹配成功的concept
template <typename T>
concept always_satisfied = true; 

// 一个约束T只能是整数类型的concept，整数类型包括 char, unsigned char, short, ushort, int, unsinged int, long等。
template <typename T>
concept integral = std::is_integral_v<T>;

// 一个约束T只能是整数类型，并且是有符号的concept
template <typename T>
concept signed_integral = integral<T> && std::is_signed_v<T>;
```
接下来，我们再简单示例一下如何使用一个concept
```C++
// 任意类型都能匹配成功的约束，因此mul只要支持乘法运算符的类型都可以匹配成功。
template <always_satisfied T>
T mul(T a, T b) {
    return a * b;
}

// 整型才能匹配add函数的T
template <integral T>
T add(T a, T b) {
    return a + b;
}

// 有符号整型才能匹配subtract函数的T
template <signed_integral T>
T subtract(T a, T b) {
    return a - b;
}

int main() {
    mul(1, 2); // 匹配成功, T => int
    mul(1.0f, 2.0f);  // 匹配成功，T => float

    add(1, -2);  // 匹配成功, T => int
    add(1.0f, 2.0f); // 匹配失败, T => float，而T必须是整型
    subtract(1U, 2U); // 匹配失败，T => unsigned int,而T必须是有符号整型
    subtract(1, 2); // 匹配成功, T => int
}
```

###### <h6 id="concept">Concept的使用方法</h6>
与auto关键字的一些结合方式
```C++
// 约束函数模板方法1
template <my_concept T>
void f(T v);

// 约束函数模板方法2
template <typename T>
requires my_concept<T>
void f(T v);

// 约束函数模板方法3
template <typename T>
void f(T v) requires my_concept<T>;

// 直接约束C++14的auto的函数参数
void f(my_concept auto v);

// 约束模板的auto参数
template <my_concept auto v>
void g();

// 约束auto变量
my_concept auto foo = ...;
```

Concept当然也可以用在lambda函数上，使用方法跟上面一样
```C++
// 约束lambda函数的方法1
auto f = []<my_concept T> (T v) {
  // ...
};
// 约束lambda函数的方法2
auto f = []<typename T> requires my_concept<T> (T v) {
  // ...
};
// 约束lambda函数的方法3
auto f = []<typename T> (T v) requires my_concept<T> {
  // ...
};
// auto函数参数约束
auto f = [](my_concept auto v) {
  // ...
};
// auto模板参数约束
auto g = []<my_concept auto v> () {
  // ...
};
```


##### <h4 id="consteval">consteval</h4>

##### <h4 id="co_await">co_await</h4>

##### <h4 id="co_yield">co_yield</h4>

##### <h4 id="requires">requires</h4>

#### <h2 id="cpp_20_meaning_keywords">C++20含义变化或者新增含义关键字</h2>

##### <h5 id="export">export</h5>
