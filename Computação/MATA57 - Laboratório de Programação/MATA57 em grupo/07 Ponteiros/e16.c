#include <stdio.h>

int main() {
  int A, * B, ** C, *** D;
  scanf("%d", &A);

  B = &A;
  C = &B;
  D = &C;
  

  printf("%d %d %d \n", *B * 2, **C * 3, ***D * 4);
} 
