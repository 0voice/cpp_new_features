enum class MyErrorCondition {
    kChenggong,
    kWangluoCuowu,
    kQingqiuCuowu,
    kFuwuqiCuowu,
};

class MyErrorCategory: public std::error_category
{
public:
    
    static MyErrorCategory const& instance() {
        static MyErrorCategory instance;
        return instance;
    }

    char const *name() const noexcept override {
        return "MyErrorCategory";
    }

    std::string message(int code) const override {
        return "Message";
    }

    bool equivalent(std::error_code const& code, int condition) const noexcept override {

        auto const& yourErrorCodeCategory = std::error_code(YourErrorCode{}).category();

        if (code.category() == yourErrorCodeCategory) {
            switch (static_cast<MyErrorCondition>(condition)) {
            case MyErrorCondition::kChenggong:
                return code == YourErrorCode::kSuccess;
            case MyErrorCondition::kWangluoCuowu:
                return code == YourErrorCode::kNetworkError;
            case MyErrorCondition::kQingqiuCuowu:
                return code == YourErrorCode::kBadRequest;
            case MyErrorCondition::kFuwuqiCuowu:
                return code == YourErrorCode::kServerError;
            }
        }
        return false;
    }
};

// error_condition 同样需要特化模版启动重载
namespace std {
    template<>
    struct is_error_condition_enum<MyErrorCondition>: true_type {};
}

// error_condition 同样可以通过工厂函数构造
std::error_condition make_error_condition(MyErrorCondition code)
{
    return {static_cast<int>(code), MyErrorCategory::instance()};
}


int main()
{
    std::error_code code = YourErrorCode::kNetworkError;
    std::error_condition condition = MyErrorCondition::kWangluoCuowu;
    std::cout << (code == condition) << '\n';
}
