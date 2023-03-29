// feito por Igor Dantas
// https://github.com/igordantasgf

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,*a;
    a = malloc (5 * sizeof (int)); // alocacao na memoria de um vetor para 5 inteiros
    
    for(i=0; i<5; i++){
        scanf("%d", &a[i]);    // preenchimento do vetor
    }
    for(i=0; i<5; i++){
        printf("%d ", a[i]);   // demonstracao
    }
    free(a);      // liberando a memoria alocada
}
