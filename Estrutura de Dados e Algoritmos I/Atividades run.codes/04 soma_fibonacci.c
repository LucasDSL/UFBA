#include<stdio.h>
#include<stdlib.h>
int
main(){
    unsigned long int atual = 0, penultimo = 0, ultimo = 1;
    int num, i;
    scanf("%d", &num);
    for(i = 2; i <= num; i++){
        atual = ultimo + penultimo;
        penultimo = ultimo;
        ultimo = atual;
    }
    printf("%ld\n", atual);
    return EXIT_SUCCESS;
}