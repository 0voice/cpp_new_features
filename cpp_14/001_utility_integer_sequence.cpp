#include <tuple>
#include <iostream>
#include <utility>

template<typename F, typename T, std::size_t... I>
decltype(auto) apply_impl(F f, const T& t, std::index_sequence<I...>)
{
  return f(std::get<I>(t)...);
}

template<typename F, typename T>
decltype(auto) apply(F f, const T& t)
{
    return apply_impl(f, t, std::make_index_sequence<std::tuple_size<T>::value>());
}


int main()
{
  auto tp = std::make_tuple(1, 'A', 1.2);

  auto ld = [](int arg1, char arg2, double arg3)->int{
      std::cout << "call func(" << arg1 << ", " << arg2 << ", " << arg3 << ")" << std::endl;
      return 0;
  };

  int ret= apply(ld, tp);
}
