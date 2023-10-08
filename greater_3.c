// @Felix-Kyun
#include <stdio.h>

int main(void) {
  float a, b, c, max;
  printf("enter the value of a, b, c: ");
  scanf("%f, %f, %f", &a, &b, &c);
  max = a;
  if (b > max)
    max = b;
  if (c > max)
    max = c;
  printf("the greatest number is: %.2f\n", max);
  return 0;
}
