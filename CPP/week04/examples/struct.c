#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct Student
{
  char name[4];
  int born;
  bool male;
};

int main()
{
  struct Student stu = {"Yu", 2000, true};

  printf("Student %s, born in %d, gender %s\n",
         stu.name,
         stu.born,
         stu.male ? "male" : "female");

  struct Student students[100];
  students[50].born = 2002;

  return 0;
}