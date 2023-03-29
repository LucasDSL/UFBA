#include <stdio.h>
#include <stdlib.h>

//Exercicio 14 de Alocacao Dinamica
// feito por Jonas

int main() {
  int linhas, colunas;
  printf("Insira numero de linhas: ");
  scanf("%d", &linhas);

  printf("Insira numero de colunas: ");
  scanf("%d", &colunas);


  double *vetor = malloc(linhas * colunas * sizeof(int));
  
  for (int i = 0; i < linhas * colunas; i++) {
    scanf("%lf", vetor + i); //atribui o valor inputado a uma posicao especifica do vetor, atraves de aritmetica de ponteiros
  }

  for (int i = 0; i < linhas * colunas; i++) {
    printf("%lf ", *(vetor + i));
     if ((i + 1) % colunas == 0) printf("\n");
     //por ser uma matriz de dimensao dupla, podemos simplesmente manipular a apresentacao de um ponteiro unidimensional, atraves de um if. Eh a maneira mais simples. 
  }

  free(vetor);
  
  return 0;
}
