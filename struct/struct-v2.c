// Program to
//

#include <stdio.h>
#include <string.h>

int main(void) {

  struct course cp;
  cp.id = 101;
  strcpy(cp.title, "C programming");
  cp.startDate.year = 2023;
  cp.startDate.month = 3;
  cp.startDate.day = 19;

  cp.endDate.year = 2023;
  cp.endDate.month = 9;
  cp.endDate.day = 19;
}

struct date {
  int day;
  int month;
  int year;
};

struct course {
  int id;
  char title[100];
  struct date startDate;
  struct date endDate;
};

struct course cp = {101, "C programming", {2023, 3, 19}, {20233, 9, 19}};
