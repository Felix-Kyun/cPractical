#include <stdio.h>

int main(void) {
  int n1 = 0, n2 = 1, tmp = 0, lmt;
  printf("enter the max limit: ");
  scanf("%d", &lmt);
  printf("%d ", n1);

  while (tmp <= lmt) {
    printf("%d ", n2);
    tmp = n1 + n2;
    n1 = n2;
    n2 = tmp;
  }

  return 0;
}
