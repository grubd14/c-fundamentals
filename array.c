//A program to get the average of 5 subject using 
//for loop and array
#include <stdio.h>

int main(void) {
  int i, sum = 0,marks[5];
  double average;
  for (int i = 0; i <= 4; i++) {
    printf("Enter marks:");
    scanf("%d", &marks[i]);
  }

  for (int i = 0; i <= 4; i++) {
    sum = sum + marks[i];
  }

  average = sum / 5;
  printf("The average marks of 5 subjects is %lf\n", average);

}

