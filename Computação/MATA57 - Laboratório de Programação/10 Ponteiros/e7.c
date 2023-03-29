#include<stdio.h>
#include<stdlib.h>
void soma_guarda1(int *, int *);

int main(){
    int n1, n2;
    printf("Digite dois numeros: ");
    scanf("%d %d", &n1, &n2);
    printf("O endereco %x contem o numero %d\n", &n1, n1);
    printf("O endereco %x contem o numero %d\n", &n2, n2); 
    printf("Passado a soma dos numeros anteriores para a primeira variavel...\n");
    soma_guarda1(&n1, &n2);
    printf("O endereco %x contem o numero %d\n", &n1, n1);
    printf("O endereco %x contem o numero %d\n", &n2, n2);
}


void soma_guarda1(int *n1, int *n2){
    *n1 = *n1 + *n2;
}