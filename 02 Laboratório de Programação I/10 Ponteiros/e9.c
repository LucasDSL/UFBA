#include<stdio.h>
#include<stdlib.h>
int main(){
    int i, j;
    float lista[3][3];
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            lista[i][j] = j-i+5;
        }
    }
    float *ptr = lista;
    printf("Endereco dos elentos da matriz:\n");
    for(i = 0; i < 9; i++){
        printf("%x\n", ptr+i);
    }
}
