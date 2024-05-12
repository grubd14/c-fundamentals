#include <stdio.h>
#include <string.h>

// Define the Employee structure
struct Employee {
    int emp_id;
    char name[50];
    float salary;
};

// Function to change the salary of an Employee structure
void changeSalary(struct Employee *employee) {
    employee->salary *= 1.1; // Increase the salary by 10%
}

int main() {
    // Create an Employee structure
    struct Employee employee = {
        101,
        "John Doe",
        50000.0
    };

    printf("Before salary change:\n");
    printf("Employee ID: %d\n", employee.emp_id);
    printf("Name: %s\n", employee.name);
    printf("Salary: $%.2f\n", employee.salary);

    // Call the changeSalary function to update the salary
    changeSalary(&employee);

    printf("\nAfter salary change:\n");
    printf("Employee ID: %d\n", employee.emp_id);
    printf("Name: %s\n", employee.name);
    printf("Salary: $%.2f\n", employee.salary);

    return 0;
}
