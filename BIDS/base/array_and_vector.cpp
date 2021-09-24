// 数组和向量
#include <iostream>
#include <vector>

using namespace std;

int main()
{
  const int n = 42;
  const int c = 1;

  // 定义
  int A1[n];         // 定义数组
  vector<int> V1(n); // 定义向量

  // 初始化
  // 循环初始化一个数组
  for (size_t i = 0; i < n; i++)
  {
    A1[i] = c;
  }
  // 初始化向量，长度，统一的初始值
  vector<int> V2(n, c);

  // 列表初始化
  vector<int> V3{1, 2, 3, 4, 5};
  // size_t 无符号数，尽量不做减法
  for (size_t i = 0; i < V3.size(); ++i)
  {
    cout << V3[i] << " ";
  }
  cout << endl;

  // 动态变化
  V3.push_back(6);
  cout << V3.size() << endl;
  // 查看首元素和末尾元素
  cout << V3.front() << " " << V3.back() << endl;
  // 删除末尾元素
  V3.pop_back();
  cout << V3.size() << endl;
  cout << V3.front() << " " << V3.back() << endl;

  // 迭代器
  for (auto iter = V3.begin(); iter != V3.end(); ++iter)
  {
    *iter = c;
    cout << *iter << " ";
  }
  cout << endl;

  return 0;
}