int g_tempA = 4;
const int g_conTempA = 4;
constexpr int g_conexprTempA = 4;

int main(void)
{
    int tempA = 4;
    const int conTempA = 4;
    constexpr int conexprTempA = 4;
    
    /*1.正常运行,编译通过*/
    const int *conptrA = &tempA;
    const int *conptrB = &conTempA;
    const int *conptrC = &conexprTempA;
    /*2.局部变量的地址要运行时才能确认，故不能在编译期决定，编译不过*/
    //constexpr int *conexprPtrA = &tempA;
    //constexpr int *conexprPtrB = &conTempA
    //constexpr int *conexprPtrC = &conexprTempA;
    /*3.第一个通过，后面两个不过,因为constexpr int *所限定的是指针是常量，故不能将常量的地址赋给顶层const*/
    constexpr int *conexprPtrD = &g_tempA;
    constexpr int *conexprPtrE = &g_conTempA
    constexpr int *conexprPtrF = &g_conexprTempA;
    /*4.局部变量的地址要运行时才能确认，故不能在编译期决定，编译不过*/
    //constexpr const int *conexprConPtrA = &tempA;
    //constexpr const int *conexprConPtrB = &conTempA;
    //constexpr const int *conexprConPtrC = &conexprTempA;
    /*5.正常运行，编译通过*/
    constexpr const int *conexprConPtrD = &g_tempA;
    constexpr const int *conexprConPtrE = &g_conTempA;
    constexpr const int *conexprConPtrF = &g_conexprTempA;

    return 0;
}
