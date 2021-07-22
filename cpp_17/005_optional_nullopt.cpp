std::vector<int>> a;
std::optional<std::vector<int>>& test(int b)
{
    a.clear();
    a.push_back(b);
    if(b)
         return a;
    else
         return std::nullopt;
}
