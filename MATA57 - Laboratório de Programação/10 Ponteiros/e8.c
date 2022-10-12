#include<stdio.h>
#include<stdlib.h>
void soma_guarda1(int *, int *);

int main(){
    float lista[5] = {1.0, 2.5, 3.5, 5.6, 8.9};
    float *ptr = lista;
    int i;
    for(i = 0; i < 5; i++){
        printf("Indice %d = %.2f\n", i, *(ptr + i));
    }
}


void soma_guarda1(int *n1, int *n2){
    *n1 = *n1 + *n2;
}