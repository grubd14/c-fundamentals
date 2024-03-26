
#include <stdio.h>

int main() {
  int n, i;
  int sum = 0, t1 = 0, t2 = 1, nextTerm;

  printf("Enter the value of n: ");
  scanf("%d", &n);

  // Generate even-indexed Fibonacci numbers up to 2n
  for (i = 1; i <= 2 * n; i += 2) {
    printf("%d ", t1); // Print even-indexed term
    sum += t1;         // Add to the running sum

    nextTerm = t1 + t2;
    t1 = t2;
    t2 = nextTerm;
  }

  printf("\nSum of even-indexed Fibonacci numbers up to %d terms: %d\n", n,
         sum);

  return 0;
}
