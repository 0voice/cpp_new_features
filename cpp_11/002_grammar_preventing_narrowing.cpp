#include <iostream>
 
int main(int argc, char* argv[])
{
  int a = 1.1;
  int b{1};
  //int b{1,1};                                                                                                                                                             
 
  float f1 = 1e40;
  float f2{10.0};
  //float f2{1e40};                                                                                                                                                         
 
  const int x = 1024, y = 1;
 
  int dd{x};
  char c = x;
  //  char d{x};                                                                                                                                                            
 
 
  char e = y;
  char f{y};
 
  return 0;
}

//g++ -std=c++11  002_grammar_preventing_narrowing.cpp -o preventing_narrowing 编译
 
