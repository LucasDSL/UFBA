#include <stdio.h>

int main() {
  int arr[5];

  for (int i = 0; i < 5; i++) { 
    scanf("%d", &arr[i]);
  }

    int *ptr = arr; // o ponteiro aponta para o vetor
    for (int i = 0; i < 5; i++) {
    *ptr = arr[i] * 2; //o ponteiro, primeiro, aponta para a primeira posicao de arr...
    printf("%d ", arr[i]);
    ptr++; //... ao ser incrementado, vai apontando para as posicoes seguintes
  }
} 
