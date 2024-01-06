
#include <stdio.h>

int main() {
  int num, sq, sum = 0;

  printf("Enter a number: ");
  scanf("%d", &num);

  sq = num * num; // Calculate the square of the number

  // Extract digits of the square and add them
  while (sq != 0) {
    sum += sq % 10;
    sq /= 10;
  }

  // Check if the sum of digits equals the original number
  if (sum == num) {
    printf("%d is a neon number.\n", num);
  } else {
    printf("%d is not a neon number.\n", num);
  }

  return 0;
}
