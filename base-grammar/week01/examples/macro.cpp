#include <iostream>
#define PI 2.14 + 1.0

using namespace std;

int main(int argc, char *argv[])
{
  for (int i = 0; i < argc; i++)
  {
    cout << i << ": " << argv[i] << endl;
  }
  cout << 2 * PI * 3 << endl;
}