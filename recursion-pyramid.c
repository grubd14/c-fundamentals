// Print a pyramid structure using recursion

#include <stdio.h>

void draw(int n);

int main() { draw(1); }

void draw(int n) {
  if (n <= 0) {
    return;
  }
  draw(n - 1);

  for (int i = 0; i < n; i++) {
    printf("#");
  }
  printf("\n");
}
