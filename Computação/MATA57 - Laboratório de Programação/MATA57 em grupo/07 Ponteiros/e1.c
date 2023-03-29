//feito por Alan Cristian Nunes da Silva
#include <stdio.h>
#include <stdlib.h>


int main(){
  // Declarando as variÃ¡veis
  int inteiro = 0;
  double real = 12.5;
  char caracter = 'a';
  // Declarando os ponteiros e atribuindo a eles o endereÃ§o das variÃ¡veis
  int *ptrint = &inteiro;
  double *ptrdouble = &real;
  char *ptrchar = &caracter;
  // Printando as variÃ¡veis antes de modificar
  printf("%i\n", *ptrint);
  printf("%.2f\n", *ptrdouble);
  printf("%c\n", *ptrchar);
  // Modificando as variÃ¡veis atravÃ©s dos ponteiros
  *ptrint = 20;
  *ptrdouble = 30.5;
  *ptrchar = 'b';
  // Printando as variÃ¡veis modificadas
  printf("%i\n", *ptrint);
  printf("%.2f\n", *ptrdouble);
  printf("%c\n", *ptrchar);
	return 0;
}
