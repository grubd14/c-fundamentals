#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    const char filename[] = "example.txt";
    const char data[] = "Hello, World!";

    // Try to open the file for writing
    file = fopen(filename, "w");
    if (file == NULL) {
        // Handle file opening error
        printf("Error opening file %s\n", filename);
        return 1;
    }

    // Try to write data to the file
    size_t written = fwrite(data, sizeof(char), sizeof(data) - 1, file);
    if (written != sizeof(data) - 1) {
        // Handle file writing error
        printf("Error writing to file %s\n", filename);
        fclose(file);
        return 1;
    }

    // Close the file
    if (fclose(file) != 0) {
        // Handle file closing error
        printf("Error closing file %s\n", filename);
        return 1;
    }

    printf("File %s written successfully.\n", filename);
    return 0;
}
