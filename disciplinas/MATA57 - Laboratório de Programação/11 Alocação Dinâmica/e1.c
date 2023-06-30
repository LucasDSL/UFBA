#include<stdio.h> 
#include<stdlib.h>

int main(){
    int *vet = (int *) malloc(5 * sizeof(int));
    int i = 0;
    for(i; i < 5; i++){
        printf("Digite um numero: ");
        scanf("%d", vet+i);
    }
    i = 0;
    for(i; i < 5; i++){
        printf("Numero na posicao %d: %d\n", i, *(vet+i));
    }
    free(vet);
    return EXIT_SUCCESS;
}