// feito por Igor Dantas
// https://github.com/igordantasgf

//Escreva um programa que contenha duas variáveis inteiras. Leia essas variaveis do teclado. 
// Em seguida, compare seus enderecos e exiba o conteudo do maior endereço.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b;
    scanf("%d %d", &a,&b);

    int *p1,*p2; // criacao dos ponteiros p1 e p2
    p1 = &a;     // atribuicao dos valores a e b aos ponteiros criados
    p2 = &b;

    if(p1>p2){   // se o endereco p1 for maior, mostramos seu conteudo
        printf("O maior endereco e %d e armazena %d", p1,*p1);
        printf("\nO endereco menor vale %d", p2);
    }else{       // senao, mostramos p2
        printf("O maior endereco e %d e armazena %d", p2,*p2);
        printf("\nO endereco menor vale %d", p1);
    }

}
