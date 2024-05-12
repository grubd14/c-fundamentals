/* #include <stdio.h>
#include <stdlib.h>

struct  node {
  int data;
  struct node *link;
};

int main() {
  int *ptr = (struct node*)malloc(sizeof(struct node));
  int *second = (struct node*)malloc(sizeof(struct node));
  int *third = (struct node*)malloc(sizeof(struct node));
  ptr -> data = 2;
  second -> data = 4;
  third -> data = 5;

  ptr -> link = second;
  second -> link = third;
  third -> link = Null;



}
 */

#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *link;
};

int main() {
  int *head = (struct node*)malloc(sizeof(struct node));
  int *second = (struct node*)malloc(sizeof(struct node));
  int *third = (struct node*)malloc(sizeof(struct node));
  
  head-> link = second;
  second-> link = third;
  third-> link = Null;
}