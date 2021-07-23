class strong_int {
public:
    using integral_type = int;

    explicit strong_int( integral_type ) noexcept;

    explicit operator integral_type() const noexcept;

    constexpr auto operator<=>( const strong_int& ) const noexcept;

private:
    integral_type m_value;
};

constexpr auto operator<=>( const strong_int&, const int& ) noexcept;
constexpr auto operator<=>( const int&, const strong_int& ) noexcept;
