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
    int x, mults = 0;
    printf("digite um numero x: ");
    scanf("%d", &x);
    for(i; i < size; i++){
        if(*(vet + i) % x == 0){
            mults += 1;
        }
    }
    free(vet);
    printf("Existem no vetor passado %d multiplos do numero %d\n", mults, x);
    free(vet);
    return EXIT_SUCCESS;
}