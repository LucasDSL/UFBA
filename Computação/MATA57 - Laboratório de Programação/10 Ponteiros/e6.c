#include<stdio.h>
#include<stdlib.h>
int soma_dobro(int *, int *);

int main(){
    int n1, n2;
    printf("Digite dois numeros: ");
    scanf("%d %d", &n1, &n2);
    printf("O endereco %x contem o numero %d\n", &n1, n1);
    printf("O endereco %x contem o numero %d\n", &n2, n2); 
    printf("A soma do dobro dos dois eh: %d\n", soma_dobro(&n1, &n2)); 
    printf("O endereco %x contem o numero %d\n", &n1, n1);
    printf("O endereco %x contem o numero %d\n", &n2, n2);
}


int soma_dobro(int *n1, int *n2){
    *n1 = *n1 * 2;
    *n2 = *n2 * 2;
    return *n1 + *n2;
}