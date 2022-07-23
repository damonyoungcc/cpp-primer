#include <iostream>
using namespace std;

inline float max_function(float a, float b)
{
  return a > b ? a : b;
}

// 宏，预处理，文本替换
#define MAX_MACRO(a, b) (a) > (b) ? (a) : (b);

int main()
{
  int num1 = 20;
  int num2 = 30;
  int maxv = max_function(num1, num2);
  cout << maxv << endl;

  maxv = MAX_MACRO(num1, num2); // 宏没有函数调用压栈出栈的代价
  cout << maxv << endl;

  maxv = MAX_MACRO(num1++, num2++); // num++ 表达式的值为 20
  cout << maxv << endl;
  cout << "num1 = " << num1 << endl;
  cout << "num2=" << num2 << endl;

  num1 = 0xAB09;
  num2 = 0xEF08;
  maxv = MAX_MACRO(num1 & 0xFF, num2 & 0xFF);
  cout << maxv << endl;

  return 0;
}