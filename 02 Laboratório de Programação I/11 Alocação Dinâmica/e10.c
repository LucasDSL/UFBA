#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    double *vet;
    printf("Quantos doubles deseja armazenar?");
    int size;
    scanf("%d", &size);
    if(size < 10){
        printf("Erro - valor deve ser maior ou igual a 10\n");
        return EXIT_FAILURE;
    }
    vet = (double *) malloc(sizeof(double) * size);
    int i;
    for(i = 0; i < 10; i++){
        *(vet + i) = rand() % 100;
    }
    for(i = 0; i < 10; i++){
        printf("Valor na posicao %d: %.2f\n", i, *(vet + i));
    }
    free(vet);
    return EXIT_SUCCESS;
}