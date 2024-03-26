// A program to find the highest and smallest number in array
//  the array is going to be of the size 5

#include <stdio.h>

int main(void) {
  int i; 
//  int a[] = {1, 2, 3, 45, 5};
  int a[5];
  int small = a[0];
  int large = a[0];
  
  for (int i = 0; i < 5; i++) {
    printf("Enter the %d element of an  array:", i+1);
    scanf("%d", &a[i]);
  }

  for (int i = 1; i < 5; i++) {
    if (small > a[i]) {
      small = a[i];
    }
    if(large < a[i]) {
      large = a[i];
    }
  }
  printf("The lowest element in an array is %d\n", small);
  printf("The largest number in an array is %d\n", large);
}
