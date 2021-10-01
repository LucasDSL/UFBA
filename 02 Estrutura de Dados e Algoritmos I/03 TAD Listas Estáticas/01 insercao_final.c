#include<stdio.h>
#include<stdlib.h>
// Sabemos que uma lista está "vazia" pois nos é permitido modificar qualquer elemento nela
void insercao_final(int *lista, int *ultimo_valor, int valor_inserir, int tamanho_lista){
    if(*ultimo_valor < tamanho_lista){
        *(lista + *ultimo_valor) = valor_inserir;
        *ultimo_valor += 1;
    }
}

void imprime_lista(int *lista, int *ultimo_valor){
    int i;
    for(i = 0; i < *ultimo_valor; i++){
        printf("%d ", *(lista+i));
    }
}
int main(){
    // Criando a lista 
    int tamanho_maximo = 7;
    int lista[tamanho_maximo];
    int ultima = 0; // Armazena a posição que poderemos inserir um novo elemento
    insercao_final(&lista, &ultima, 2, tamanho_maximo);
    printf("O valor no indice 0 eh: %d\n", lista[0]);
    printf("O proximo valor vazio da lista eh: %d\n", ultima);
    imprime_lista(&lista, &ultima);
}