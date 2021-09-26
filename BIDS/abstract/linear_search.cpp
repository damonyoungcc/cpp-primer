// 线性查找
#include <iostream>
#include <vector>
#include <string>

using namespace std;

// 1. 线性查找，数组版本
template <typename T>
// key - 要查找的元素, data - 数组, N - 数组长度
int linear_search_array(const T &key, const T data[], int N)
{
  for (int pos = 0; pos < N; ++pos)
    if (data[pos] == key)
      return pos;
  return N;
}

// 2. 哨兵模式
template <typename T>
int linear_search_sentry(const T &key, T data[], int N)
{
  data[N] = key;
  int pos = 0;
  while (data[pos] != key)
    ++pos;
  return pos;
}

// 3. 向量查找
template <typename T>
size_t linear_search_vector(const T &key, const vector<T> &data)
{
  for (size_t pos = 0; pos < data.size(); ++pos)
    if (data[pos] == key)
      return pos;
  return data.size();
}

// 4. 向量迭代器查找
template <typename T, typename IR>
IR linear_search_iterator(const T &key, IR left, IR right)
{
  while (left != right)
  {
    if (*left == key)
      return left;
    ++left;
  }
  return left;
}

int main()
{
  const int m = 1000;
  int n = 5;
  int A[m] = {3, 2, 1, 4, 5};
  vector<string> V{"RSA", "Apple", "WWW", "While", "X"};
  cout << linear_search_array(1, A, n) << endl;
  string key = "Apple";
  cout << linear_search_vector(key, V) << endl;
  key = "Algorithm";
  auto iter = linear_search_iterator(key, V.begin(), V.end());
  if (iter == V.end())
    cout << "Not Found!" << endl;
  else
    cout << *iter << endl;
  return 0;
}