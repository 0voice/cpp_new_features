#include<compare>
int main()
{
  std::strong_ordering so = 55 <=> 10;

  so < 0; // Fine
  so < 1; // Fails
}
