// Unions have shared memory
// So when a data type with higher bytes is put in an union
// and tried to access, the variable having the higher data
// is printed

#include <stdio.h>

union Job {
  float salary;
  int workerNo;

} j;

int main() {
  j.salary = 12.3;
  j.workerNo = 100;

  printf("Salary %.1f\n", j.salary);
  printf("Number of workers = %d", j.workerNo);
  return 0;
}
