#include<stdio.h>
#include<stdlib.h>
//Exercício 14 [adaptado de Paes (2016)]. Crie uma função recursiva que encontre o fatorial de um número. Lembre que: fatorial(0) = 1; fatorial(n) = n * fatorial(n -1), para n > 0.

int fatorial(int n){
    if (n <= 1){
        return 1;
    }
    else{
        return n * fatorial(n - 1);
    }
}

int main(){
    int numero;
    printf("Digite um numero: " );
    scanf("%d", &numero);
    printf("O fatorial desse numero eh: %d\n", fatorial(numero));
}
