struct From;
struct To {
    explicit To(From) = delete;
};
struct From {
    operator To();
};

static_assert(std::is_convertible_v<From, To>);
static_assert(not std::convertible_to<From, To>);
