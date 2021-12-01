#include<stdio.h>
#include<stdlib.h>

void bubble_sort(float *, int);
void bubbleSortIt(float *, int, int);

int main(){
    int entries, iterations, i;
    scanf("%d", &entries);
    float *vet = (float *) malloc(sizeof(float) * (entries-1));
    int size_vet = entries-1;
    for(i = 0; i < entries; i++){
        if( i == 0){
            scanf("%d\n", &iterations);
            continue;
        }
        scanf("%f", (vet+i-1));
    }
    bubbleSortIt(vet, size_vet, iterations);
    for(i = 0; i < size_vet; i++){
        printf("%g ", vet[i]);
    }
    printf("\n");
}

void bubble_sort(float *vec, int size){
    int not_ordained = 1, i;
    float aux;
    while(not_ordained){
        for(i = 0; i < size-1; i++){
            if(vec[i] > vec[i + 1]){
                aux = vec[i];
                vec[i] = vec[i + 1];
                vec[i + 1] = aux;
            }
        }
        if(size == 1){
            not_ordained = 0;
        }
        size = size - 1;
    }
}

void bubbleSortIt(float *vec, int size, int iterations){
    int not_ordained = 1, i, n_iterations = 0;
    float aux;
    while(not_ordained){
        n_iterations ++;
        for(i = 0; i < size-1; i++){
            if(vec[i] > vec[i + 1]){
                aux = vec[i];
                vec[i] = vec[i + 1];
                vec[i + 1] = aux;
            }
        }
        if(n_iterations == iterations){
            break;
        }
        if(size == 1){
            not_ordained = 0;
        }
        size = size - 1;
    }
}