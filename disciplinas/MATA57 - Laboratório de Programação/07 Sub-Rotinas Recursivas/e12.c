#include<stdio.h>
#include<stdlib.h>
//Exercício 12. Crie uma função recursiva que receba um número inteiro n como parâmetro e retorne o soma dos números de 1 a n.
int somaRecursiva(int n){
    if(n == 1){
        return 1;
    }
    else{
        return n + somaRecursiva(n-1);
    }
}

int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("A soma de 1 a n eh: %d\n", somaRecursiva(num));
}