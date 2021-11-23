#include<stdio.h>
#include<stdlib.h>

void maior_e_qts_vezes(int *, int);

int main(){
    
}

void maior_e_qts_vezes(int *vet, int size){
    int maior = *vet, i = 1;
    for(i = 1; i < size; i++){
        if(maior < *(vet+i)){
            maior = *(vet+i);
        }
    }
    int maior_vezes = 0;
    for(i = 0; i < size; i++){
        if(maior == *(vet+i)){
            maior_vezes++;
        }
    }
    printf("O maior numero foi %d e apareceu %d\n", maior, maior_vezes);
}