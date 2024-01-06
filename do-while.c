// Program to print number

#include <stdio.h>

int main() {
  int num, num1, sum = 0;
  printf("Enter the value:");
  scanf("%d", &num);
  num1 = num;
  do {
    sum = sum + num;
    num = num - 1;
  } while (num >= 1);
  { printf("The sum upto %d = %d", num1, sum); };
}
