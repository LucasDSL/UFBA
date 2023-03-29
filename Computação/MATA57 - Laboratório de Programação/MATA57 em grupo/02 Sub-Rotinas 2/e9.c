//Feita por Iasmim da Cruz Marinho
//O programa ler três valores e apresenta o maior dos três valores lidos

#include <stdio.h>
#include <stdlib.h>

//Assinatura
void MaiorValor(int a, int b, int c);

int main(void) {
  int a, b, c;
  int maior;
  printf("Insira tres numeros: \n");
  scanf("%d%d%d", &a,&b,&c);
  
  MaiorValor(a, b, c);
  
  return EXIT_SUCCESS;
}
//calcula o maior valor
void MaiorValor(a, b, c){
  int maior, maior2;
  //usa formula para encontrar o maior entre 2 valores
  //abs é o valor absoluto da subtração
  maior = ((a + b + abs(a - b))) / 2;
  //usa resultado e faz operação com o terceiro valor
  maior2 = ((maior + c + abs(maior - c))) / 2;

  printf("%d é o maior", maior2);
}
