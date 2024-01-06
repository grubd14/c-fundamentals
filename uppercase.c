#include <stdio.h>

int main() {
  char letter;
  printf("Enter an letter you want to change to uppercase:\n");
  scanf("%c", &letter);

  if (letter >= 'a' && letter <= 'z') {
    letter = letter - 32;
  }
  printf("The upper case to this later is %c\n", letter);
  return 0;
}
