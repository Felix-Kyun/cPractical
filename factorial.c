#include <stdio.h>

int factorial(int n) {
  if (n <= 1)
    return 1;
  else
    return factorial(n - 1) * n;
}

int main(void) {
  int n;
  printf("enter the value: ");
  scanf("%d", &n);
  printf("%d! is %d\n", n, factorial(n));
  return 0;
}
