//A program to calculate a sum of elements in an array
//

#include <stdio.h>

int main() {
  int elementsArray[10] = { 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

  int sumElements = 0;

  for (int i = 0 ; i < 10; i++) {
    sumElements += elementsArray[i];
  }

  printf("The sum of elements in array is %d\n", sumElements);
}
