#include <iostream>
using namespace std;

void swap_init(int a, int b);
void swap_init(int *a, int *b);

int main()
{

  int num1 = 10;
  int num2 = 20;

  swap_init(num1, num2);
  cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

  return 0;
}

void swap_init(int a, int b)
{
  int c = a;
  a = b;
  b = c;
}

void swap_pointer(int *a, int *b)
{
  
}