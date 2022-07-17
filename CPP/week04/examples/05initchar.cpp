#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  char rabbit[16] = {'P', 'e', 't', 'e', 'r'};
  cout << "String length is " << strlen(rabbit) << endl;

  for (int i = 0; i < 16; i++)
  {
    cout << i << ":" << +rabbit[i] << " (" << rabbit[i] << ")" << endl;
  }

  cout << "-----------" << endl;

  char bad_pig[9] = {'P', 'e', 'p', 'p', 'a', ' ', 'P', 'i', 'g'};
  char good_pig[10] = {'P', 'e', 'p', 'p', 'a', ' ', 'P', 'i', 'g', '\0'};

  cout << "Rabbit is (" << rabbit << ")" << endl;
  cout << "Pig's bad name is (" << bad_pig << ")" << endl; // 最后不加0，遍历会一直进行
  cout << "Pig's good name is (" << good_pig << ")" << endl;

  cout << "-----------" << endl;

  char name[10] = {'Y', 'u', '\0', 'S', '.', '0'};
  cout << strlen(name) << endl;

  return 0;
}