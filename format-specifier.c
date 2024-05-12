//A program that demonstrates the use of different format specifiers 
//in C


#include <stdio.h>

int main() {

  int number;
  char letter;
  char word[] = "Hello,world";
  float pi = 3.1415922654;

  printf("Enter a letter: ");
  scanf("%s", &letter);

  printf("Enter a number: ");
  scanf("%d", &number);
  printf(".............................\n");
  //display the octal and hexadecimal values
  printf("the octal value is: %o\n", number);
  printf("the hexadecimal value is: %x\n", number);

  //display the floating point number with  and without decimal
  printf("floating point with two decimal number: %.2f\n", pi);
  printf("floating point with none decimal number %.0f\n", pi);

  //display the character and string
  printf("The letter is %c\n", letter);
  printf("The word is %s\n", word);
}


