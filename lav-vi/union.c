#include <stdio.h>

// Define the Number union
union Number {
    int integer;
    float real;
};

int main() {
    // Create a variable of type Number
    union Number num;

    // Store an integer value in the union
    num.integer = 42;
    printf("Integer value: %d\n", num.integer);

    // Store a real value in the union
    num.real = 3.14;
    printf("Real value: %.2f\n", num.real);

    return 0;
}
