#include<stdio.h>
#include<stdlib.h>
// Lucas Lima 
unsigned int fib(int k){
    // fibonnaci recursiva
    if(k == 0){
        return 0;
    }
    else if(k == 1){
        return 1;
    }
    else{
        return (fib(k-1) + fib(k-2));
    }
}
void fib(unsigned long int k){
    // fibonnaci com somas de dois em dois números
    unsigned long int atual = 0, ultimo = 1, penultimo = 0;
    int i;
    for( i = 2; i <= k; i++) {
        atual = penultimo + ultimo;
        printf("%d ", atual);
        penultimo = ultimo;
        ultimo = atual;
    }
}
