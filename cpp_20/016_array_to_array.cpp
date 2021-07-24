template<class T, size_t N, class V>
std::array<T, N> to_array(const V& v)
{
    assert(v.size() == N);
    std::array<T, N> d;
    std::copy(v.begin(), v.end(), d.data());
    return d;
}
