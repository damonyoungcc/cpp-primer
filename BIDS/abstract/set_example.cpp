#include <iostream>
#include <set>

using namespace std;

void printSet(set<int> S)
{
  for (auto iter = S.begin(); iter != S.end(); ++iter)
  {
    cout << *iter << " ";
  }
  cout << endl;
}

int main()
{
  set<int> S{3, 2, 1, 4, 5};
  printSet(S);
  cout << *S.begin() << ", " << *--S.end() << endl;

  // 插入
  S.insert(1);
  printSet(S);
  S.insert(7);
  printSet(S);
  cout << "-------" << endl;

  // 查找和删除
  auto iter = S.find(0);
  if (iter != S.end())
    S.erase(iter);
  printSet(S);
  iter = S.find(5);
  if (iter != S.end())
    S.erase(iter);
  printSet(S);
  S.erase(5);
  printSet(S);
  cout << "-------" << endl;

  // 迭代器位置
  iter = S.begin();
  cout << *iter << endl;
  ++iter;
  cout << *iter << endl;
  --iter;
  cout << *iter << endl;

  return 0;
}