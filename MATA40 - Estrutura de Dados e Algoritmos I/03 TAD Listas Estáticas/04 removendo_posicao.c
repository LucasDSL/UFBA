#include<stdio.h>
#include<stdlib.h>
void 
remove_da_posicao(int *lista, int *ultima_posicao, int posicao, int len){
    int i = posicao;
    if(*ultima_posicao < len){
        for(i; i < *ultima_posicao; i++){
            *(lista+i) = *(lista+i+1);
        }
        *ultima_posicao -= 1;
    }
}

int main(){
    int lista[5] = {1, 2, 3, 4}, ultima_posicao = 4;
    printf("Lista antes : [1, 2, 3, 4]\n");
    printf("Ultima posicao disponivel: %d\n", ultima_posicao);
    remove_da_posicao(&lista, &ultima_posicao, 1, 5);
    printf("Lista atual:[ ");
    int i = 0; 
    for(i; i < ultima_posicao; i++){
        printf("%d ", lista[i]);
    }
    printf("]\n");
    printf("Ultima posicao atual: %d\n", ultima_posicao);
}