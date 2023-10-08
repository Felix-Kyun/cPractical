#include <math.h>
#include <stdio.h>

int isArmstrong(int n) {
  int bak = n, len = 0;
  while (bak %= 10) {
    bak /= 10;
    len++;
  }

  int sum = 0;
  for (int i = 0; i < len; i++) {
    sum += pow(n % 10, len);
    n /= 10;
  }

  return (n == sum) ? 1 : 0;
}

int main(int argc, char **argv) {
  int num;
  printf("enter the number: ");
  scanf("%d", &num);
  if (isArmstrong(num))
    puts("the number is a armStrong number");
  else
    puts("the number is not a armStrong number");
  return 0;
}
