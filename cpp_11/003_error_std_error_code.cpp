#include <iostream>
#include <system_error>

enum class YourErrorCode {
    kSuccess = 0,  // 别忘了 0 应该表示无错误
    kNetworkError,
    kBadRequest,
    kServerError,
};

// 特化模版，启用对应的重载
namespace std {
template<>
struct is_error_code_enum<YourErrorCode>: true_type {};
}

// 提供工厂函数
// 工厂函数不必要写在 std 中
std::error_code make_error_code(YourErrorCode code)
{
    return {
        static_cast<int>(code),
        std::generic_category(),  // 这里暂时用自带的 category
    };
}

int main()
{
    std::error_code e = YourErrorCode::kBadRequest;
    std::cout << e << '\n';  // 自带一个输出流的重载
}
