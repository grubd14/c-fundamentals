// A program to find whether a number is a
// palindrome or not

#include <stdio.h>

int main() {
  int palindromeNum;
  printf("Enter the number to check if it is palindrome or not!:");
  scanf("%d", &palindromeNum);

  int tempNum = palindromeNum;

  int reverseNum = 0;

  while (tempNum > 0) {
    int remainderNum = tempNum % 10;
    reverseNum = reverseNum * 10 + remainderNum;
    tempNum = tempNum / 10;
  }

  if (palindromeNum == reverseNum) {
    printf("The provided number is palindrome!\n");

  } else {
    printf("It is not a palindrome\n");
  }
}
