#include <stdio.h>

int main() {
  char str[100]; // Array to store the input string
  char rev[100]; // Array to store the reversed string
  int i, j, len;

  // Get input string from the user using scanf
  printf("Enter a word: ");
  scanf("%s", str);

  // Calculate the length of the string
  for (len = 0; str[len] != '\0'; len++)
    ;

  // Store the characters of the string in reverse order
  j = 0;
  for (i = len - 1; i >= 0; i--) {
    rev[j++] = str[i];
  }
  rev[j] = '\0'; // Add null terminator at the end

  // Print the reversed string
  printf("Reversed string: %s\n", rev);

  return 0;
}
