//A program to take array of integers ans size of as arguments
//and retuen the maximum element in the array 

#include <stdio.h>

int findMax(int arr[], int size) {
    int max = arr[0];  // Assume the first element is the maximum initially
    
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];  // Update the maximum if a larger element is found
        }
    }
    
    return max;
}

int main() {
    int numbers[] = {10, 5, 8, 12, 7};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    
    int maxElement = findMax(numbers, size);
    printf("The maximum element in the array is: %d\n", maxElement);
    
    return 0;
}
