#include <stdio.h>
#include <stdlib.h>

//Exercicio 08 de Alocacao Dinamica
// feito por Jonas

int main() {
  int n = 1500;
  int *vetor = calloc(n, sizeof(int)); //Cria 1500 ints inicializados por 0. vetor aponta para a primeira posicao
  int contagem = 0;
  for (int i = 0; i < n; i++) {
    printf("%d: %d \n", contagem, vetor[i]);
    contagem++;
  }
  for (int i = 0; i < n; i++) {
    *(vetor + i) = i;//o valor de cada posicao eh atribuido ao seu respectivo indice.
  }
  contagem = 0;
  for (int i = 0; i < n; i++) {
    if (i < 10) printf("%d: %d \n", contagem, vetor[i]);
    else if (i > 1489) printf("%d: %d \n", contagem, vetor[i]);
    contagem++;
  }
  free(vetor);
  
  return 0;
}
