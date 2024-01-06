// Program to find the sum of natural numbers
// using while loop

#include <stdio.h>

int main() {
  int num, num1 = 1, sum = 0;
  printf("Enter the number you would like to sum:");
  scanf("%d", &num);

  while (num1 <= num) {
    sum = sum + num1;
    num1++;
  }
  printf("The sum upto %d = %d\n", num, sum);
}
