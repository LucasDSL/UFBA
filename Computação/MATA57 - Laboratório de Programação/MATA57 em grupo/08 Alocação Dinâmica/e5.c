//feito por Alan Cristian Nunes da Silva
#include <stdio.h>
#include <stdlib.h>

int main() {
  //lendo o tamanho do vetor
  int n;
  printf("Digite o tamanho do vetor: ");
  scanf("%i", &n);
  //Alocando vetor com tamanho n
  int *p = malloc(n * sizeof(int));
  //Escrevendo no vetor
  for(int i = 0; i < n; i++) {
    printf("Digite o %iÂ° nÃºmero: ", (i+1));
    scanf("%i", &p[i]);
  }
  //lendo o valor x
  int  x;
  printf("Digite um nÃºmero: ");
  scanf("%i", &x);
  //buscando os multiplos  de x no vetor
  int cont = 0;
  for(int i = 0; i < n; i++) {
    if(p[i] % x == 0) {
      cont ++;
    }
  }
  //Mostrando na tela a quantidade e os multiplos
  printf("Temos %i multiplos de %i (", cont, x);
  for(int i = 0; i < n; i++) {
    if(p[i] % x == 0) {
      printf(" %i ", p[i]);
    }
  }
  printf(")");
  return 0;
}
