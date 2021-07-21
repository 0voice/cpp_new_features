namespace detail {
 
template<unsigned int>
struct common_cmpcat_base     { using type = void; };
template<>
struct common_cmpcat_base<0u> { using type = std::strong_ordering; };
template<>
struct common_cmpcat_base<2u> { using type = std::partial_ordering; };
template<>
struct common_cmpcat_base<4u> { using type = std::weak_ordering; };
template<>
struct common_cmpcat_base<6u> { using type = std::partial_ordering; };
 
} // namespace detail
 
template<class...Ts>
struct common_comparison_category :
    detail::common_cmpcat_base<(0u | ... | 
        (std::is_same_v<Ts, std::strong_ordering>  ? 0u :
         std::is_same_v<Ts, std::weak_ordering>    ? 4u :
         std::is_same_v<Ts, std::partial_ordering> ? 2u : 1u)
    )> {};
