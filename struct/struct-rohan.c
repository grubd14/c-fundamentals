#include <stdio.h>

struct book {
  char title[20];
  char author[20];
  int price;
} b[3];

int main() {
  for (int i = 0; i < 3; i++) {
    printf("enter the title of book %d: ", i + 1);
    scanf("%s", &b[i].title);

    printf("enter the author of book %d: ", i + 1);
    scanf("%s", &b[i].author);

    printf("enter the price of book %d: ", i + 1);
    scanf("%d", &b[i].price);
    printf("\n");
  }
  for (int i = 0; i < 3; i++) {
    printf("BOOK NAME:%s\n", b[i].title);
    printf("AUTHOR:%s\n", b[i].author);
    printf("PRICE:%d\n", b[i].price);
  }
  int exp = b[0].price;
  int chp = b[0].price;
  for (int i = 0; i < 3; i++) {
    if (exp < b[i].price)
      exp = b[i].price;
    if (chp > b[i].price)
      chp = b[i].price;
  }
  printf("expensive price is %d and cheap price is %d", exp, chp);
}
