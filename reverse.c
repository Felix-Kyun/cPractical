#include <stdio.h>

int main(void) {
  int num;

  printf("enter the value: ");
  scanf("%d", &num);

  while (num != 0) {
    printf("%d", num % 10);
    num /= 10;
  }

  return 0;
}
