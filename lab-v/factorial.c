//A program to  calculate factorial of a given number using
//recursive functions

#include <stdio.h>

// Recursive function to calculate the factorial of a number
int factorial(int n) {
    // Base case: factorial of 0 or 1 is 1
    if (n == 0 || n == 1) {
        return 1;
    }
    // Recursive case: factorial of n is n * factorial(n-1)
    return n * factorial(n - 1);
}

int main() {
    int n = 5;
    int result = factorial(n);
    printf("The factorial of %d is %d\n", n, result);
    return 0;
}
