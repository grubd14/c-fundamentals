// A program to check if the number is
// armstrong or not

#include <stdio.h>

int main() {
  int num, sum = 0, tempNum, remainderNum;
  printf("Enter any number to check if it is armstrong or not!:");
  scanf("%d", &num);

  tempNum = num;

  while (num != 0) {
    remainderNum = num % 10;
    sum = sum + remainderNum * remainderNum * remainderNum;
    num = num / 10;
  }

  if (sum == tempNum) {
    printf(" %d is a armstrong number\n", tempNum);

  } else {
    printf(" %d is not armstrong number\n", tempNum);
  }
}
