// create a structure employee having name, address, salary, age,
// as members . Display the name of employee having age between 40 and 50 and
// are living in Kathmandu
//
//

#include <stdio.h>

typedef struct {
  char emp_name[50];
  char emp_address[50];
  float emp_salary;
  int emp_age;

} Employee;


int main() {

  int emp_num; 
  printf("Enter the number of employee: ");
  scanf("%d", &emp_num );

  Employee  emp[emp_num];

  for (int i = 0; i < emp_num; i++) {
    printf("Enter employee name: \n");
    scanf(" %[^\n]", emp[i].emp_name);

    printf("Enter the employee adress: \n");
    scanf(" %[^\n]", emp[i].emp_address);

    printf("Enter the employee salary: \n");
    scanf("%f", &emp[i].emp_salary);
    
    printf("Enter the employee age: \n");
    scanf("d", &emp[i].emp_age);
  }
}
