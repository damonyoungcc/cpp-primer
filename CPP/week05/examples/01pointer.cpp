/**
 * 指针的声明: 类型名后面加一个*号 + 变量名
 * 指针变量里面存的是什么：指针变量里面存的是一个整数，一个地址，来源是对一个变量或者对象取地址，把地址赋给指针变量
 * & 符号是一个操作符，放在变量的前面就是取这个变量或者对象的地址
 * 【*】 是对指针取内容，地址前面加一个星号，取指针指向的地址里面的内容
 */

#include <iostream>

using namespace std;

int main()
{
  int num = 10;
  int *p1 = NULL, *p2 = NULL; // 声明指针，并且初始化值为0
  p1 = &num;                  // 取num的地址，赋值给p1
  p2 = &num;                  // 取num的地址，赋值给p2

  cout << "num = " << num << endl;

  *p1 = 20; // 对p1指向的内容做修改，即修改num的值为20
  cout << "num = " << num << endl;

  *p2 = 30; // 对p2指向的内容做修改，即修改num的值为30
  cout << "num = " << num << endl;

  return 0;
}