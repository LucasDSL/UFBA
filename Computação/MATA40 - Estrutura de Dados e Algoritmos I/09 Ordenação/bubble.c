#include<stdio.h>
#include<stdlib.h>

void bubble_sort(float *, int);

int main(){
    float list[] = {1, 234, 2, 3, 12, 234.7, 54, 6, 5, 123, 43, 5, 112, 54, 64, 54123};
    float *not_ord = list;
    int i = 0;
    bubble_sort(not_ord, 16);
    for(i = 0; i < 16; i++){
        printf("%g ", not_ord[i]);
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