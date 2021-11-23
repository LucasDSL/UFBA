#include<stdio.h>
#include<stdlib.h>
int 
main(){
    int linhas1, colunas1, i, j;
    printf("Digite o numero de linhas da primeira matriz: ");
    scanf("%i", &linhas1);
    printf("Digite o numero de colunas da primeira matriz: ");
    scanf("%i", &colunas1);
    int matriz[linhas1][colunas1];
    for(i = 0; i < linhas1; i++){
        for(j = 0; j < colunas1; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    int linhas2, colunas2;
    printf("Segunda matriz:\n");
    printf("Digite o numero de linhas da segunda matriz: ");
    scanf("%i", &linhas2);
    printf("Digite o numero de colunas da segunda matriz: ");
    scanf("%i", &colunas2);
    if(colunas1 != linhas2){
        printf("Erro - o numero de colunas da primeira matriz e de linhas da segunda devem coincidir!\n");
        return EXIT_FAILURE;
    }
    int matriz2[linhas2][colunas2];
    for(i = 0; i < linhas2; i++){
        for(j = 0; j < colunas2; j++){
            scanf("%d", &matriz2[i][j]);
        }
    }
    int matrizProduto[linhas1][colunas2], k;
    for(i = 0; i < linhas1; i++){
        for(j = 0; j < colunas2; j++){
            matrizProduto[i][j] = 0;
            for(k = 0; k < colunas1; k++){
                matrizProduto[i][j] += matriz[i][k] * matriz2[k][j];
            }
        }
    }
    for(i = 0; i < linhas1; i++){
        for(j = 0; j < colunas2; j++){
            printf("%d ", matrizProduto[i][j]);
        }
        printf("\n");
    }
    return EXIT_SUCCESS;
}