#include <iostream>
#include <set>

using namespace std;

int main ()
{
  set<string> myset= {"Java", "C++","SQL"};

  // 显示内容:
  for (auto it = myset.cbegin(); it != myset.cend(); ++it)
    cout <<*it << '\n';
    
  return 0;
}
