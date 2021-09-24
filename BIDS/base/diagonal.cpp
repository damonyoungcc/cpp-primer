// 对角线问题
#include <iostream>

using namespace std;

int main()
{
  const int n = 20;
  int x = 1;
  int y = 0;
  int M[n][n];

  // 第一种方法，整体循环
  for (int i = 0; i < n; ++i)
  {
    for (int j = 0; j < n; ++j)
    {
      M[i][j] = (i == j) ? y : x;
    }
  }

  // 第二种方法，先整体后局部
  for (int i = 0; i < n; ++i)
  {
    for (int j = 0; j < n; ++j)
    {
      M[i][j] = x;
    }
    for (int k = 0; k < n; ++k)
    {
      M[k][k] = y;
    }
  }

  // 第三种方法,循环展开
  for (int i = 0; i < n; ++i)
  {
    for (int j = 0; j < i; ++j)
    {
      M[i][j] = x;
    }
    M[i][i] = y;
    for (int j = i + 1; j < n; ++j)
    {
      M[i][j] = x;
    }
  }

  // 打印矩阵
  for (int i = 0; i < n; ++i)
  {
    for (int j = 0; j < n; ++j)
    {
      cout << M[i][j] << "  ";
    }
    cout << endl;
  }

  return 0;
}