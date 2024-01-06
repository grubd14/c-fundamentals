#include <stdio.h>

int main() {

  int num;
  printf("Enter the number you would like to get a factorial of:");
  scanf("%d", &num);
  int result = 1;
  for (int i = 1; i <= num; ++i) {
    result *= i;
  }
  printf("The factorial is %d\n", result);
}
