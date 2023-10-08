// @Felix_Kyun
#include <stdio.h>

int main(void) {
  int year;
  printf("enter the year: ");
  scanf("%d", &year);

  if (year % 4 == 0 &&
      ((year % 100 != 0) || (year % 100 == 0 && year % 400 == 0)))
    puts("the entered year is a leap year");
  else
    puts("entered year is not a leap year");
  return 0;
}
