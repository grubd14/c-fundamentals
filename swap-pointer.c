// Programs to swap number using
// pointers

#include <stdio.h>

void swap(int *a, int *b);

int main() {
  int a, b;
  printf("Enter the value of a and b:");
  scanf("%d%d", &a, &b);
  printf("before swapping the value of a is %d and b is %d\n", a, b);
  swap(&a, &b);
}
void swap(int *a, int *b) {
  int *temp = a;
  a = b;
  b = temp;
  printf("After swapping the value of a is %d and b is %d\n", *a, *b);
}
