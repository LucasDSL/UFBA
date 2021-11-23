#include<stdio.h>
#include<stdlib.h>
void inserir_na_posicao(int *lista, int *ultima_posicao, int valor, int posicao, int len){
    int i = *ultima_posicao;
    if (*ultima_posicao < len){        
        for(i ; i >= posicao; i--){
            // Move os valores a frente da posição desejada para a posicao seguinte
            *(lista+i+1) = *(lista+i);
        }
        *(lista+posicao) = valor;
        *ultima_posicao += 1;
    }
    else{
        fprintf(stderr, "Lista cheia\n");
    }
}

int main(int *argc, int **argv[]){
    int lista[4] = {1, 2, 3};
    // Última posição vazia
    int ultimo = 3;
    printf("Lista: [1, 2, 3]\n");
    printf("Ultima posicao: %d\n", ultimo);
    inserir_na_posicao(&lista, &ultimo, 4, 1, 4);
    printf("Lista atual: ");
    int i = 0;
    for(i; i < ultimo; i++){
        printf("%d ", lista[i]);
    }
    printf("\n");
    printf("Ulima posicao atual: %d\n", ultimo);
}