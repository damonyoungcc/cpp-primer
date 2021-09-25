// 数组的二分查找

#include <iostream>

using namespace std;

template <typename T>

// @params: key - 待查值; data - 有序数组; n - 数组长度
// @return: int 找到的位置索引，未找到返回 -1
int binary_serach_array(const T &key, const T data[], int N)
{
  if (N < 0)
  {
    return -1;
  }
  int low = 0;
  int high = N - 1;
  while (low <= high)
  {
    int mid = low + (high - low) / 2;
    if (key < data[mid])
      high = mid - 1;
    else if (data[mid] < key)
      low = mid + 1;
    else
      return mid;
  }
  return -1;
}

int main()
{
  int A[5] = {1, 2, 3, 4, 5};
  int B[1] = {1};
  cout << binary_serach_array(2, A, 5) << endl; // 1
  cout << binary_serach_array(0, A, 0) << endl; // -1
  cout << binary_serach_array(1, B, 1) << endl; // 0
  // a[2] ~ a[4]
  cout << binary_serach_array(3, A + 2, 3) << endl; // 0
}