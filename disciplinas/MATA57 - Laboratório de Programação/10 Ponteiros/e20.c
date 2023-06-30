#include<stdlib.h>
#include<stdio.h>

int negativos(float *, int);

int main(){
    float list[10] = {1, 2, 3, -5, -7, 2, -6, -5, -1.52, -10};
    printf("total de negativos: %d\n", negativos(list, 10));
}

int negativos(float *vet, int n){
    int total_negativos = 0, i = 0;
    for(i; i < n; i++){
        if(*(vet + i) < 0){
            total_negativos++;
        }
    }
    return total_negativos;
}