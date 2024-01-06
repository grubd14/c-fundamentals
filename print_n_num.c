//program to print to n'th term

#include <stdio.h>

int main() {
  int nterm;
  printf("Enter the n'th term you would like to print:");
  scanf("%d", &nterm);
  for (int i = 1; i <= nterm; i++) {
    printf("%d\n", i);
  }
}
