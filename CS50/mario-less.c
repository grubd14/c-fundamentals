#include <stdio.h>

void print_row(int spaces, int bricks, int n);

int main(void) 
{
  int n;
  do {
  printf("Height:");
  scanf("%d", &n);
  } while ( n < 1);

  for (int i = 0; i < n; i++) {
    print_row(i+1,i+1,n);
  }
}

void print_row(int spaces, int bricks, int n) 
{
  for (int j = n; j >= spaces; j--) {
    printf(".");
  }
  for (int i = 0; i < bricks; i++) {
    printf("#");
  }
  printf("\n");
}
