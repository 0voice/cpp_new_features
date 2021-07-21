using CR = std::iter_common_reference_t<std::ranges::iterator_t<R>>;
std::ranges::sort(r, std::less<CR>{});
