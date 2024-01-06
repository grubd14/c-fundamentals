#include <stdio.h>

int main() {
  int principle;
  double rate;
  double time;
  double si;
  printf("Enter the principle or the amount you want to get the interest of:");
  scanf("%d", &principle);
  printf("Enter the rate of the interest:");
  scanf("%lf", &rate);
  printf("Enter the duration for the simple interest:");
  scanf("%lf", &time);

  si = (principle * rate * time) / 100;
  printf("The simple interest is %lf\n", si);
}
