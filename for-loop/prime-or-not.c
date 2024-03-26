#include <stdbool.h>
#include <stdio.h>

int main() {
  int num;
  printf("Enter the number to check if it is prime or not!:\n");
  scanf("%d", &num);

  bool isPrime = true;

  for (int i = 2; i <= (num / 2); i++) {

    if (num % i == 0) {
      isPrime = false;
      break;
    }
  }

  if (isPrime == false) {
    printf("The number is not prime!\n");
  } else {
    printf("The number is  prime\n");
  }
}
