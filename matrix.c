#include <stdio.h>

int main(void) {
  for (int i = 0; i <= 2; i++) {
    for (int j = 0; j <= 2; j++) {
      printf("%d%d\t", i, j);
    }
    printf("\n");
  }
  return 0;
}
