class Base {
public:
    auto operator<=>(const Base&) const = default;
};
std::strong_ordering operator <=>(const std::string& a, const std::string& b) {
    int cmp = a.compare(b);
    if (cmp < 0) return std::strong_ordering::less;
    else if (cmp > 0) return std::strong_ordering::greater;
    else return std::strong_ordering::equivalent;
}
class TotallyOrdered : Base {
    std::string tax_id;
    std::string first_name;
    std::string last_name;
public:
    TotallyOrdered(const std::string& id, const std::string& first, const std::string& last) 
        :tax_id(id), first_name(first), last_name(last) {}
    // 定制 operator<=>，因为我们想先比较姓
    std::strong_ordering operator<=>(const TotallyOrdered& that) const {
        if (auto cmp = (Base&)(*this) <=> (Base&)that; cmp != 0) return cmp;
        if (auto cmp = last_name <=> that.last_name; cmp != 0) return cmp;
        if (auto cmp = first_name <=> that.first_name; cmp != 0) return cmp;
        return tax_id <=> that.tax_id;
    }
    // ……非比较函数……
};
void test_compare02() {
    // 编译器生成全部四个关系运算符
    TotallyOrdered to1{ "1", "first1", "last1" }, to2{ "2", "first2", "last2" };
    std::set<TotallyOrdered> s; // ok
    s.insert(to1); // ok
    s.insert(to2);
    if (to1 <= to2) { // ok，调用一次 <=>
        std::cout << "to1 <= to2\n";
    }
    else {
        std::cout << "!(to1 <= to2)\n";
    }
}
