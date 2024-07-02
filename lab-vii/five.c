#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char ch;

    // Open the file in read mode
    file = fopen("example.txt", "r");

    // Check if the file was opened successfully
    if (file == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    printf("File contents:\n");

    // Read and display characters along with their ASCII values
    while ((ch = fgetc(file)) != EOF) {
        printf("Character: %c, ASCII Value: %d\n", ch, ch);
    }

    // Close the file
    fclose(file);

    return 0;
}
