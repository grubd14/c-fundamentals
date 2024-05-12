//A programs to return the length of string
//

#include <stdio.h>

int stringLength(char *str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

int main() {
    char myString[] = "Hello, World!";
    int length = stringLength(myString);
    printf("The length of the string is: %d\n", length);
    return 0;
}
