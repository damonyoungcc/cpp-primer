#include <iostream>

using namespace std;

// pass by value
int foo(int x) // 拷贝传入的值给x
{
  x += 10;
  return x;
}

// pass by pointer
int pFoo(int *p) // 拷贝传入的指针地址给p
{
  (*p) += 10; // 修改指针指向的内容，因此这里做修改，pnum1的值就会被修改
  return *p;
}

int main()
{
  // call by value
  int num1 = 10;
  int num2 = foo(num1);

  cout << "num1: " << num1 << endl;
  cout << "num2: " << num2 << endl;

  // call by pointer
  int pnum1 = 20;
  int *p = &pnum1;
  int pnum2 = pFoo(p); // 传入的是 pnum1 的地址
  cout << "pnum1: " << pnum1 << endl;
  cout << "pnum2: " << pnum2 << endl;

  return 0;
}