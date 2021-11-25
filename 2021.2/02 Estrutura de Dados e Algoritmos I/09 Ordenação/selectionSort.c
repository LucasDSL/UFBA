#include<stdio.h>
#include<stdlib.h>

void selection_sort(int *, int);

int main(){

}

void selection_sort(int *vet, int size){
    int i, j, id_smaller, aux;

    for(i = 0; i < size; i++){
        id_smaller = i;
        for(j = i; j < size; j++){
            if(*(vet + j) < *(vet + id_smaller)){
                id_smaller = j;
            }
        }
        aux = *(vet + i);
        *(vet + i) = *(vet + id_smaller);
        *(vet + id_smaller) = aux;
    }
}