#include <stdio.h>

int main(void) {
  int E, D, P;

  scanf("%d %d", &D, &P);
  E = (D * P) / (D + P + 1);

  printf("%d\n", E);
  return 0;
}