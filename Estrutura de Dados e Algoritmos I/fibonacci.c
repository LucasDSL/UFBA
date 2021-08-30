#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
unsigned int fib(int k){
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

// Ao passar 45 como argumento, fib2 leva menos de 1s enquanto fib leva 15s
// por conta da recursividade.
unsigned long int fib2(unsigned long int k){
    unsigned long int atual = 0, ultimo = 1, penultimo = 0;
    int i;
    for( i = 2; i <= k; i++){
        atual = penultimo + ultimo;
        penultimo = ultimo;
        ultimo = atual;
    }
    return atual;
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    unsigned long int k;
    printf("Digite um numero: ");
    scanf("%ld", &k);

    printf("Resultado: %ld", fib2(k));

    return 0;
}