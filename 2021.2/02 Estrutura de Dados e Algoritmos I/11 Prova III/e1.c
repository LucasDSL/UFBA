#include<stdio.h>
#include<stdlib.h>

void selection_sort(int *, int);
void selectSortIt(float *, int, int);

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
    selectSortIt(vet, entries-1, iterations);
    for(i = 0; i < entries-1; i++){
        printf("%g ", *(vet + i));
    }
    printf("\n");
}

void selection_sort(int *vet, int size){
    int i, j, id_smaller, aux;

    for(i = 0; i < size; i++){
        printf("Iteracao: %d\n", i);
        id_smaller = i;
        for(j = i; j < size; j++){
            if(*(vet + j) < *(vet + id_smaller)){
                id_smaller = j;
            }
        }
        aux = *(vet + i);
        *(vet + i) = *(vet + id_smaller);
        *(vet + id_smaller) = aux;
        int t;
        for(t = 0; t < size; t++){
            printf("%d ", *(vet + t));
        }
        printf("\n");
    }
}

void selectSortIt(float *vet, int size, int iterations){
    int i, j, id_smaller, n_iterations = 0;
    float aux;
    for(i = 0; i < size; i++){
        if(n_iterations == iterations){
            break;
        }
        id_smaller = i;
        for(j = i; j < size; j++){
            if(*(vet + j) < *(vet + id_smaller)){
                id_smaller = j;
            }
        }
        if(id_smaller == i){
            continue;
        }
        aux = *(vet + i);
        *(vet + i) = *(vet + id_smaller);
        *(vet + id_smaller) = aux;
        n_iterations += 1;
    }
}