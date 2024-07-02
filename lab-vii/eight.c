#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUMBERS 100

int main() {
    FILE *file;
    int numbers[MAX_NUMBERS];
    int count = 0;
    int sum = 0;
    float average;

    // Open the file in write mode
    file = fopen("random_numbers.txt", "w");

    // Check if the file was opened successfully
    if (file == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    // Initialize the random seed
    srand(time(NULL));

    // Generate random numbers and write them to the file
    printf("Generating random numbers and writing them to file...\n");
    for (int i = 0; i < MAX_NUMBERS; i++) {
        int random_number = rand() % 101; // Generate a random number between 0 and 100
        fprintf(file, "%d\n", random_number);
        printf("%d ", random_number);
    }

    // Close the file
    fclose(file);

    // Open the file in read mode
    file = fopen("random_numbers.txt", "r");

    // Check if the file was opened successfully
    if (file == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    // Read the numbers from the file and calculate their sum
    printf("\n\nReading numbers from file and calculating average...\n");
    while (fscanf(file, "%d", &numbers[count]) != EOF) {
        sum += numbers[count];
        count++;
    }

    // Close the file
    fclose(file);

    // Calculate the average
    average = (float)sum / count;

    printf("The average of the %d numbers is: %.2f\n", count, average);

    return 0;
}
