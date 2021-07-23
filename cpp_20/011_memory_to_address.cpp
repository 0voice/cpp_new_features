template<class T>
class P1 {
public:
    explicit P1(T* p)
        : p_(p) { }

    T* operator->() const noexcept {
        return p_;
    }

private:
    T* p_;
};

template<class T>
class P2 {
public:
    explicit P2(T* p)
        : p_(p) { }

    P1<T> operator->() const noexcept {
        return p_;
    }

private:
    P1<T> p_;
};

template<class T>
class P3 {
public:
    explicit P3(T* p)
        : p_(p) { }

    T* get() const noexcept {
        return p_;
    }

private:
    T* p_;
};

namespace std {

    template<class T>
    struct pointer_traits<P3<T> > {
        static T* to_address(const P3<T>& p) noexcept {
            return p.get();
        }
    };
} // std

template<class T>
class P4 {
public:
    explicit P4(T* p)
        : p_(p) { }

    T* operator->() const noexcept {
        return nullptr;
    }

    T* get() const noexcept {
        return p_;
    }

private:
    int* p_;
};

namespace std {

    template<class T>
    struct pointer_traits<P4<T> > {
        static T* to_address(const P4<T>& p) noexcept {
            return p.get();
        }
    };

} // std

void test_to_address02() {
    int i = 0;
    assert(std::to_address(&i) == &i);
    int* p = &i;
    assert(std::to_address(p) == &i);
    P1<int> p1(&i);
    assert(std::to_address(p1) == &i);
    P2<int> p2(&i);
    assert(std::to_address(p2) == &i);
    P3<int> p3(&i);
    assert(std::to_address(p3) == &i);
    P4<int> p4(&i);
    assert(std::to_address(p4) == &i);
}
