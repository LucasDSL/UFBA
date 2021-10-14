#include<stdio.h>
#include<stdlib.h>

int soma_arrays(int *, int *, int *, int, int);

int main(){
    int lista1[5] = {1, 2, 3, 4, 5};
    int lista2[5] = {4, 4, 5, 5, 10};
    int lista3[5];
    int lista4[4];
    soma_arrays(lista1, lista2, lista3, 5, 5);
    int i = 0;
    printf("Soma das 2 primeiras lista:\n");
    for(i; i < 5; i++){
        printf("%d ", lista3[i]);
    }
    printf("\n");
    printf("Tentativa de somar listas de diferentes tamanhos: \n");
    soma_arrays(lista1, lista4, lista3, 5, 4);
}

int soma_arrays(int *a1, int *a2, int *a3, int tam1, int tam2){
    if(tam1 != tam2){
        printf("Por favor insira listas de tamanhos iguais\n");
        return 0;
    }
    int i = 0;
    for(i = 0; i < tam1; i++){
        *(a3 + i) = *(a1 + i) + *(a2 + i);
    }
    return 1;
}