#include <iostream>
#include <typeinfo>

using namespace std;

template <typename T>
T sum(T x, T y)
{
  cout << "The input type is " << typeid(T).name() << endl;
  return x + y;
}

// 实例化函数模板
template double sum<double>(double, double);

int main()
{
  auto val = sum(4.1, 5.2);
  cout << val << endl;
  return 0;
}