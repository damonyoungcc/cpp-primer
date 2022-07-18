#include <iostream>
using namespace std;

struct Student1
{
  int id;       // 4个字节
  bool male;    // 1一个字节
  char label;   // 1个字节 padding 2
  float weight; // 4个字节，总共12个
};

struct Student2
{
  int id;       // 4个字节
  bool male;    // 1个字节 padding3
  float weight; // 4个字节
  char label;   // 1个字节，paddig3，总共16个
};

int main()
{
  cout << "Size of Student1: " << sizeof(Student1) << endl;
  cout << "Size of Student2: " << sizeof(Student2) << endl;
}
