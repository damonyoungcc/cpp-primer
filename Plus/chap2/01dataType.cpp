#include <iostream>
#include <limits.h>

using namespace std;

int main(void)
{
  int n_int = INT_MAX;
  short n_short = SHRT_MAX;
  long n_long = LONG_MAX;
  long long n_llong = LLONG_MAX;

  // sizeof 返回类型或者变量的长度，单位为字节
  cout << "int is " << sizeof(int) << " bytes." << endl;          //使用数据类型查询 4
  cout << "int is " << sizeof n_short << " bytes." << endl;       // 使用变量查询 2
  cout << "long is " << sizeof n_long << " bytes." << endl;       // 使用变量查询 8
  cout << "long long is " << sizeof n_llong << " bytes." << endl; // 使用变量查询 8

  cout << "Maximum values: " << endl;
  cout << "int: " << n_int << endl;         // 2147483647
  cout << "short: " << n_short << endl;     // 32767
  cout << "long: " << n_long << endl;       // 9223372036854775807
  cout << "long long: " << n_llong << endl; // 9223372036854775807

  return 0;
}