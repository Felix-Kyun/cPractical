#include <math.h>
#include <stdio.h>

int main(void) {
  int base, power, out = 1;
  printf("enter the value of the base and power in the format base^power: ");
  scanf("%d^%d", &base, &power);

  for (int i = 1; i <= power; i++) {
    out *= base;
  }
  printf("the value is %d\n", out);

  return 0;
}
