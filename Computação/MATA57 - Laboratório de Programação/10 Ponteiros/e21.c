#include<stdio.h>
#include<stdio.h>

int main(){
    int lista[5] = {1, 2, 3, 4, 5};
    int *ptr = lista;
    int i = 0;
    for(i; i < sizeof(lista)/4; i++){
        *(ptr + i) += 1;
    }
    i = 0;
    for(i; i < sizeof(lista)/4; i++){
        printf("%d ", *(ptr+i));
    }
    printf("\n");
}