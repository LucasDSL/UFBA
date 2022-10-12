#include<stdio.h>
#include<stdlib.h>
//Exercício 03 (Pereira, 2010). Codifique um procedimento em C que receba como parâmetro um número natural e exiba se ele é par ou impar.
void mostra_paridade(int num){
    if(num % 2 == 0){
        printf("Par");
    }
    else{
        printf("Impar");
    }
}
int main(){
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);
    mostra_paridade(numero);
}