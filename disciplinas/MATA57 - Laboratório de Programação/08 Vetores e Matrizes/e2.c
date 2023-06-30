#include<stdio.h>
#include<stdlib.h>
int 
main(){
    int linhas, colunas, i, j;
    printf("Digite o numero de linhas: ");
    scanf("%d", &linhas);
    printf("Digite o numero de colunas: ");
    scanf("%d", &colunas);
    
    int matriz[linhas][colunas], matrizTransposta[colunas][linhas];
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            scanf("%d", &matriz[i][j]);
            matrizTransposta[j][i] = matriz[i][j];
        }
    }
    for(i = 0; i < colunas; i++){
        for(j = 0; j < linhas; j++){
            printf("%d ", matrizTransposta[i][j]);
        }
        printf("\n");
    }
}