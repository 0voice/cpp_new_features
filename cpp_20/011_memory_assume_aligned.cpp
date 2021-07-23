void f(int* p) {
   int* p1 = std::assume_aligned<256>(p);
   // 用 p1 而非 p ，以确保从对齐假设受益。
   // 然而，若 p 未对齐则程序有未定义行为，无关乎是否使用 p1 。
}
