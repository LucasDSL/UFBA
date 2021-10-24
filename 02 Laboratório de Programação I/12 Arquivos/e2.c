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
    int lines = 0;
    while(c != EOF){
        if(c == '\n'){
            lines++;
        }
        c = fgetc(file);
    }
    printf("Quantidade de linhas no arquivo: %d\n", lines);
    fclose(file);
    return EXIT_SUCCESS;
}