#include<stdio.h>
#include<stdlib.h>
int main(){
    int i, lista[5];
    int *ptr = lista;
    for(i = 0; i < 5; i++){
        printf("Digite um numero: ");
        scanf("%d", ptr+i);
        /* Salvando o dobro do número por cima do número anterior
        no mesmo endereço.*/
        *(ptr + i) = 2 * (*(ptr+i));
    }
    for(i = 0; i < 5; i++){
        printf("%d\n", *(ptr+i));
    }
}
