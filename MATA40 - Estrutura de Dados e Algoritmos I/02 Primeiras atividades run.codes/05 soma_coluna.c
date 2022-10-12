#include<stdio.h>
#include<stdlib.h>
// Ler matriz, calcular sua transposta e somar os valores na primeira coluna;
int main(){
    int linhas, colunas, i, j;
    scanf("%d %d", &linhas, &colunas);
    int matrix[linhas][colunas], transposta[colunas][linhas], soma = 0;
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            transposta[j][i] = matrix[i][j];
            if(i == 0){
                soma += transposta[j][i];
            }
        }
    }
    printf("%d\n", soma);
    return EXIT_SUCCESS;
}