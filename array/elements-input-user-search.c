//A program to search through the elements input by the user
//

#include <stdio.h>
#include <stdbool.h>

int main() {
  int num;
  printf("Enter the number you would like to search: ");
  scanf("%d", &num);

  int number[10];
  printf("Enter the elements of array: ");

  for (int i = 0; i < 10; i++) {
    printf("Enter the %dth element of array: \n", i+1);
    scanf("%d", &number[i]);
  }

  bool intFound = false;
  for (int i = 0; i < 10; i++) {
    if ( num == number[i]) {
      intFound = true;
      break;
    }
  }

  if (intFound == true) {
    printf("The element has been found\n");
  } else {
    printf("The element is not found\n");
  }
  
}
