#include <stdio.h>

int main(void) {
  int score;
  printf("enter the score of the student: ");
  scanf("%d", &score);

  if (score >= 90)
    puts("Division A");
  else if (score >= 80)
    puts("Division B");
  else if (score >= 70)
    puts("Division C");
  else if (score >= 60)
    puts("Division D");
  else if (score >= 50)
    puts("Division E");
  else
    puts("Stduent Failed");

  return 0;
}
