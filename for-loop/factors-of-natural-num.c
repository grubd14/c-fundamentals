
#include <stdio.h>

int main() {
  int num, i;

  printf("Enter a natural number: ");
  scanf("%d", &num);

  printf("Factors of %d are:\n", num);

  // Optimized loop: Check only up to the square root of num
  for (i = 1; i * i <= num; ++i) {
    if (num % i == 0) {
      printf("%d ", i);

      // If i is not equal to the square root of num, print its corresponding
      // factor
      if (i * i != num) {
        printf("%d\n", num / i);
      }
    }
  }

  return 0;
}
