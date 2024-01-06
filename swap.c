#include <stdio.h>

int main() {
  int a, b, c;
  printf("Enter the values you would like to swap, for a:");
  scanf("%d", &a);
  printf("Enter the value of b:");
  scanf("%d", &b);

  c = a;
  a = b;
  b = c;

  printf("The swap value of a and b are %d and %d respectively\n", a, b);
}
