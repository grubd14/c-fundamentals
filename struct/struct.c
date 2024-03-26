//Simple program that prints id ang of students for now
//and simply access values stored in struct data type
//will do another program using characters for name 


#include <stdio.h>
#include <string.h>


typedef struct{
  int st_id;
  int st_age;
} Student;


int main(void) {
  Student students[3];

  students[0].st_id = 1250;
  students[0].st_age = 20;

  students[1].st_id = 3450;
  students[1].st_age = 23;

  students[2].st_id = 4560;
  students[2].st_age = 45;

  for (int i = 0; i < 3; i++) {
    printf("ID: %d\n", students[i].st_id);
    printf("Age: %d\n", students[i].st_age);
  }
}
