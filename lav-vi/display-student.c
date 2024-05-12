//A program to take structure as a parameter and print the details
//

#include <stdio.h>
#include <string.h>

// Define the Student structure
struct Student {
    char name[50];
    int roll_number;
    float marks;
};

// Function to display the details of a Student structure
void displayStudent(struct Student student) {
    printf("Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.roll_number);
    printf("Marks: %.2f\n", student.marks);
}

int main() {
    // Create a variable of type Student
    struct Student student;

    // Initialize the members of the Student structure
    strcpy(student.name, "John Doe");
    student.roll_number = 12345;
    student.marks = 85.5;

    // Call the displayStudent function to print the student details
    displayStudent(student);

    return 0;
}
