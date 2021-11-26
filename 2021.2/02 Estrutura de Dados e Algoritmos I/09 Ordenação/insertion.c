#include<stdio.h>
#include<stdlib.h>

int *insertion_sort(int *, int);
void insertion_sort_inSitu(int *, int);

int main(){ 
    // Example 
    int vet[] = {142, 124, 2, 234, 12, 43, 45, 66, 1, 213, 443, 3543, 12, 3};

    int *new_vector = insertion_sort(vet, 14);
    int i;
    for(i = 0; i < 14; i++){
        printf("%d ", *(new_vector + i));
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
        if(i == 0) continue;
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