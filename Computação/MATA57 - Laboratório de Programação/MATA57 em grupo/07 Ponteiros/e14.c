//Feita por Iasmim da Cruz Marinho
//função receba dois parâmetros: um array e um valor do mesmo tipo do array. A função deverá preencher os elementos do array com esse valor.

#include <stdio.h>
#include <stdlib.h>

int preencherArray(int* A, int i);

int main(void) {
  int j;
  int A[5], x[5];
  //recebe valores e passa como parametro
  for(int i = 0; i < 5; i++){
  printf("elemento: ");
  scanf("%d", &j);
  x[i] = preencherArray(A, j);
  }
  printf("-\n");
  //imprime array
  for(int i = 0; i < 5; i++){
  printf("Array[%d]: %d \n", i, x[i]);
  }
  
  return EXIT_SUCCESS;
}
//função preenche array passando endereço do elemento inserido
int preencherArray(int* A, int i){
  int* p = &i;
  A = p;
  return *A;
}
