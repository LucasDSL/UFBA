#include<stdio.h>
#include<stdlib.h>

int main(){
    int i, j;
    printf("Quantidade de linhas da matriz:");
    scanf("%d", &i);
    printf("Quantidade de colunas da matriz:");
    scanf("%d", &j);
    int l, m;
    int **matriz;
    matriz = (int **) malloc(sizeof(int*) * i);
    for(l = 0; l < i; l++){
        matriz[l] = (int *) malloc(sizeof(int) * j);
        for(m = 0; m < j; m++){
            scanf("%d", &matriz[l][m]);
        }
    }
    for(l = 0; l < i; l++){
        for(m = 0; m < j; m++){
            printf("%d ", *(*(matriz+l) + m));
        }
        printf("\n");
    }
    free(matriz);
    return EXIT_SUCCESS;
}