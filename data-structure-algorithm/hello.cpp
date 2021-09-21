#include <iostream>
using namespace std;
/* 方法一：确定子列的开头和结尾，再遍历累加，时间复杂度 O(n^3)*/
int MaxSubseqSum(int n, int a[])
{
  int max = 0;
  for (int i = 0; i < n; i++)
  {
    for (int k = 0; k < i; k++)
    {
      int tmpSum = 0;
      for (int j = k; j <= i; j++)
      {
        tmpSum += a[j];
      }
      if (max < tmpSum)
        max = tmpSum;
    }
  }
  return max;
}

int main()
{
  int n;
  int a[100 + 5];
  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> a[i];
  cout << "result" << MaxSubseqSum(n, a) << endl;
  return 0;
}
