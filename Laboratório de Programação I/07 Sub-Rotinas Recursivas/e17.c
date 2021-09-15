#include<stdio.h>
#include<stdlib.h>
int maior(int *vetor, int tam, int indice){
    // Verificando se estamos na primeira posição do vetor
    if(tam == 0){
        return indice;
    }
    else{
        // Verifica a lista em sentido inverso vendo se o primeiro número é maior
        // que o último, caso seja, verifica se o penúltimo número é maior que o último
        // caso seja, verifica se o ante-penúltimo é maior que o penúltimo e assim sucessivamente.
        if(*(vetor + tam-1) > *(vetor + indice)){
            return maior(vetor, tam-1, tam-1);
        }
        else{
            return maior(vetor, tam-1, indice);
        }
    }
}

int main(){
    int lista[] = {1, 2, 3, 7, 12, 3, 3, 27, 54, 31, 2, 5, 7};
    printf("O maior elemento da lista [1, 2, 3, 7, 12, 3, 3, 27, 54, 31, 2, 5, 7] eh: %d\n", 
    maior(&lista, 13, 0));
}
