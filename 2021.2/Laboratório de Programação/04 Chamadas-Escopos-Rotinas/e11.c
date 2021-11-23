#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//Exercício 11 (The Huxley, 2021). Escreva uma função SomaDigitos que receba como entrada um número inteiro e retorne a soma de seus dígitos. Ex.: Se a entrada for 521, a saída será 8 (isto é 5 + 2 + 1).
int somaDigitos(int num){
    int i, soma = 0, qtdDigitos = 1, limite = 10;
    while (num >= limite){
        limite = limite * 10;
        qtdDigitos++;
    }

    int digitos[qtdDigitos];
    for(i = 0; i < qtdDigitos; i++){
        limite = limite / 10; 
        digitos[i] = (num / limite) % 10;
    }

    for(i = 0; i < qtdDigitos; i++){
        soma += digitos[i];
    }
    return soma;
}

int main(){
    int inteiro;;
    printf("Digite um inteiro: ");
    scanf("%d", &inteiro);
    printf("A soma de seus digitos eh: %d\n", somaDigitos(inteiro));    
}