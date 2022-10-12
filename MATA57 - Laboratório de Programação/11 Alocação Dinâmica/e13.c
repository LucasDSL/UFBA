#include<stdio.h>
#include<stdlib.h>

int main(){
    int i, j;
    printf("Quantidade de linhas da matriz:");
    scanf("%d", &i);
    printf("Quantidade de colunas da matriz:");
    scanf("%d", &j);
    int l, m;
    int **matriz = (int **) malloc(sizeof(int*) *i);
    for(l = 0; l < i; l++){
        *(matriz+l) = (int *) malloc(sizeof(int) * j);
        for(m = 0; m < j; m++){
            printf("Digite o numero na posicao %d %d:", l, m);
            scanf("%d", *(matriz+l)+m);
        }
    }
    int num;
    printf("Digite um numero:");
    scanf("%d", &num);
    for(l = 0; l < i; l++){
        for(m = 0; m < j; m++){
            if(*(*(matriz+l)+m) == num){
            printf("1\n");
            free(matriz);
            return EXIT_SUCCESS;
            }
        }
    }
    free(matriz);
    printf("0\n");
    return EXIT_FAILURE;
}