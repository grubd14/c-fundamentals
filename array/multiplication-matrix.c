//A program to multiply two matrices

#include <stdio.h>

int main() {
  int a[10][10], b[10][10], s[10][10];
  int m, n, l, p, i, j, k;
  printf("Enter row of first matrix: ");
  scanf("%d", &m);
  printf("Enter column of matrix: ");
  scanf("%d", &n);
  printf("Enter the row of second matrix: ");
  scanf("%d", &l);
  printf("Enter the column of second matrix: ");
  scanf("%d", &p);

  printf("Enter the first matrix : \n");
  for (i = 0; i <= m - 1; i++) {
    for (j = 0; j <= n - 1; j++) {
      printf("Enter a[%d][%d] : ", i, j);
      scanf("%d", &a [i] [j]);
    }
  }

  printf("Enter the second matrix: \n");
  for (i = 0; i <= l - 1; i++) {
    for (j = 0; j <= p - 1; j++) {
      printf("Enter the b[%d] [%d] : \t", i, j);
      scanf("%d", &b[i] [j]);
    }
  }

  for (i = 0; i<= m -1; i++) {
    for (j = 0; j <= p - 1; j++) {
      s[i] [j] = 0;

      for (k = 0; k <= n - 1; k++) {
        s [i] [j] = s[i] [j] + a[i] [k] * b[k] [j];
      }
    }
  }
  printf("The matrix multiplication is : \n");
  for ( i = 0; i <= m -1; i++) {
    for (j=0; j <= p -1; j++) {
      printf("%d\t", s[i] [j]);
    }
    printf("\n");
  }
  return 0;
}
