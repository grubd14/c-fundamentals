// A program to calculate the best possible change
// to give when certain amount is to be returned
// by a cashier
//

#include <stdio.h>

int calculate_quarters(int changeOwed);
int calculate_dime(int changeOwed);
int calculate_nickel(int changeOwed);
int calculate_pennies(int changeOwed);

int main(void) {
  int changeOwed;
  do {
    printf("Change owed:");
    scanf("%d", &changeOwed);
  } while (changeOwed < 0);

  int quarters = calculate_quarters(changeOwed);
  changeOwed = changeOwed - (quarters * 25);
  int dime = calculate_dime(changeOwed);
  changeOwed = changeOwed - (dime * 10);
  int nickel = calculate_nickel(changeOwed);
  changeOwed = changeOwed - (nickel * 5);
  int pennies = calculate_pennies(changeOwed);
  changeOwed = changeOwed - (pennies * 1);

  int sumOfChange = (quarters + dime + nickel + pennies);
  printf("%d\n", sumOfChange);
}

int calculate_quarters(int changeOwed) {
  int quarters = 0;
  while (changeOwed >= 25) {
    quarters++;
    changeOwed = changeOwed - 25;
  }
  return quarters;
}

int calculate_dime(int changeOwed) {
  int dime = 0;
  while (changeOwed >= 10) {
    dime++;
    changeOwed = changeOwed - 10;
  }
  return dime;
}

int calculate_nickel(int changeOwed) {
  int nickel = 0;
  while (changeOwed >= 5) {
    nickel++;
    changeOwed = changeOwed - 5;
  }
  return nickel;
}

int calculate_pennies(int changeOwed) {
  int pennies = 0;
  while (changeOwed >= 1) {
    pennies++;
    changeOwed = changeOwed - 1;
  }
  return pennies;
}
