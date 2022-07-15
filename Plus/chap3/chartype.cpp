#include <iostream>

using namespace std;
void test1(void);
void test2(void);

int main(void)
{

  test1();
  test2();
  return 0;
}

void test1()
{
  char ch;

  cout << "Enter a character " << endl;

  cin >> ch;
  cout << "Hola! ";
  cout << "Thank you for the " << ch << " Character." << endl;
}

void test2()
{
  char ch = 'M';
  int i = ch;
  cout << "The ASCII code for " << ch << " is " << i << endl;

  cout << "Add one to the character code:" << endl;
  ch = ch + 1;
  i = ch;
  cout << "The ASCII code for " << ch << " is " << i << endl;

  cout << "Displaying char ch usng cout.put(ch): ";
  cout.put(ch); // cout.put 显示一个字符

  cout.put('!');
  cout << endl
       << "Done" << endl;
}