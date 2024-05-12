//A program to create Person structure and print its details
//

#include <stdio.h>
#include <string.h>

// Define the Date structure
struct Date {
    int day;
    int month;
    int year;
};

// Define the Person structure
struct Person {
    char name[50];
    struct Date birth_date;
};

int main() {
    // Create a Person structure
    struct Person person;

    // Initialize the Person structure
    strcpy(person.name, "John Doe");
    person.birth_date.day = 25;
    person.birth_date.month = 7;
    person.birth_date.year = 1990;

    // Print the details of the Person structure
    printf("Name: %s\n", person.name);
    printf("Birth Date: %d/%d/%d\n", person.birth_date.day, person.birth_date.month, person.birth_date.year);

    return 0;
}
