//feito por Alan Cristian Nunes da Silva
#include <stdio.h>
#include <stdlib.h>

// Soma a e b e armazena em a
void soma(int *ptra, int b) {
  *ptra = *ptra + b;
}


int main(){
  // Declarando as variÃ¡veis
  int a, b;
  // Entada de dados
  printf("Digite o valor de a: ");
  scanf("%i", &a);
  printf("Dgite o valor de b: ");
  scanf("%i", &b);
  //chamando a funÃ§Ã£o soma
  soma(&a, b);
  //printando as variÃ¡veis apÃ³s a funÃ§Ã£o
  printf("a: %i\n", a);
  printf("b: %i\n", b);
	return 0;
}
