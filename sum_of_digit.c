#include <stdio.h>

int main(void) {
  int num, sum = 0;

  printf("enter the value: ");
  scanf("%d", &num);

  while (num != 0) {
    sum += num % 10;
    num /= 10;
  }

  printf("sum: %d\n", sum);

  return 0;
}
