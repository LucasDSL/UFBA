//feito por Alan Cristian Nunes da Silva
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// FunÃ§Ã£o que pinta na tela o maior nÃºmero do array e quantidade de vezes que ele aparece
void maiorNumero(int *a) {
  int maior = 0, count = 0;
  //Varendo o array
  for(int i = 0; i < 10; i++) {
    // testando se o valor corrente Ã© maior que o valor armazenado em maior
    if(*(a+i) > maior) {
      // atribuindo um novo valor para maior
      maior = *(a+i);
      //resetando o contador
      count = 1;
    // verificando se o maior aparece novamente
    }else if(*(a+i) == maior) {
      // incrementando o contador
      count ++;
    }
  }
  //Printando na tela o valor de maior e quantidade de vezes que ele aparece
  printf("O maior nÃºmero Ã©: %i e apareceu %i vezes",maior, count);
}


int main(void) {
  // Declarando o array
  int a[10] = {1, 2, 6, 6, 6, 6, 3, 3, 6, 5};
  // chamando a funÃ§Ã£o
  maiorNumero(a);
  return 0;
}
