#include<stdio.h>
#include<stdlib.h>
void troca_valores_enderecos(int *, int *);

int main(){
    int n1, n2;
    printf("Digite dois numeros: ");
    scanf("%d %d", &n1, &n2);
    printf("O endereco %x contem o numero %d\n", &n1, n1);
    printf("O endereco %x contem o numero %d\n", &n2, n2);
    troca_valores_enderecos(&n1, &n2);    
    printf("O endereco %x contem o numero %d\n", &n1, n1);
    printf("O endereco %x contem o numero %d\n", &n2, n2);
}


void troca_valores_enderecos(int *n1, int *n2){
    int aux = *n1;
    *n1 = *n2;
    *n2 = aux;
}