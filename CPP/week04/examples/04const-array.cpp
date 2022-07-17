#include <iostream>

using namespace std;

// const array 应用于函数参数里
float array_sum(const float values[], size_t length)
{
  float sum = 0.0f;
  for (int i = 0; i < length; i++)
  {
    sum += values[i];
  }
  return sum;
}

int main()
{
  float values[4] = {1.1f, 2.2f, 3.3f, 4.4f};
  float sum = array_sum(values, 4);

  cout << "sum = " << sum << endl;

  return 0;
}