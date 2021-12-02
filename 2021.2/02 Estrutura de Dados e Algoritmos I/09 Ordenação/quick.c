#include<stdio.h>
#include<stdlib.h>

float partition(float *, int, int);
void quick_sort(float *, int, int);

int main(){
    float n[] = {10, 5, 9, 8, 1, 3, 2};
    quick_sort(n, 0, 6);
    int i;
    for(i = 0; i < 7; i++){
        printf("%g ", n[i]);
    }
    printf("\n");
}


void quick_sort(float *vec, int inicio, int fim){
    float pivo;
    if (fim > inicio){
        pivo = partition(vec, inicio, fim);
        // Particiona do inicio até o pivo
        quick_sort(vec, inicio, pivo-1);
        // Particiona do pivo até o fim
        quick_sort(vec, pivo+1, fim);
    }
}

float partition(float* vetor, int menor, int maior){
    int pivo = vetor[menor];
    int i, j;
    i = menor;
    j = maior;
    int aux;
    while(i <= j){
        while(vetor[i] <= pivo) i++;  //Para não sair do vetor
        while(vetor[j] > pivo) j--;  //Para não sair do vetor
        if(i <= j){
            aux = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = aux;
            i++; j--;
        }
    }
    vetor[menor] = vetor[j];
    vetor[j] = pivo;
    return j;
}