#include<stdio.h>
#include<stdlib.h>
int main(){
    int i, lista[5];
    for(i = 0; i < 5; i++){
        printf("Digite um numero: ");
        scanf("%d", &lista[i]);
    }
    int *ptr = lista;
    for(i = 0; i < 5; i++){
        if((*(ptr + i) )% 2 == 0){
            printf("%x\n", ptr+i);
        }
    }
}
