// 二分查找 向量
#include <iostream>
#include <vector>

using namespace std;

template <typename T>
bool binary_search_vector(const T &key, typename vector<T>::iterator data, size_t N)
{
  size_t low = 0;
  size_t high = N;
  while (low < high)
  {
    size_t mid = low + (high - low) / 2;
    if (key < *(data + mid))
      high = mid;
    else if (*(data + mid) < key)
      low = mid + 1;
    else
      return true;
  }
  return false;
}

// 使用迭代器，描述更清晰，而且支持数组
template <typename T, typename IR>
bool binary_search_iterator(const T &key, IR left, IR right)
{
  while (left < right)
  {
    IR middle = left + (right - left) / 2;
    if (key < *middle)
      right = middle;
    else if (*middle < key)
      left = middle + 1;
    else
      return true;
  }
  return false;
}

int main()
{
  vector<int> V{1, 2, 3, 4, 5};
  cout << binary_search_vector(2, V.begin(), 5) << endl;
  cout << binary_search_vector(0, V.begin(), 5) << endl;
  cout << binary_search_vector(2, V.begin() + 2, 3) << endl;
  cout << binary_search_vector(0, V.begin(), 0) << endl;
  cout << binary_search_iterator(2, V.begin(), V.end()) << endl;
  cout << binary_search_iterator(0, V.begin(), V.end()) << endl;
  cout << binary_search_iterator(2, V.begin() + 2, V.end()) << endl;
  cout << binary_search_iterator(0, V.begin(), V.end()) << endl;
  return 0;
}
