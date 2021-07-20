#include <iostream>
#include <utility>
#include <vector>
#include <iterator>
 
class stream
{
  public:
 
   using flags_type = int;
 
  public:
 
    flags_type flags() const
    { return flags_; }
 
    /// 以 newf 替换 flags_ 并返回旧值。
    flags_type flags(flags_type newf)
    { return std::exchange(flags_, newf); }
 
  private:
 
    flags_type flags_ = 0;
};
 
void f() { std::cout << "f()"; }
 
int main()
{
   stream s;
 
   std::cout << s.flags() << '\n';
   std::cout << s.flags(12) << '\n';
   std::cout << s.flags() << "\n\n";
 
   std::vector<int> v;
 
   // 因为第二模板形参有默认值，故能以花括号初始化列器表为第二参数。
   // 下方表达式等价于 std::exchange(v, std::vector<int>{1,2,3,4});
 
   std::exchange(v, {1,2,3,4});
 
   std::copy(begin(v),end(v), std::ostream_iterator<int>(std::cout,", "));
 
   std::cout << "\n\n";
 
   void (*fun)();
 
   // 模板形参的默认值亦使得能以通常函数为第二参数。
   // 下方表达式等价于 std::exchange(fun, static_cast<void(*)()>(f))
   std::exchange(fun,f);
   fun();
}
