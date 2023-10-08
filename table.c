// @Felix-Kyun
#include <stdio.h>

int main(void) {

  int table;

  printf("enter the number: ");
  scanf("%d", &table);

  for (int i = 1; i <= 10; i++) {
    printf("%d x %d = %d\n", table, i, table * i);
  }

  return 0;
}
