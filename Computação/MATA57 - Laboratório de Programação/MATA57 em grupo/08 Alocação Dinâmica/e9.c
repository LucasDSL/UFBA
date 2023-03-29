// Feito por Lucas Lima 
#include<stdio.h>
#include<stdlib.h>

void lendo_numeros_fazendo_lista(int *numeros_lidos){
    int total_lidos = 0;
    // Lê os números e aumenta o tamanho da lista, alocando o respectivo número
    // Caso ele seja negativo, reduzimos o tamanho da lista já aumentado e não alocamos o número em questão
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
}
int main(){
    // Criando lista inicialmente sem espaço reservado na memória, para 
    // caso não seja alocado nenhum número, nenhum espaço ser gasto.
    int *numeros_lidos = (int *) malloc(0);
    int total_lidos = 0; 
    lendo_numeros_fazendo_lista(numeros_lidos);
    int i = 0;
    printf("Numeros lidos: ");
    for(i; i < total_lidos; i++){
        printf("%d ", *(numeros_lidos+i));
    }
    free(numeros_lidos);
    return EXIT_SUCCESS;
}