#include <iostream>
#include <limits.h>
using namespace std;

int main(void)
{
  short sam = SHRT_MAX;
  unsigned short sue = sam;

  cout << "Sam has " << sam << " dollors and Sue has " << sue << " dollors deposited." << endl; // 32767 32767

  cout << "Add $1 to each account." << endl;

  sam += 1;
  sue += 1;

  cout << "Now, Sam has " << sam << " dollors and Sue has " << sue << " dollors deposited." << endl; //-32768 32768

  sam = 0;
  sue = 0;

  sam -= 1;
  sue -= 1;

  cout << "Now, Sam has " << sam << " dollors and Sue has " << sue << " dollors deposited." << endl; //-1 65535

  return 0;
}