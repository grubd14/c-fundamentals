//A program to print sum using functions and integers as arguments


#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main() {
    int result = sum(5, 10);
    printf("The sum of the two integers is: %d\n", result);
    return 0;
}
