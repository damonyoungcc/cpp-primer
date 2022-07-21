#include <iostream>

using namespace std;

int foo(int x)
{
  x += 10;
  return x;
}

int main()
{
  int num1 = 10;
  int num2 = foo(num1);

  cout << "num1: " << num1 << endl;
  cout << "num2: " << num2 << endl;

  return 0;
}