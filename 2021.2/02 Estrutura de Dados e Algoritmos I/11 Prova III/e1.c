#include<stdio.h>
#include<stdlib.h>

void selection_sort(int *, int);
void selectSortIt(int *, int, int);

int main(){
    int entries, iterations, i;
    scanf("%d", &entries);
    int *vet = (int *) malloc(sizeof(int) * entries);
    for(i = 0; i < entries; i++){
        if( i == 0){
            scanf("%d", &iterations);
            continue;
        }
        scanf("%d", vet+i-1);
    }
    selectSortIt(vet, entries, iterations);
    for(i = 0; i < entries-1; i++){
        printf("%d ", *(vet + i));
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

void selectSortIt(int *vet, int size, int iterations){
    int i, j, id_smaller, aux, n_iterations = 0;
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
        aux = *(vet + i);
        *(vet + i) = *(vet + id_smaller);
        *(vet + id_smaller) = aux;
        n_iterations += 1;
    }
}