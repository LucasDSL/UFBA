#include<stdio.h>
#include<stdlib.h>
//Exercício 15 [adaptado de Paes (2016)]. Crie uma função para calcular, de forma recursiva, a soma dos elementos de um vetor. A função deve ter a seguinte assinatura:
//int soma(int * vetor, int i, int tam)

int soma(int *vetor, int i, int tam){
    if(i == tam-1){
        return *(vetor+i);
    }
    else{
        return *(vetor+i) + soma(vetor, i+1, tam);
    }
}

int main(){
    int vetor[5] = {1, 2, 3, 4, 5};
    printf("A soma dos numeros presentes no vetor [1, 2, 3, 4, 5] eh: %d\n", soma(&vetor, 0, 5));
}