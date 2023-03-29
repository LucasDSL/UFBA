//Feita por Iasmim da Cruz Marinho
//array de float contendo 10 elementos. Imprima o endereço de cada posição desse array.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  //array estático
  float A[10] = {2,4,6,8,10,15,20,25,30,50};
  
  //Ponteiro recebe o endereço de cada elemento do vetor
  for(int i = 0; i < 10; i++){
    float* pA = &A[i];
    printf("Conteudo: %g posição[%d] = %p\n", A[i], i, pA);
     printf("-\n");
  }

  return EXIT_SUCCESS;
}
