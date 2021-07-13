#### <h2 id="cpp_11_new_keywords">C++11新增关键字</h2>

##### <h4 id="cpp_11_new_keywords">thread_local</h4>

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

```C
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


##### static_assert

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

##### nullptr

##### noexcept

##### decltype

##### constexpr

##### char32_t

##### char16_t

##### alignof

##### alignas
