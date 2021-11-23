#include<stdio.h>
#include<stdlib.h>
// Esvaziar um elemento numa lista é apontar uma posição que possua algo, como uma posição livre para preenchimento
void remover_final(int *ultimo_valor){
    *ultimo_valor -= 1;
}

int main(){
    // Criando a lista 
    int lista[6] = {1, 2, 3, 4};
    int ultima = 3; // Armazena a posição que poderemos inserir um novo elemento
    remover_final(&ultima);
    // Abaixo considero que "removemos" o último elemento
    // Afinal, no lugar onde havia o 4, será considerando livre para colocarmos outro número
    // dessa forma, logicamente vazio.
    printf("O ultimo elemento da lista {1, 2, 3} eh: %d\n", lista[ultima]);
}