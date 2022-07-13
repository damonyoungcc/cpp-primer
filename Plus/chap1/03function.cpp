#include <iostream>
#include <math.h>
using namespace std;

void usingMathFunc(void);

int main(void)
{
  usingMathFunc();
  return 0;
}

void usingMathFunc(void)
{
  double area;
  cout << "Enter the floor area, in square feet, of your home: ";
  cin >> area;

  double side;
  side = sqrt(area);

  cout << "That's the equivalent of a square " << side << " feet to the side." << endl;
}