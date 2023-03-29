//Feita por Iasmim da Cruz Marinho
//leia duas matrizes de inteiros e preencha uma terceira matriz com o resultado da soma das duas

#include <stdio.h>
#include <stdlib.h>

//assinatura dos procedimentos
void 
somaMat(int n, int m, int A[n][m], int B[n][m]);
void 
preencherMat(int n, int m, int M[n][m]);

int main(void) {
  
  //linha e coluna
  int l, c;

  printf("Informe numero de linhas das matrizes: ");
      scanf("%d",  &l);
  printf("Informe numero de colunas das matrizes: ");
      scanf("%d", &c);

  int A [l][c];
  int B [l][c];
  int C [l][c];

  //limites de linha e coluna
  if(l>=1 && l<=100 && c>=1 && c<=100){
    
    //preenche matriz A
    preencherMat(l, c, A);
    //preenche matriz B
    preencherMat(l, c, B);
    //Imprime matriz C
    somaMat(l, c, A, B);
  }
  return EXIT_SUCCESS;
}

//Procedimento para preencher as matrizes
void 
preencherMat(int l, int c, int M[l][c]){
  printf("Preencha a matriz:\n");
  for(int i = 0; i < l; i++){
    for(int j = 0; j < c; j++){
      scanf("%d", &M[i][j]);
    }
  }
}

//procedimento para fazer soma das duas matrizes em uma terceira matriz
void 
somaMat(int l, int c, int A[l][c], int B[l][c]){
  printf("Matriz somada:\n");
  int C[l][c];

  for(int i = 0; i < l; i++){
    for(int j = 0; j < c; j++){
      C[i][j] = A[i][j] + B[i][j];
      printf("%d ", C[i][j]);
    }
  }
}


