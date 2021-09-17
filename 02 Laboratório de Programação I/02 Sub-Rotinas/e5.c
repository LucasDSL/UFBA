#include<stdio.h>
#include<stdlib.h>
//Exercício 05 (Pereira, 2010). O fatorial de um número natural n >= 1 é definido pelo produto 1 x 2 x 3 x ... x n. Codifique uma função em C que receba um número natural n como parâmetro e retorne o seu fatorial. Obs: fatorial(0) = 1 e não existe fatorial de número negativo. 
int fatorial(int num){
    if (num <= 1){
        return 1;
    }
    else{
        return num * fatorial(num-1);
    }
}
int main(){
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);
    printf("Fatorial de %d = %d", numero, fatorial(numero));
}