//A program to demonstrate nesting of fucntions where each function performs
//arithemetic operation

#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    return a / b;
}

int main() {
    int num1 = 10;
    int num2 = 5;

    printf("Addition: %d\n", add(num1, num2));
    printf("Subtraction: %d\n", subtract(num1, num2));
    printf("Multiplication: %d\n", multiply(num1, num2));
    printf("Division: %d\n", divide(num1, num2));

    printf("Nested operations:\n");
    printf("Add then subtract: %d\n", subtract(add(num1, num2), num2));
    printf("Multiply then divide: %d\n", divide(multiply(num1, num2), num1));

    return 0;
}
