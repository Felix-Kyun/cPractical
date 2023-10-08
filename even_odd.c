// @Felix_Kyun
#include <stdio.h>

int main(void) {
  int val;
  printf("enter the number: ");
  scanf("%d", &val);
  if (val % 2 == 0)
    puts("it is a even number");
  else
    puts("it is a odd number");
  return 0;
}
