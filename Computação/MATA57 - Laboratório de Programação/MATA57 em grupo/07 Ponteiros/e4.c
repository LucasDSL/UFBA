#include <stdio.h>

void troca(int *A, int *B) { //a funcao recebe enderecos de memoria como argumentos
  int aux = *A; // Variavel auxiliar guarda o valor de A
  *A = *B; //A recebe B
  *B = aux; //B recebe o valor de A, guardado em aux
}

int main() {
  int A, B;
  scanf("%d %d", &A, &B);

  troca(&A, &B); //Passando os enderecos de A e B...

  printf("%d %d", A, B);
} 
