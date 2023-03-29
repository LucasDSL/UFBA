// Feito por Lucas Lima
#include<stdio.h>
#include<stdlib.h>

void mostra_pares_impares(int *vet, int tam_vet){
    int i = 0;
    for(i; i < tam_vet; i++){
        if(*(vet + i) % 2 == 0){
            printf("posicao %d = %d (par)\n", i, *(vet + i));
            continue;
        }
        printf("posicao %d = %d (impar)\n", i, *(vet + i));
    }
}
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
    mostra_pares_impares(vet, size);
    free(vet);
    return EXIT_SUCCESS;
}