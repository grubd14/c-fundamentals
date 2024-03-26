#include <stdio.h>

int main() {
  int n, sum = 0, average;

  printf("Enter the n term");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    sum = sum + i;
  };

  average = sum / n;
  printf("The sum is %d", sum);
  printf("The average is %d,", average);
}
