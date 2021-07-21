// any type that is weakly ordered
struct Weak {
    bool operator==(Weak const&) const;
    std::weak_ordering operator<=>(Weak const&) const;
};

struct Foo {
    Weak w;
    int i;
    auto operator<=>(Foo const&) const = default;
};
