#include <iostream>

using namespace std;

int main()
{
  int num_array1[5] = {0, 1};
  cout << "sizeof(num_array1) = " << sizeof(num_array1) << endl;

  int len = 0;
  while (len < 10)
  {
    int num_array2[len];
    cout << "len = " << len;
    cout << ", sizeof(num_array2) = " << sizeof(num_array2) << endl;
    len++;
  }

  return 0;
}