#include <stdio.h>

int main(void) {
  float a, b;
  printf("Enter the number a and b");
  scanf("%f %f", &a, &b);

  if (a > b)
    puts("A is greater");
  else if (b > a)
    puts("B is greater");
  else
    puts("both the number are equal");

  return 0;
}
