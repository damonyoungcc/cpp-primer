#include <iostream>
using namespace std;

int main()
{
  // no bounds-checking in C/C++
  // 不检查，效率比较高
  int num_array[5];
  for (int idx = -1; idx <= 5; idx++)
  {
    num_array[idx] = idx * idx;
  }

  for (int idx = 0; idx <= 5; idx++)
  {
    cout << "num_array[" << idx << "] = " << num_array[idx] << endl;
  }

  return 0;
}