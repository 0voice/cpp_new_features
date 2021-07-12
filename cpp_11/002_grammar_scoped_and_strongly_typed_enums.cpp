//强类型枚举以及c++11对原有枚举类型的扩展
//声明强类型枚举，只需要在enum加上关键字class。
//enum class Type { General, Light, Medium, Heavy };

//优点：
//（1）强作用域，强类型枚举成员的名称不会被输出到其父作用域空间
//（2）转换限制，强类型枚举成员的值不可以与整形隐式地相互转换
//（3）可以指定底层类型。强类型枚举默认的底层类型为int，但也可以显式地指定底层类型。

//比如：
//enum class Type: char { General, Light, Medium, Heavy };

#include <iostream>
using namespace std;

enum class Type { General, Light, Medium, Heavy };
enum class Category { General = 1, Pistol, MachineGun, Cannon };

int main() {
  Type t = Type::Light;
  t = General;  //编译失败，必须使用强类型名称

  if (t == Category::General) //编译失败，必须使用Type中的General
    cout << "General Weapon" << endl;
  if (t > Type::General) //通过编译
    cout << "Not General Weapon" << endl;
  if (t > 0)  //编译失败，无法转换为int类型
    cout << "Not General Weapon" << endl;
  if ((int)t > 0)  //通过编译
    cout << "Not General Weapon" << endl;

  return 0;
}
