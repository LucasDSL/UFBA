#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *file;
    printf("Digite o nome do arquivo:");
    char file_name[20];
    scanf("%s", &file_name);
    file = fopen(file_name, "r");
    if(file == NULL){
        printf("Erro na leitura\n");
        return EXIT_FAILURE;
    }
    printf("Digite o nome do novo arquivo:");
    char maiuscula[20];
    scanf(" %s", &maiuscula);
    FILE *new = fopen(maiuscula, "w");
    char c = 'c';
    while(c != EOF){
        c = fgetc(file);
        if(c == EOF){
            break;
        }
        c = toupper(c);
        fputc(c, new);
    }
    fclose(file);
    fclose(new);
    return EXIT_SUCCESS;
}