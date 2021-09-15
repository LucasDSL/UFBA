#include<stdio.h>
#include<stdlib.h>
int main(){
    float linhas, linha_sem_rotulo;
    scanf("%f", &linhas);
    scanf("%f", &linha_sem_rotulo);
    float matriz_dados[(int)linhas][(int)linhas+1];
    int i, j;
    float total_rotulos = 0;
    for(i = 0; i < linhas; i++){
        for(j = 0; j < linhas+1; j++){
            if (i == linhas - linha_sem_rotulo && j == linhas){
                matriz_dados[i][j] = (total_rotulos) / (linhas-1); 
            }
            else{
                scanf("%f", &matriz_dados[i][j]);
            }

            if( i != linhas - linha_sem_rotulo && j == linhas){
                total_rotulos += matriz_dados[i][j];
            }

        }
    }

    printf("%.1f", matriz_dados[(int)(linhas-linha_sem_rotulo)][(int)linhas]);
}