// Program to explain how union works

#include <stdio.h>

union unionJob {
  char name[32];
  float salary;
  int workerNo;

} uJob;

struct structJob {
  char name[32];
  float salary;
  int workerNo;
} sJob;

int main() {
  printf("size: %d", sizeof(uJob));
  printf("size = %d", sizeof(sJob));
  return 0;
}
