//Feita por Iasmim da Cruz Marinho
//calcular, de forma recursiva, a soma dos elementos de um vetor
#include <stdio.h>
#include <stdlib.h>

//Assinatura da função
int 
soma(int *vetor, int i, int tam);

int main(void) {
  int tam;
  int i;

  printf("Informe o tamanho do vetor: ");
  scanf("%d", &tam);
  int vetor[tam];

  //faz leitura até atingir tamanho do vetor
  for(i = 0; i<tam; i++){
    printf("%dº valor: ", i);
    scanf("%d", &vetor[i]);
  }
  i = 0;
  //chama a função 
  int Soma = soma(vetor,  i,  tam);

  printf("Soma: %d\n", Soma);
  return 0;
}

int 
soma(int *vetor, int i, int tam){
    //se o o primeiro elemento  == a o ultimo
  if(i == tam-1){
    //retornar primeiro valor
    //Caso base: vetor com 1 unico elemento
    return vetor[i];
  }

  //se não, retorne primeiro elemento + soma() com indice incrementado - chamada recursiva a função
  return vetor[i] + soma(vetor,  i+1,  tam);
}
