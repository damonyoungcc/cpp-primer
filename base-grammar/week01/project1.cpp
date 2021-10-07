// 1. 提示输入两个数字，输入后算出两个数字乘积
// 2. 编译后在命令行输入两个数字参数算出乘积
// 3. 输入的不是数字字符，则提示输入错误
// 4. 输入的数字越界

#include <iostream>
#include <string>

using namespace std;

int product(int a, int b)
{
  return a * b;
}

int main()
{
  int a, b;
  cout << "Please input two integers" << endl;
  cin >> a;
  cin >> b;
  int result = product(a, b);
  cout << a << " * " << b << " = " << result << endl;
  return 0;
}
