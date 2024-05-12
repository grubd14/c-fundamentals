//A program to sort array in ascending order using bubble sort
//
#include <stdio.h>

int main() {
  int array[10];
  int i, j, temp;
  printf("\n Enter 10 items in any order:");

  for (i = 0; i < 10; i++) {
    scanf("%d", &array[i]);
  }

  for (i = 0; i < 10; i++) {
    for (j = 0; j < 10 - i- 1; j++) {
      if (array[j] > array[j + 1]) {
        temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }

  printf("\n Data items in ascending order:");
  for (int i = 0; i < 10; i++) {
    printf("%4d\n", array[i]);
  }

  return 0;
}
