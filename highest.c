// Program to find the highest among
// three numbers

#include <stdio.h>

int main() {
  int a, b, c;
  printf("Enter number a,b and c:");
  scanf("%d%d%d", &a, &b, &c);

  if (a > b && a > c) {
    printf("%d is greater!\n", a);
  } else if (b > a && b > c) {
    printf("%d is the highest!\n", b);
  } else if (c > a && c > b) {
    printf("%d is the highest\n", c);
  }
  return 0;
}
