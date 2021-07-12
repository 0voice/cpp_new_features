//_cplusplus宏经常出现在C与C++混合编写的代码中， 一般放在头文件中，比如

#ifdef __cplusplus
extern "C" {
#endif
 
//some code ...
 
#ifdef __cplusplus
}
#endif
