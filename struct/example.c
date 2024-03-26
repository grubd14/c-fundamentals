#include <stdio.h>

typedef struct {
  char book_title[100];
  char book_author[100];
  float book_price;
} Book;

int main() {
  int books_num = 3;

  Book books[books_num];

  for (int i = 0; i < books_num; i++) {
    printf("Enter the book title: ");
    scanf("%s", &books[i].book_title);

    printf("Enter the book author: ");
    scanf("%s", &books[i].book_author);

    printf("Enter the book price: ");
    scanf("%f", &books[i].book_price);
  };
}
