//A program to demonstrate the use of structure
//

#include <stdio.h>
#include <string.h>

// Define the Student structure
struct Student {
    char name[50];
    int roll_number;
    float marks;
};

int main() {
    // Create a variable of type Student
    struct Student student;

    // Initialize the members of the Student structure
    strcpy(student.name, "John Doe");
    student.roll_number = 12345;
    student.marks = 85.5;

    // Print the values of the Student structure members
    printf("Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.roll_number);
    printf("Marks: %.2f\n", student.marks);

    return 0;
}
