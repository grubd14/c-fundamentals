#include <stdio.h>

int main() {
  int n, i, j, isPrime;

  printf("Enter the value of n: ");
  scanf("%d", &n);

  printf("Prime numbers up to %d are:\n", n);

  for (i = 2; i <= n; i++) {
    isPrime = 1;

    for (j = 2; j * j <= i; j++) {
      if (i % j == 0) {
        isPrime = 0;
        break;
      }
    }

    if (isPrime) {
      printf("%d\n", i);
    }
  }

  return 0;
}
