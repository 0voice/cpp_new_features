#include <iostream>
#include <memory>
 
template <std::size_t N>
struct MyAllocator
{
    char data[N];
    void* p;
    std::size_t sz;
    MyAllocator() : p(data), sz(N) {}
    template <typename T>
    T* aligned_alloc(std::size_t a = alignof(T))
    {
        if (std::align(a, sizeof(T), p, sz))
        {
            T* result = reinterpret_cast<T*>(p);
            p = (char*)p + sizeof(T);
            sz -= sizeof(T);
            return result;
        }
        return nullptr;
    }
};
 
int main()
{
    MyAllocator<64> a;
 
    // allocate a char
    char* p1 = a.aligned_alloc<char>();
    if (p1)
        *p1 = 'a';
    std::cout << "allocated a char at " << (void*)p1 << '\n';
 
    // allocate an int
    int* p2 = a.aligned_alloc<int>();
    if (p2)
        *p2 = 1;
    std::cout << "allocated an int at " << (void*)p2 << '\n';
 
    // allocate an int, aligned at 32-byte boundary
    int* p3 = a.aligned_alloc<int>(32);
    if (p3)
        *p3 = 2;
    std::cout << "allocated an int at " << (void*)p3 << " (32 byte alignment)\n";
}
