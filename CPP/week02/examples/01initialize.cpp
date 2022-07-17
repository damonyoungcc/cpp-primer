#include <iostream>

using namespace std;

int main()
{
  // uninitialized variables may have random values
  int num1;
  int num2;
  cout << "num1 is " << num1 << endl;
  cout << "num2 is " << num2 << endl;

  // The output is a negative number! -1069976775
  // 想要得到正确的结果，可以定义为 unsigned int
  int a = 56789;
  int b = 56789;
  int c = a * b;
  cout << "56789 ✖️ 56789 = " << c << endl;

  // sizeOf 不是函数，是一个操作符
  int i = 0;
  short s = 0;
  cout << "sizeof(int) = " << sizeof(int) << endl;
  cout << "sizeof(i) = " << sizeof(i) << endl;
  cout << "sizeof(short) = " << sizeof(s) << endl;
  cout << "sizeof(long) = " << sizeof(long) << endl;
  // size_t 无符号的整数 类型和sizeof操作符的返回值一样
  // 表达内存，建议用size_t
  cout << "sizeof(size_t) = " << sizeof(size_t) << endl;

  return 0;
}