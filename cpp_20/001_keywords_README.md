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

##### <h4 id="consteval">consteval</h4>

##### <h4 id="co_await">co_await</h4>

##### <h4 id="co_yield">co_yield</h4>

##### <h4 id="requires">requires</h4>

#### <h2 id="cpp_20_meaning_keywords">C++20含义变化或者新增含义关键字</h2>

##### <h5 id="export">export</h5>
