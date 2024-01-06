//Program to display the day of a week using 
//switch case


#include <stdio.h>

int main() {
  int day;
  printf("Enter the corresponding number to get a day from 1 to 7:");
  scanf("%d", &day);

  switch (day) {
    case 1:
    printf("\n Sunday");
    break;

    case 2:
    printf("\n Monday");
    break;

    case 3:
    printf("\n Tuesday");
    break; 

    case 4:
    printf("\n Wednesday");
    break;

    case 5:
    printf("\n Thursday");
    break;

    case 6: 
    printf("\n Friday");
    break;

    case 7:
    printf("\n Saturday");
    break;

    default:
    printf("Invalid number \n");

  }

}
