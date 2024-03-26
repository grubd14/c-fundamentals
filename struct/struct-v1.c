// A simple C program to demonstrate structures
// and struct keyword use cases in C

#include <stdio.h>
#include <string.h>

typedef struct {
  char student_name[50];
  int student_id;
  int student_age;

} Student;

int main(void) {
  int student_num;
  printf("Enter the number of students: ");
  scanf("%d", &student_num);

  Student students[student_num];

  for (int i = 0; i < student_num; i++) {
    printf("Student's Name: ");
    scanf("%s", &students[i].student_name);

    printf("Student's ID: ");
    scanf("%d", &students[i].student_id);

    printf("Student's Age: ");
    scanf("%d", &students[i].student_age);
    printf("\n");
  }
  printf("--------------------------------\n");
  for (int i = 0; i < student_num; i++) {
    printf("Student's Name: %s\n", students[i].student_name);
    printf("Student's ID: %d\n", students[i].student_id);
    printf("Student's Age: %d\n", students[i].student_age);
    printf("\n");
  }
}
