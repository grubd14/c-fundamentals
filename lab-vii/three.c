#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char ch;
    char data[] = " This is the data to be appended.";

    // Open the file in read mode
    file = fopen("example.txt", "r");

    // Check if the file was opened successfully
    if (file == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    // Display the contents of the file before appending
    printf("File contents before appending:\n");
    while ((ch = fgetc(file)) != EOF) {
        printf("%c", ch);
    }

    // Close the file
    fclose(file);

    // Open the file in append mode
    file = fopen("example.txt", "a");

    // Check if the file was opened successfully
    if (file == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    // Append the data to the file
    fprintf(file, "%s", data);

    // Close the file
    fclose(file);

    // Open the file in read mode
    file = fopen("example.txt", "r");

    // Check if the file was opened successfully
    if (file == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    // Display the contents of the file after appending
    printf("\n\nFile contents after appending:\n");
    while ((ch = fgetc(file)) != EOF) {
        printf("%c", ch);
    }

    // Close the file
    fclose(file);

    return 0;
}
