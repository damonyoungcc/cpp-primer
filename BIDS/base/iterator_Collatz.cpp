// 3n + 1 - 卡拉兹猜想代码实现
#include <iostream>
#include <vector>

using namespace std;

// 直接计算
size_t iterative_Collatz(size_t n)
{
  if (n < 1)
    return 0;
  size_t L = 1;
  while (n != 1)
  {
    n = (n % 2 == 0) ? n / 2 : 3 * n + 1;
    ++L;
  }
  return L;
}

// 备忘录算法
size_t memoized_Collatz(vector<size_t> &V, size_t n)
{
  size_t D = 0;
  while (n >= V.size())
  {
    n = (n % 2 == 0 ? n / 2 : 3 * n + 1);
    ++D;
  }
  if (V[n] == 0 && n > 0)
  {
    V[n] = memoized_Collatz(V, (n % 2 == 0 ? n / 2 : 3 * n + 1)) + 1;
  }
  return V[n] + D;
}

int main()
{
  const size_t m = 1000;
  vector<size_t> V(m, 0);
  V[1] = 1;
  size_t max = 10000;
  bool equal = true;
  for (size_t i = 1; i < max; ++i)
  {
    cout << memoized_Collatz(V, i) << ",";
    if (iterative_Collatz(i) != memoized_Collatz(V, i))
      equal = false;
  }
  cout << (equal ? "相符" : "不符") << endl;
  return 0;
}