#include <stdio.h>

int main() {
  int a = 0, b = 0;
  int sum = 0;
  printf("Enter the first number:");
  scanf("%d", &a);
  printf("Enter the second number:");
  scanf("%d", &b);

  sum = a + b;
  printf("The sum of entered two numbers is %d\n", sum);
}
