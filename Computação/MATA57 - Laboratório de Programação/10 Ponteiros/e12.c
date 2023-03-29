#include<stdio.h>
#include<stdlib.h>

int ordenar_mostrar(int *, int *, int *);

int main(){
    int lista[3];
    int *ptr = lista, i;
    for(i = 0; i < 3; i++){
        printf("digite um numero: ");
        scanf("%d", &lista[i]);
    }
    return ordenar_mostrar(ptr, ptr+1, ptr+2);
}

int ordenar_mostrar(int *n1, int *n2, int *n3){
    if(*n1 == *n2 && *n2 == *n3){
        printf("%d %d %d\n", n1, n2, n3);
        return 1;
    }
    int t = 0, i;
    for(i = 1; i < 3; i++){
        if(*(n1+t) > *(n1+i)){
            int aux = *(n1+i);
            *(n1+i) = *(n1+t);
            *(n1+t) = aux;
        }
        t += 1;
    }
    t = 0;
    for(i = 1; i < 3; i++){
        if(*(n1+t) > *(n1+i)){
            int aux = *(n1+i);
            *(n1+i) = *(n1+t);
            *(n1+t) = aux;
        }
        t += 1;
    }
    printf("%d %d %d\n", *n1, *n2, *n3);
    return 0;
}