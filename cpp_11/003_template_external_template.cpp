// test.h
template <typename T> 
void fun(T) { }

// test1.cpp
#include "test.h" 
void test1() 
{ 
    fun(1); 
}

// test2.cpp
#include "test.h" 
void test2()
{
    fun(2);
}
