// Program to print the multiplication
// table of any integer using
// for loop
//
//

#include <stdio.h>

int main() {
  int m;
  int number;
  int multiplication;
  printf("Print the number you would like to get a multiplication table of:");
  scanf("%d", &m);
  for (number = 1; number <= 10; number++) {
    multiplication = m * number;
    printf("%d x %d = %d\n", m, number, multiplication);
  }
}
