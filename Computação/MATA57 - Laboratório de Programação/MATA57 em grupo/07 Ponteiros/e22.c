#include <stdio.h>

int soma_arr(int * arr1, int * arr2, int tamanho_arr1, int tamanho_arr2, int * arr3) {
  if (tamanho_arr1 != tamanho_arr2) return 0;

  for (int i = 0; i < tamanho_arr1; i++) { 
    *arr3 = arr1[i] + arr2[i];
    //o codigo tbm funciona com arr3[i] = arr1[i] + arr2[i] (sem incrementar arr3)
    arr3++; //Originalmente, arr3 aponta para a primeira posicao do vetor passado como parametro. Cada novo incremento o faz apontar para a proxima posicao.
  }

  return 1;
}

int main() {
  int arr1[3] = {12, 3, 5};
  int arr2[3] = {42, 7, 1};
  int arr3[3];
  int tam = 3;
  soma_arr(arr1, arr2, tam, tam, arr3);
  for (int i = 0; i < tam; i++) printf("%d ", arr3[i]);
} 
