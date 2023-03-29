// Feito por Lucas Lima 
#include<stdio.h>
#include<stdlib.h>
void maior_em1_menor_em2(int *, int *);

int main(){
    int n1, n2;
    printf("Digite dois numeros: ");
    scanf("%d %d", &n1, &n2);
    printf("O endereco %x contem o numero %d\n", &n1, n1);
    printf("O endereco %x contem o numero %d\n", &n2, n2);
    maior_em1_menor_em2(&n1, &n2);    
    printf("O endereco %x contem o numero %d\n", &n1, n1);
    printf("O endereco %x contem o numero %d\n", &n2, n2);
}


void maior_em1_menor_em2(int *n1, int *n2){
    if(*n1 > *n2){
        return;
    }
    int aux = *n1;
    *n1 = *n2;
    *n2 = aux;
}