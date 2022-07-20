#include <iostream>
#include <cstring>
using namespace std;

struct Student
{
  char name[4];
  int born;
  bool male;
};

int main()
{
  Student stu = {"Yu", 2000, true};
  Student *pStu = &stu; // 声明指针 pStu, 取stu的地址

  cout << stu.name << "was born in " << stu.born
       << ". Gender: " << (stu.male ? "male" : "fmale") << endl;

  strncpy(pStu->name, "Li", 4); // 把Li 拷贝到 stu.name中, strncpy防止越界，传入参数4, 透过指针操作内存，而不是透过变量名
  pStu->born = 2001;            // 同上
  (*pStu).born = 2002;          // 同上等价
  pStu->male = false;

  cout << stu.name << " was born in " << stu.born
       << ". Gender: " << (stu.male ? "male " : "fmale") << endl;

  // 打印指针的地址
  printf("Address of stu: %p\n", pStu); // C style
  cout << "Address of pStu: " << pStu << endl;
  cout << "Address of &stu: " << &stu << endl;
  cout << "Address of member name: " << &(pStu->name) << endl; // name和pStu 以及 &stu一致
  cout << "Address of member born: " << &(pStu->born) << endl;
  cout << "Address of member male: " << &(pStu->male) << endl;

  // 指针的指针
  int num = 10;
  int *p = &num;
  int **pp = &p;
  *(*pp) = 20;
  cout << "num = " << num << endl;

  return 0;
}
