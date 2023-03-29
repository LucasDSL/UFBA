// feito por Igor Dantas
// https://github.com/igordantasgf

#include <stdlib.h>
#include <stdio.h>

int procurar(int vetor[], int tam, int indice, int num){ // indice comeca valendo 0 para que faca uma busca crescente no vetor

    if(vetor[indice]==num){        // Se o vetor na posicao "indice" for igual a num (numero que buscamos), retorno o indice;
        printf("Seu numero foi encontrar no indice %d", indice);
        return EXIT_SUCCESS;
    }else if(indice==tam){       // Se o indice ultrapassa o tamanho do vetor, a funcao termina e o numero nao foi encontrado;
                                 // Ex:  se indice = 5 em vetor[5] (indice deve ir até no max 4); 
        printf("Numero nao encontrado");
        return EXIT_FAILURE;
    }else{                       // Caso o valor no indice nao seja o desejado e ainda nao seja o fim da lista,
                                 // realiza-se a chamada recursiva, incrementando o indice para que haja a busca na posicao seguinte; 
        indice++;
        procurar(vetor, tam, indice, num);
    }

}

int main(){
    int vetor[5]={3,7,5,1,9}; // criacao do vetor com 5 elementos
    int indice=0;            
    procurar(vetor,5,indice,1); // busca do valor 1, que retorna a posicao 3 no vetor
}
