// Program to reverse the given number
#include <stdio.h>

int main() {
  int num;
  printf("Provide the number you would like to reverse:");
  scanf("%d", &num);
  int tempNum = num;
  int reverseNum = 0;

  while (tempNum > 0) {
    int remainderNum = tempNum % 10;
    reverseNum = reverseNum * 10 + remainderNum;
    tempNum = tempNum / 10;
  }
  printf("The reversed number is %d\n", reverseNum);
}
