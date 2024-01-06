#include <stdio.h>

int main() {
  int number;
  int sum = 0;
  printf("Enter the number you would like to get the sum to:");
  scanf("%d", &number);

  for (int i = 1; i <= number; i++) {
    if (i % 2 == 1) {
      sum = sum + i;
    }
  }
  printf("The sum of %d is %d\n", number, sum);
}
