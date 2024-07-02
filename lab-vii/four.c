#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *source_file, *target_file;
    char ch;

    // Open the source file in read mode
    source_file = fopen("source.txt", "r");

    // Check if the source file was opened successfully
    if (source_file == NULL) {
        printf("Error opening source file!\n");
        exit(1);
    }

    // Open the target file in write mode
    target_file = fopen("target.txt", "w");

    // Check if the target file was opened successfully
    if (target_file == NULL) {
        printf("Error opening target file!\n");
        fclose(source_file);
        exit(1);
    }

    // Copy contents from source file to target file
    while ((ch = fgetc(source_file)) != EOF) {
        fputc(ch, target_file);
    }

    // Close the files
    fclose(source_file);
    fclose(target_file);

    printf("File copied successfully!\n");

    return 0;
}
