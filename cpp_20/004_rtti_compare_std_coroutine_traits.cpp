#include <chrono>
#include <coroutine>
#include <exception>
#include <future>
#include <iostream>
#include <thread>
#include <type_traits>
 
// Enable the use of std::future<T> as a coroutine type
// by using a std::promise<T> as the promise type.
template <typename T, typename... Args>
requires(!std::is_void_v<T> && !std::is_reference_v<T>)
struct std::coroutine_traits<std::future<T>, Args...> {
  struct promise_type : std::promise<T> {
    std::future<T> get_return_object() noexcept {
      return this->get_future();
    }
 
    std::suspend_never initial_suspend() const noexcept { return {}; }
    std::suspend_never final_suspend() const noexcept { return {}; }
 
    void return_value(const T &value)
    noexcept(std::is_nothrow_copy_constructible_v<T>) {
      this->set_value(value);
    }
    void return_value(T &&value)
    noexcept(std::is_nothrow_move_constructible_v<T>) {
      this->set_value(std::move(value));
    }
    void unhandled_exception() noexcept {
      this->set_exception(std::current_exception());
    }
  };
};
 
// Same for std::future<void>.
template <typename... Args>
struct std::coroutine_traits<std::future<void>, Args...> {
  struct promise_type : std::promise<void> {
    std::future<void> get_return_object() noexcept {
      return this->get_future();
    }
 
    std::suspend_never initial_suspend() const noexcept { return {}; }
    std::suspend_never final_suspend() const noexcept { return {}; }
 
    void return_void() noexcept {
      this->set_value();
    }
    void unhandled_exception() noexcept {
      this->set_exception(std::current_exception());
    }
  };
};
 
// Allow co_await'ing std::future<T> and std::future<void>
// by naively spawning a new thread for each co_await.
template <typename T>
auto operator co_await(std::future<T> future) noexcept
requires(!std::is_reference_v<T>) {
  struct awaiter : std::future<T> {
    bool await_ready() const noexcept {
      using namespace std::chrono_literals;
      return this->wait_for(0s) != std::future_status::timeout;
    }
    void await_suspend(std::coroutine_handle<> cont) const {
      std::thread([this, cont] {
        this->wait();
        cont();
      }).detach();
    }
    T await_resume() { return this->get(); }
  };
  return awaiter{std::move(future)};
}
 
// Utilize the infrastructure we have established.
std::future<int> compute() {
  int a = co_await std::async([] { return 6; });
  int b = co_await std::async([] { return 7; });
  co_return a * b;
}
 
std::future<void> fail() {
  throw std::runtime_error("bleah");
  co_return;
}
 
int main() {
  std::cout << compute().get() << '\n';
 
  try {
    fail().get();
  } catch (const std::runtime_error &e) {
    std::cout << "error: " << e.what() << '\n';
  }
}
