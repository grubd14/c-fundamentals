#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char text[] = "This is some sample text written to the file.";

    // Open the file in write mode
    file = fopen("example.txt", "w");

    // Check if the file was opened successfully
    if (file == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    // Write the text to the file
    fprintf(file, "%s", text);

    // Close the file
    fclose(file);

    printf("File written successfully!\n");

    return 0;
}
