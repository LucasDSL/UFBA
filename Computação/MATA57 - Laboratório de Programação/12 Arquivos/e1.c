#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *file;
    file = fopen("arq.txt", "w");
    if(file == NULL){
        printf("Erro ao abri arquivo\n");
        return EXIT_FAILURE;
    }
    char caracter;
    printf("Digite um caracter:");
    scanf("%c", &caracter);
    while(caracter != '0'){
        fputc(caracter, file);
        printf("Digite um caracter:");
        scanf(" %c", &caracter);
    }
    fclose(file);
    return EXIT_SUCCESS;
}