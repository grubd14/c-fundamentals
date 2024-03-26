#include <stdio.h>
#include <string.h>

int count_letters(char text[]);

int main() {
  // Prompt the user for some text
  // Count the number of letters, words, and sentences in the text
  // Compute the coleman -liau index
  // Print the grade level
  char text[500] = {};
  printf("Text: ");
  scanf("%s", text);
  int letters = count_letters(text);
  printf("%d\n", letters);
}

int count_letters(char text[]) { return strlen(text); }
