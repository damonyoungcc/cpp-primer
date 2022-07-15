#include <iostream>

using namespace std;

// 完整的main函数有两个参数
// 第一个参数叫argc(arguments count),
// 第二个参数是char类型的数组
int main(int argc, char **argv)
{
  for (int i = 0; i < argc; i++)
  {
    cout << i << ": " << argv[i] << endl;
  }
}