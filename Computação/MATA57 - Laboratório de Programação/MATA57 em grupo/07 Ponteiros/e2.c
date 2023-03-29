//Feita por Iasmim da Cruz Marinho

#include <stdio.h>
#include <stdlib.h>
  //operador de endereço (&)
  //operador conteudo do esndereço (*)

int main(void) {
  //Variaveis estáticas
  int A = 1;
  int B = 2;
 
  //Ponteiros recebe endereço
  int* pA = &A;
  int* pB = &B;

  //imprime endereços
  printf("A= %p, B= %p", pA, pB);
  printf("\n");
  
  //compara endereços e imprime o maior
  if(pA > pB){
  printf("Endereço de A é maior = %p", pA);
  }else
  if(pB > pA){
  printf("Endereço de B é maior = %p", pB);
  }

  return EXIT_SUCCESS;
}
