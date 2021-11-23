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
        if(*(vet + i) % 2 == 0){
            printf("posicao %d = %d (par)\n", i, *(vet + i));
            continue;
        }
        printf("posicao %d = %d (impar)\n", i, *(vet + i));
    }
    free(vet);
    return EXIT_SUCCESS;
}