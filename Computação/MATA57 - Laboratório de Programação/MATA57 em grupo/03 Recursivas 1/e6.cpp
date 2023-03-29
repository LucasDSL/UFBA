#include <iostream>

//Exercicio 17 de Recursivas
//Feito por Jonas
int maior(int * vetor, int tam,  int indice = 0) {
    if (indice == tam) return vetor[0];
    else if (vetor[indice] >= vetor[0])  { 
        vetor[0] = vetor[indice];
        return maior(vetor, tam, indice + 1);
    }
    else {
        return maior(vetor, tam, indice + 1);
    }
}

int main() {
  int vetor[5] = {1, 7, 5, 6, 9};
  std::cout << maior(vetor, 5);
} 