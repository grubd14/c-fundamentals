#include <stdio.h>
#include <string.h>

union student {
  int id;
  char name[30];
  int age;
};

int main() {
  union student s1;
  s1.id = 101;
  strcpy(s1.name, "Ram");
  s1.age = 23;
  printf("Student Details\n");
  printf("Name= %s, id=%d, age= %d", s1.name, s1.id, s1.age);
}
