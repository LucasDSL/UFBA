#include<stdio.h>
#include<stdlib.h>

int main(){
    int *numeros_lidos = (int *) malloc(0);
    int total_lidos = 0;
    while(1){
        total_lidos++;
        numeros_lidos = (int *) realloc(numeros_lidos, sizeof(int) * (total_lidos));
        int entrada;
        scanf("%d", &entrada);
        if(entrada < 0){
            total_lidos -= 1;
            numeros_lidos = (int *) realloc(numeros_lidos, sizeof(int)*(total_lidos));
            break;
        }
        *(numeros_lidos + total_lidos - 1) = entrada;
    }
    int i = 0;
    printf("Numeros lidos: ");
    for(i; i < total_lidos; i++){
        printf("%d ", *(numeros_lidos+i));
    }
    free(numeros_lidos);
    return EXIT_SUCCESS;
}