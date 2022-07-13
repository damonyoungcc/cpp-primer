#include <iostream>
using namespace std;

int main(void)
{

  int cheat = 42;
  int waist = 0x42;
  int inseam = 042;

  cout << "cheat = " << cheat << "(42 in dec)." << endl; // cout 默认十进制
  // cout << hex;
  cout << "waist = " << waist << "(0x42 in hex)." << endl; // 66
  // cout << oct;
  cout << "inseam = " << inseam << "(042 in oct)." << endl; // 34

  return 0;
}