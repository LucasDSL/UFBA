#include<stdio.h>
#include<stdlib.h>
int 
main(){
    int linhas, colunas, i, j;
    printf("Digite o numero de linhas: ");
    scanf("%d", &linhas);
    printf("Digite o numero de colunas: ");
    scanf("%d", &colunas);
    
    int matriz[linhas][colunas], matriz2[linhas][colunas];
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Segunda matriz:\n");
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            scanf("%d", &matriz2[i][j]);
        }
    }

    int matriz_soma[linhas][colunas];
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            matriz_soma[i][j] = matriz[i][j] + matriz2[i][j];
            printf("%d ", matriz_soma[i][j]);
        }
        printf("\n");
    }
}