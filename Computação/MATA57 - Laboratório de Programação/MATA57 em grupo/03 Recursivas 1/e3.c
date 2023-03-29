//feito por Alan Cristian Nunes da Silva
#include <stdio.h>

// FunÃ§Ã£o fatorial recursiva
long long int fatorial(int num) {
  // Caso base
  if(num == 1 || num == 0){
    return 1;
  }
  // Caso Recursivo
  return num * fatorial(num-1);
}

// FunÃ§Ã£o main
int main() {
  // Entrada de dados
  int num;
  printf("Digite um nÃºmero: ");
  scanf("%i", &num);
  // Verifica se num Ã© positivo
  if(num >= 0) {
    printf("O fatorial de %i Ã©: %lli", num, fatorial(num));
  }else {
    printf("NÃºmero digitado invÃ¡lido!");
  }
  return 0;
}
