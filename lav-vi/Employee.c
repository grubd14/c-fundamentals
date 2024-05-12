//A program to demonstrate the use of strucutre by creating the Employee struct 
//and initializing them and printing the details of each emplpyee
//

#include <stdio.h>
#include <string.h>

// Define the Employee structure
struct Employee {
    int emp_id;
    char name[50];
    float salary;
};

int main() {
    // Create an array of 5 Employee structures
    struct Employee employees[5];

    // Initialize the Employee structures
    employees[0].emp_id = 101;
    strcpy(employees[0].name, "John Doe");
    employees[0].salary = 50000.0;

    employees[1].emp_id = 102;
    strcpy(employees[1].name, "Jane Smith");
    employees[1].salary = 55000.0;

    employees[2].emp_id = 103;
    strcpy(employees[2].name, "Michael Johnson");
    employees[2].salary = 60000.0;

    employees[3].emp_id = 104;
    strcpy(employees[3].name, "Emily Davis");
    employees[3].salary = 45000.0;

    employees[4].emp_id = 105;
    strcpy(employees[4].name, "David Lee");
    employees[4].salary = 52000.0;

    // Print the details of each employee
    for (int i = 0; i < 5; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Employee ID: %d\n", employees[i].emp_id);
        printf("Name: %s\n", employees[i].name);
        printf("Salary: $%.2f\n", employees[i].salary);
        printf("\n");
    }

    return 0;
}
