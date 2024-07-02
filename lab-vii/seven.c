#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *input_file, *output_file;
    int number, square;

    // Open the input file in read mode
    input_file = fopen("input.txt", "r");

    // Check if the input file was opened successfully
    if (input_file == NULL) {
        printf("Error opening input file!\n");
        exit(1);
    }

    // Read the integer from the input file
    fscanf(input_file, "%d", &number);

    // Close the input file
    fclose(input_file);

    // Calculate the square of the number
    square = number * number;

    // Open the output file in write mode
    output_file = fopen("output.txt", "w");

    // Check if the output file was opened successfully
    if (output_file == NULL) {
        printf("Error opening output file!\n");
        exit(1);
    }

    // Write the square to the output file
    fprintf(output_file, "The square of %d is %d\n", number, square);

    // Close the output file
    fclose(output_file);

    printf("Square written to output.txt\n");

    return 0;
}
