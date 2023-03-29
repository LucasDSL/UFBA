#include<stdio.h>
#include<stdlib.h>

float *insertionSortIt(float *, int, int);

int main(){ 
    int entries, iterations, i;
    scanf("%d", &entries);
    float *vet = (float *) malloc(sizeof(float) * (entries-1));
    for(i = 0; i < entries; i++){
        if( i == 0){
            scanf("%d\n", &iterations);
            continue;
        }
        scanf("%f", (vet+i-1));
    }
    float *new_vector = insertionSortIt(vet, entries-1, iterations);
    for(i = 0; i < iterations; i++){
        printf("%g ", *(new_vector + i));
    }
    printf("\n");

    free(new_vector);
    return EXIT_SUCCESS;
}

int *insertion_sort(int *vet, int size){
    int *new_vector = (int *) calloc(size, sizeof(int));
    int i, j, aux;
    for(i = 0; i < size; i++){
        new_vector[i] = vet[i];
        for(j = i; j > 0; j--){
            if(new_vector[j] < new_vector[j-1]){
                aux = new_vector[j];
                new_vector[j] = new_vector[j-1];
                new_vector[j-1] = aux;
            }
        }
    }

    free(vet);
    return new_vector;
}

float *insertionSortIt(float *vet, int size, int iterations){
    float *new_vector = (float *) malloc(iterations * sizeof(float));
    int i, j;
    float aux;
    for(i = 0; i < size; i++){
        new_vector[i] = vet[i];
        for(j = i; j > 0; j--){
            if(new_vector[j] < new_vector[j-1]){
                aux = new_vector[j];
                new_vector[j] = new_vector[j-1];
                new_vector[j-1] = aux;
            }
        }
        if(i == iterations - 1){
            break;
        }
    }

    free(vet);
    return new_vector;
}