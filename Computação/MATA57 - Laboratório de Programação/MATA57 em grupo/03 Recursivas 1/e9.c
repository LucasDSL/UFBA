//feito por Alan Cristian Nunes da Silva
#include <stdio.h>

// FunÃ§Ã£o fatorial recursiva
int mdc(int num1, int num2) {
  // Caso base
  if(num2 == 0) {
    return num1;
  }
  // Caso recursivo
  return mdc(num2, num1 % num2);
}

// FunÃ§Ã£o main
int main() {
  // Entrada de dados
  int num1, num2;
  printf("Digite um nÃºmero: ");
  scanf("%i", &num1);
  printf("Digite outro nÃºmero: ");
  scanf("%i", &num2);
  // Chamada da funÃ§Ã£o recursiva
  printf("O MDC entre %i e %i Ã© %i",num1, num2, mdc(num1, num2));
  return 0;
}
