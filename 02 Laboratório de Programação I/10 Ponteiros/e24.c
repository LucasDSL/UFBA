#include<stdio.h>
#include<stdlib.h>

void min_max(int *, int, int *, int *);

int main(){
    int lista[10] = {5, 28, 555, 2, 27, 52, 1, 33, 109, 10000};
    int maior, menor;
    int i = 0;
    printf("Lista: \n");
    for(i; i < 10; i++){
        printf("%d ", lista[i]);
    }
    printf("\n");
    min_max(lista, 10, &menor, &maior);
    printf("O maior numero eh: %d\n", maior);
    printf("O menor numero eh: %d\n", menor);
    return EXIT_SUCCESS;
}

void min_max(int *lista, int size, int *min, int *max){
    *min = *lista;
    *max = *lista;
    int i;
    for(i = 1; i < size; i++){
        if(*min > *(lista + i)){
            *min = *(lista + i);
        }
        if(*max < *(lista + i)){
            *max = *(lista + i);
        }
    }
    return;
}