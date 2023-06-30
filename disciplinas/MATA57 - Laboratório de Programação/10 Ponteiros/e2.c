#include<stdio.h>
#include<stdlib.h>
int main(){
    int n1, n2;
    n1 = 2;
    n2 = 4;
    printf("Endereco do primeiro numero: %x\n", &n1);
    printf("Endereco do segundo numero: %x\n", &n2);
    if(&n1 > &n2){
        printf("Endereco do maior: %x\n", &n1);
        return EXIT_SUCCESS;
    }
    printf("Endereco do maior: %x\n", &n2);
    return EXIT_SUCCESS;
}