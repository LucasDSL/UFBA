#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *file;
    char file_name[20];
    printf("Digite o nome do arquivo:");
    scanf("%s", &file_name);
    file = fopen(file_name, "r");
    if(file == NULL){
        printf("Erro na leitura\n");
        return EXIT_FAILURE;
    }
    char c = fgetc(file);
    int vogais = 0;
    while(c != EOF){
        if(c == 'a' || c == 'A'
        || c == 'e' || c == 'E'
        || c == 'i' || c == 'I'
        || c == 'o' || c == 'O'
        || c == 'u' || c == 'U'){
            vogais++;
        }
        c = fgetc(file);
    }
    printf("Quantidade de vogais no arquivo: %d\n", vogais);
    fclose(file);
    return EXIT_SUCCESS;
}