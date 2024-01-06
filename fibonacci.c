// A program to print Fibonacci series upto
// n terms
#include <stdio.h>

int main() {
  int nterm, i, t1 = 0, t2 = 1, nextTerm;

  printf("Enter the number of terms: ");
  scanf("%d", &nterm);

  printf("Fibonacci Series: ");

  // Print the first two terms
  printf("%d %d ", t1, t2);

  // Generate remaining terms using a loop
  for (i = 3; i <= nterm; ++i) {
    nextTerm = t1 + t2;
    printf("%d\n", nextTerm);
    t1 = t2;
    t2 = nextTerm;
  }

  return 0;
}
