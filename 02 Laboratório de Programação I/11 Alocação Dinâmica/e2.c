#include<stdio.h>
#include<stdlib.h>

int main(){
    int size;
    printf("tamanho do vetor: ");
    scanf("%d", &size);
    int *vet = (int *) malloc(sizeof(int) * size);
    int i = 0;
    for(i; i < size; i++){
        printf("Digite um numero: ");
        scanf("%d", vet+i);
    }
    i = 0;
    for(i; i < size; i++){
        printf("Numero na posicao %d: %d\n", i, *(vet+i));
    }
    free(vet);
    return EXIT_SUCCESS;
}