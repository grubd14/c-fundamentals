#include <stdio.h>

// int main() {
//   FILE* fptr;
//   fptr = fopen("forloop.txt", "w");
//   char name[] = "Shyam";

//   for (int i = 0; name[i]!='\0'; i++) {
//     putc(name[i], fptr);
//   }

//   fclose(fptr);
// }

int main() {
  FILE* fptr;
  fptr = fopen("test.txt", "w");
  fprintf(fptr, "%d", 45);
  fclose(fptr);


  //fscanf() 
  fptr = fopen("test.txt", "r");
  int num;
  fscanf(fptr, "%d", num);
  printf("Value = %d\n", num);
  fclose(fptr);
}
