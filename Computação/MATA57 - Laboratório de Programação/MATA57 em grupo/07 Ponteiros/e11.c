// Feito por Lucas Lima 
#include<stdio.h>
#include<stdlib.h>

// Função que acessa a lista, a percorre e imprime pares
// (Já sabemos a quantidade de números na lista)
void print_pares(int *);

int main(){
    // Lemos os 5 números
    int i, lista[5];
    for(i = 0; i < 5; i++){
        printf("Digite um numero: ");
        scanf("%d", &lista[i]);
    }
    int *ptr = &lista;
    print_pares(ptr);
}

void print_pares(int *list){
    int i;
    for(i = 0; i < 5; i++){
        if((*(list + i)) % 2 == 0){
            printf("%x\n", *(list+i));
        }
    }
}