struct compare_three_way {
    template <class _Ty1, class _Ty2>
        requires three_way_comparable_with<_Ty1, _Ty2> // TRANSITION, GH-489
    constexpr auto operator()(_Ty1&& _Left, _Ty2&& _Right) const
        noexcept(noexcept(_STD forward<_Ty1>(_Left) <=> _STD forward<_Ty2>(_Right))) /* strengthened */ {
        return _STD forward<_Ty1>(_Left) <=> _STD forward<_Ty2>(_Right);
    }

    using is_transparent = int;
};
