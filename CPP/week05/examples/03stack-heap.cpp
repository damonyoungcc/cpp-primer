#include <iostream>
using namespace std;

int main()
{
  // 存在栈里
  int a = 0, b = 0, c = 0;

  cout << "&a" << &a << endl;
  cout << "&b" << &b << endl;
  cout << "&c" << &c << endl;

  // 动态申请内存，地址赋给p1 p2 p3
  int *p1 = (int *)malloc(4);
  int *p2 = (int *)malloc(4);
  int *p3 = (int *)malloc(4);

  cout << p1 << endl;
  cout << p2 << endl;
  cout << p3 << endl;

  return 0;
}