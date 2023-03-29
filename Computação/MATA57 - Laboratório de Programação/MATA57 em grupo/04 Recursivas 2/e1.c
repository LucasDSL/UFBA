//Feita por Iasmim da Cruz Marinho
//dada a quantidade de blocos existentes na base, retorne o total de blocos da pirâmide.

#include <stdio.h>
#include <stdlib.h>

int 
totalBlocos(int base);

int main(void) {
  int base, total;

  printf("Quantos blocos existem na base da piramide?\n");
  scanf("%d", &base);
  //chama a função
  total = totalBlocos(base);

  printf("Total = %d blocos!\n", total);
}

int 
totalBlocos(int base){
//caso base: quando número de blocos da base for 1
if(base == 1){
  return base;
}
else
//faz chamada recursiva subtraindo 1 bloco e somando com a base
  return base + totalBlocos(base - 1) ;
}
