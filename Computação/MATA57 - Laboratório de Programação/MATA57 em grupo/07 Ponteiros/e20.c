//Feita por Iasmim da Cruz Marinho
//retorne quantos números negativos há nesse array

#include <stdio.h>
#include <stdlib.h>

//assinatura da função
int negativos(float* vet, int N);

int main(void) {

  int N, resultado;
  float i;
  //recebe tamanho do vetor
  printf("Informe o tamanho do array:\n");
  scanf("%d", &N);
  printf("-\n");

    float vet[N];
  //preenche vetor
    for(int j = 0; j < N; j++){
    scanf("%f", &vet[j]);
    }
  //chamada a função 
  resultado = negativos(vet, N);
  printf("Possui %d negativos no array", resultado);


  return EXIT_SUCCESS;
}

int 
negativos(float *vet, int N){
  int c = 0;
  //ponteiro aponta endereço de vetor
  float* p = vet;
  //percorre ponteiro e conta negativos
  for(int i = 0; i < N; i++){
    if(p[i] < 0){
      c++;
    }
  }
  return c;
}
