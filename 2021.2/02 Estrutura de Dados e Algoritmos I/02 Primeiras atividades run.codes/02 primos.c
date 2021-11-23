#include<stdlib.h>
#include<stdio.h>
int 
main(){
    int i, numero;
    scanf("%d", &numero);
    int div = 0;
    if (numero == 1){
        printf("%d\n", 0);
        return EXIT_SUCCESS;
    }
    else if(numero == 2){
        printf("%d\n", 1);
        return EXIT_SUCCESS;
    }
    int fim = numero / 2;
    for(i = 2; i <= fim; i++){
        if (numero % i == 0){
            div ++;
        }
    }
    if(div  == 0){
        printf("%d\n", 1);
    }
    else{
        printf("%d\n", 0);
    }
    return EXIT_SUCCESS;
}