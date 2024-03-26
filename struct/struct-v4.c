#include <stdio.h>

struct point {
  int x;
  int y;
};

int main() {
  struct point P;
  struct point *q;
  P.x = 30;
  P.y = 40;
  printf("X = %d, Y = %d", q->x, q->y);
}
