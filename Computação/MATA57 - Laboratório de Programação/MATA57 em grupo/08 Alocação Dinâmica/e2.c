#include <stdio.h>
#include <stdlib.h>
//Exercicio 2 de Alocacao Dinamica
//Feito por Jonas
int main() {
  int n; // tamanho do vetor
  scanf("%d", &n);
  int *p = malloc(n * sizeof(int)); 
  for (int i = 0; i < n; i++) {
    scanf("%d", p + i);
  }
  
  for (int i = 0; i < n; i++) {
    printf("%d ", *(p + i));
  }
  free(p);
  
  return 0;
}
