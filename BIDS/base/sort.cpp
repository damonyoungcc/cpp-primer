// 排序之王
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

const int N = 5;
int a[N] = {2, 5, 3, 1, 4};
string b[N] = {"www", "algorithm", "racer", "text", "wait"};
vector<string> V = {"www", "algorithm", "racer", "text", "wait"};

// 打印排序后的int数组函数
void printSortedIntArray()
{
  for (int i = 0; i < N; ++i)
  {
    cout << a[i] << endl;
  }
}

// 打印排序后的string数组函数
void printSortedStringArray()
{
  for (int i = 0; i < N; ++i)
  {
    cout << b[i] << endl;
  }
}

// 打印排序后的string向量函数
void printSortedStringVector()
{
  for (int i = 0; i < N; ++i)
  {
    cout << V[i] << endl;
  }
}

int main()
{
  // 排序从小到大
  sort(a, a + N);
  printSortedIntArray();
  cout << "-------" << endl;

  // 排序从大到小
  sort(a, a + N, greater<int>());
  printSortedIntArray();
  cout << "-------" << endl;

  // 排序字符串
  sort(b, b + N);
  printSortedStringArray();
  cout << "-------" << endl;

  // 排序向量
  sort(V.begin(), V.end());
  printSortedStringVector();
  cout << "-------" << endl;

  sort(V.begin(), V.end(), greater<string>());
  printSortedStringVector();
  cout << "-------" << endl;

  // 逆向迭代器
  sort(V.rbegin(), V.rend());
  printSortedStringVector();
  cout << "-------" << endl;

  // 使用迭代器打印V中所有元素
  for (const string &x : V)
  {
    cout << x << endl;
  }

  return 0;
}