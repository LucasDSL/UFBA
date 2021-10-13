#include<stdio.h>
#include<stdlib.h>

void imprimir(int *, int);

int main(){
    int lista[5] = {1, 2, 3, 4, 5};
    imprimir(lista, sizeof(lista)/4);
}
void imprimir(int *array, int size ){
    int i = 0;
    for(i ; i < size; i++){
        printf("%d ", *(array + i));
    }
    printf("\n");
}