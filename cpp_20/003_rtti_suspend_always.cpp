struct promise_type {
    int current_value;
    static wrapper get_return_object_on_allocation_failure() noexcept { return wrapper{nullptr}; }
    wrapper get_return_object() { return wrapper{handle::from_promise(*this)}; }
    auto initial_suspend() { return std::suspend_always{}; }
    auto final_suspend() noexcept { return std::suspend_always{}; }
    void unhandled_exception() { std::terminate(); }
    void return_void() {}
    auto yield_value(int value) {
        current_value = value;
        return std::suspend_always{};
    }
};
