// Program to add two arrays

#include <stdio.h>

int main(void) {
  int arrayA[5][5];
  int arrayB[5][5];
  int arrayC[5][5];
  int i, j, m, n;
  printf("Enter the rows and columns of two matrix:");
  scanf("%d%d", &m, &n);
  printf("Enter the elements of A matrix:");

  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d", &arrayA[i][j]);
    }
  }

  printf("The elements of matrix A:");

  for (i = 0; i < m; i++) {
    printf("\n");
    for (j = 0; j < n; j++) {
      printf("\t%d", arrayA[i][j]);
    }
  }

  printf("\nEnter the elements of B matrix:");
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d", &arrayB[i][j]);
    }
  }

  printf("The elements of matrix B:");
  for (i = 0; i < m; i++) {
    printf("\n");
    for (j = 0; j < n; j++) {
      printf("\t%d", arrayB[i][j]);
    }
  }

  printf("\nThe addition of two matrix:");
  for (i = 0; i < m; i++) {
    printf("\n");
    for (j = 0; j < n; j++) {
      arrayC[i][j] = arrayA[i][j] + arrayB[i][j];
      printf("\t%d\n", arrayC[i][j]);
    }
  }
}
