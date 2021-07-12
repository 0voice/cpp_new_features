#include <iostream>
 
int main()
{
  
  alignas(double) unsigned char c[1024];	//字符数组，但是却以double数据的形式对齐数据
  alginas(16) char d[100];				        //以16字节对齐
  
  return 0;
}
