#include <math.h>
#include <stdio.h>

int is_prime(int n) {
  for (int i = 2; i <= sqrt(n); i++)
    if (n % i == 0)
      return 0;
  return 1;
}

int main(void) {
  int num;
  printf("enter the number: ");
  scanf("%d", &num);
  if (is_prime(num))
    puts("the number is prime");
  else
    puts("the number is not prime");

  return 0;
}
