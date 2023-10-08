#include <math.h>
#include <stdio.h>

int main(void) {
  // format is: ax^2 + bx +c
  float a, b, c;
  printf("enter the value of a b c : ");
  scanf("%f %f %f", &a, &b, &c);
  float d = pow(b, 2) - (4 * a * c);
  float rootA = (-b + sqrt(d)) / 2;
  if (d == 0)
    printf("the values of x is %.2f\n", rootA);
  else if (d > 0) {
    float rootB = (-b - sqrt(d)) / 2;
    printf("the value of x are: %.2f, %.2f", rootA, rootB);
  } else
    puts("the roots are imaginary");

  return 0;
}
