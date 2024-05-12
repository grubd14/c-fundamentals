//A program to take two integer pointers and swap the values 

#include <stdio.h>

// Function to swap the values of two integers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;
    printf("Before swapping:\nx = %d\ny = %d\n", x, y);

    // Call the swap function and pass the addresses of x and y
    swap(&x, &y);

    printf("After swapping:\nx = %d\ny = %d\n", x, y);

    return 0;
}
