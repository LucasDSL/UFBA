#include<stdio.h>
#include<stdlib.h>
//Exercício 16 [adaptado de Paes (2016)]. Faça uma função recursiva que encontre um determinado número em um vetor e retorne o índice de onde ele foi encontrado. A função deve ter a seguinte assinatura:
//int procurar(int * vetor, int tam, int indice, int num); 
int procurar(int *vetor, int tam, int indice, int num){
    if (indice == tam){
        return -1;
    }
    if(*(vetor+indice) == num){
        return indice;
    }
    else{
        return procurar(vetor, tam, indice+1, num);
    }
}
int main(){
    int vetor[] = {10, 25, 12, 27, 1, 2, 50, 33, 28, 35};

    printf("O numero 1 foi encontrado na posicao %d do vetor [10, 25, 12, 27, 1, 2, 50, 33, 28, 35]\n",
    procurar(vetor, 10, 0, 1));
}