#include<stdio.h>
#include<stdlib.h>

void shell_sort(int *, int);

int main(){
    int vet[] = {142, 124, 2, 234, 12, 43, 45, 66, 1, 213, 443, 3543, 12, 3};

    shell_sort(vet, 14);
    int i;
    for(i = 0; i < 14; i++){
        printf("%d ", *(vet + i));
    }
    printf("\n");

    free(vet);
    return EXIT_SUCCESS;
}

void shell_sort(int *vet, int size){
    int interval = 1, i;
    while(interval < size) interval *= 3 + 1;
    while (interval > 0){ 
        for(i = interval; i < size; i++){
            int valueToInsert = vet[i], inner = i;
            while(inner > interval - 1 && vet[inner - interval] > valueToInsert){
                vet[inner] = vet[inner - interval];
                inner = inner - interval;
            }
            vet[inner] = valueToInsert;
        }
        interval = (interval - 1)/3;
    }
}