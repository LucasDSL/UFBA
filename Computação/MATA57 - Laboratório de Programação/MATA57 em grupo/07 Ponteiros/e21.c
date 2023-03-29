// feito por Igor Dantas
// https://github.com/igordantasgf

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int i;
    int a[6] = {17,3,17,9,2,17}; // declaracao um array de inteiros
    int *p;                     // criacao do ponteiro

    for(i=5; i>=0; i--){  // loop que percorre o array em ordem decrescente, pois em ordem
                         // crescente, ao incrementar os endereços, iremos ter conflito de dados

        p = &a[i]+1;       // associacao do ponteiro ao endereco do array + 1
        printf("\nO valor %d que estava no endereco %d agora esta em %d", a[i], &a[i], p);
        *p = a[i];       // atribuimos o valor presente no a[i] ao seu endereco, associado anteriormente, incrementado
    }
    for(i=0; i<6; i++){      // loop limitado no indice do array
        printf("\n%d", *p); // printf do elemento presente no endereco p
        p = p+1;           // incrementa p em p+1, percorrendo o array
    }
}  
