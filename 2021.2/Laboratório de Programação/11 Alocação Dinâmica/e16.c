#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int **matriz = (int **) malloc(sizeof(int *) * n);
    int i, j;
    for(i = 0; i < n; i++){
        *(matriz+i) = (int *) malloc(sizeof(int) * m);
        for(j = 0; j < m; j++){
            scanf("%d", *(matriz+i)+j);
        }
    }   
    int **transposta = (int **) malloc(sizeof(int *) * m);
    for(i = 0; i < m; i++){
        *(transposta+i) = (int *) malloc(sizeof(int) * n);
        for(j = 0; j < n; j++){
            *(*(transposta + i) + j) = *(*(matriz + j) + i); 
        }
    }
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            printf("%d ", *(*(transposta+i) + j));
        }
        printf("\n");
    }
    free(matriz);
    free(transposta);
}