#include <stdio.h>

int main(void) {
  for (int i = 0; i <= 2; i++) {
    for (int j = 0; j <= 2; j++) {
      if (i <= j)
        printf("%d%d\t", i, j);
      else
        printf("  \t");
    }
    printf("\n");
  }
  return 0;
}
