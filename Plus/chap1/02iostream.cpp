#include <iostream>

using namespace std;

int main(void)
{
  int carrots;

  cout << "How many carrots do you have?" << endl;
  cin >> carrots;
  cout << "Here are two more." << endl;
  carrots += 2;
  cout << "Now you have " << carrots << " carrots." << endl;

  return 0;
}