//Program to add, multiply, subtract 
//and divide

#include <stdio.h>

void add(int a, int b) {
  int sum = a + b;
  printf("The sum is %d\n", sum);
}; 

void sub(int a, int b) {
  int subtract = a - b;
  printf("The subtraction of these two numbers is %d\n", subtract);
};

void mult(int a, int b) {
  int multiply = a * b;
  printf("The multiplication is %d\n", multiply);
};

void div(double a, double b) {
  double divide = a / b;
  printf("The division is %lf\n", divide);

}

int main() {
  int a,b;
  int caseNum;
  do {
  printf("Enter the two numbers you would like to perform different operations on:");
  scanf("%d%d", &a,&b);
  printf("Enter the number according to the operation you would like to perform:");
  printf("These are the options you can perform:\n");
  printf("1.ADD:\n");
  printf("2.SUBTRACT:\n");
  printf("3.MULTIPLY:\n");
  printf("4.DIVIDE:\n");
  printf("5.EXIT:\n");
  scanf("%d", &caseNum);

  switch (caseNum) {
    case 1:
      add(a,b);
      break;

    case 2:
      sub(a,b);
      break; 
    
    case 3:
      mult(a,b);
      break;

    case 4:
      div(a,b);
      break;
    
    default:
      printf("Invalid menu number entered!");
  }
    return 0;

  } while( caseNum <= 4 || caseNum >= 1);

  return 0;
}
