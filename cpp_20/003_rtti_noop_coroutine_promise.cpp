#include <coroutine>
#include <iostream>
#include <optional>
 
template<std::movable T>
class Generator {
public:
    struct promise_type {
        Generator<T> get_return_object() {
            return Generator{Handle::from_promise(*this)};
        }
        static std::suspend_always initial_suspend() noexcept {
            return {}; 
        }
        static std::suspend_always final_suspend() noexcept { 
            return {}; 
        }
        std::suspend_always yield_value(T value) noexcept {
            current_value = std::move(value);
            return {};
        }
        // Disallow co_await in generator coroutines.
        void await_transform() = delete;
        [[noreturn]]
        static void unhandled_exception() {
            throw;
        }
 
        std::optional<T> current_value;
    };
 
    using Handle = std::coroutine_handle<promise_type>;
 
    explicit Generator(const Handle coroutine) : 
        m_coroutine{coroutine}
    {}
 
    Generator() = default;
    ~Generator() { 
        if (m_coroutine) {
            m_coroutine.destroy(); 
        }
    }
 
    Generator(const Generator&) = delete;
    Generator& operator=(const Generator&) = delete;
 
    Generator(Generator&& other) noexcept : 
        m_coroutine{other.m_coroutine}
    { 
        other.m_coroutine = {}; 
    }
    Generator& operator=(Generator&& other) noexcept {
        if (this != &other) {
            if (m_coroutine) {
                m_coroutine.destroy();
            }
            m_coroutine = other.m_coroutine;
            other.m_coroutine = {};
        }
        return *this;
    }
 
    // Range-based for loop support.
    class Iter {
    public:
        void operator++() { 
            m_coroutine.resume(); 
        }
        const T& operator*() const { 
            return *m_coroutine.promise().current_value; 
        }        
        bool operator==(std::default_sentinel_t) const { 
            return !m_coroutine || m_coroutine.done(); 
        }
 
        explicit Iter(const Handle coroutine) : 
            m_coroutine{coroutine}
        {}
 
    private:
        Handle m_coroutine;
    };
 
    Iter begin() {
        if (m_coroutine) {
            m_coroutine.resume();
        } 
        return Iter{m_coroutine};
    }
    std::default_sentinel_t end() { 
        return {}; 
    }
 
private:
    Handle m_coroutine;
};
 
template<std::integral T>
Generator<T> range(T first, const T last) {
    while (first < last) {
        co_yield first++;
    }
}
 
int main() {
    for (const char i : range(65, 91)) {
        std::cout << i << ' ';
    }
    std::cout << '\n';
}
