template <typename T>
struct myfuture: std::future<T>
{
    myfuture(std::future<T> && a):std::future<T>(std::move(a))
    {
         std::cout<<"myfuture"<<std::endl;
    }
};
template <typename T, typename... Args>
requires(!std::is_void_v<T> && !std::is_reference_v<T>)
struct std::coroutine_traits<myfuture<T>, Args...> 
{
  struct promise_type:std::promise<T> 
  {
    std::suspend_never initial_suspend() const noexcept { std::cout<<"initial_suspend"<<std::endl;  return {}; }
    std::suspend_never final_suspend() const noexcept {   std::cout<<"final_suspend"<<std::endl; return {}; }
    void unhandled_exception() noexcept { this->set_exception(std::current_exception()); }    
    myfuture<T> get_return_object() noexcept 
    {
        std::cout<<"get_return_object"<<std::endl;
        return this->get_future();
    }
    
    void return_value(const T &value) noexcept(std::is_nothrow_copy_constructible_v<T>) 
    {
        std::cout<<"return_value"<<std::endl;        
      this->set_value(value);
    }
    void return_value(T &&value) noexcept(std::is_nothrow_move_constructible_v<T>)
    {
      this->set_value(std::move(value));
    }
  };
};
myfuture<int> co_fun(float a, float b) 
{
  std::cout << "============co_fun"<<std::endl;        
  co_return (int)(a * b);
}
int main() 
{
   auto res1= co_fun(1.1,2.0);
   std::cout << "============co_fun return:"<<res1.get()<<std::endl;     
}
