// 引用
#include <iostream>
using namespace std;

// 复制
void FA(int x)
{
  x = 1;
  cout << x << endl;
}

// 引用
void FB(int &x)
{
  x = 1;
  cout << x << endl;
}

// 常量
void FC(const int &x)
{
  cout << x << endl;
}

int main()
{
  int w = 0;
  FA(w);
  FC(w);
  FB(w);
  FC(w);
  // 常量，是不可作为引用传递给FB函数
  const int N = 42;
  // FB(N); // 会报错
  return 0;
}
