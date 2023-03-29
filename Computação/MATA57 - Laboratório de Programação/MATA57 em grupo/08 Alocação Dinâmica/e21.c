// Feito por Lucas Lima
#include<stdio.h>
#include<stdlib.h>

int ** cria_matriz(int linhas, int colunas){
    int **mat = (int **) calloc(linhas, sizeof(int*));
    int i = 0;
    for(i; i < linhas; i++){
        *(mat + i) = (int *) calloc(colunas, sizeof(int));
    }
    return mat;
}

int main(){
    int l1, c1, l2, c2;
    printf("Digite a quantidade de linhas da matriz 1:");
    scanf("%d", &l1);
    printf("Digite a quantidade de colunas da matriz 1:");
    scanf("%d", &c1);
    printf("Digite a quantidade de linhas da matriz 2:");
    scanf("%d", &l2);
    printf("Digite a quantidade de colunas da matriz 1:");
    scanf("%d", &c2);

    int ** matriz1 = cria_matriz(l1, c1);
    int ** matriz2 = cria_matriz(l2, c2);
    int i = 0, j = 0, k;
    printf("Matriz 1:\n");
    for(i = 0; i < l1; i++){
        for(j = 0; j < c1; j++){
            printf("Digite o numero [%d][%d]:" , i, j);
            scanf("%d", (*(matriz1+i))+j);
        }
    }
    printf("Matriz 2:\n");
    for(i = 0; i < l2; i++){
        for(j = 0; j < c2; j++){
            printf("Digite o numero [%d][%d]:" , i, j);
            scanf("%d", (*(matriz2+i))+j);
        }
    }
    printf("Matriz 1:\n");
    for(i = 0; i<l1; i++){
        for(j = 0; j < c1; j++){
            printf("%d ", *(*(matriz1+i) + j));
        }
        printf("\n");
    }
    printf("Matriz 2:\n");
    for(i = 0; i<l2; i++){
        for(j = 0; j < c2; j++){
            printf("%d ", *(*(matriz2+i) + j));
        }
        printf("\n");
    }
    if(c1 != l2){
        printf("Impossível multiplicar as matrizes!\n");
        return EXIT_FAILURE;
    }
    int ** matriz_produto = cria_matriz(l1, c2);
    printf("Matriz Produto das duas:\n");
    for(i = 0; i < l1; i++){
        for(j = 0; j < c2; j++){
            for(k = 0; k < c1; k++){
                *(*(matriz_produto + i)+j) += *(*(matriz1+i) + k) * *(*(matriz2+k) + j);
            }
        }
    }

    for(i = 0; i<l1; i++){
        for(j = 0; j < c2; j++){
            printf("%d ", *(*(matriz_produto+i) + j));
        }
        printf("\n");
    }
    return EXIT_SUCCESS;
}