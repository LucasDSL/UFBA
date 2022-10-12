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
    int vogais = 0, consoantes = 0;
    while(c != EOF){
        if(c == 'a' || c == 'A'
        || c == 'e' || c == 'E'
        || c == 'i' || c == 'I'
        || c == 'o' || c == 'O'
        || c == 'u' || c == 'U'){
            vogais++;
        }
        else{
            if(c != '1' && c != '2' && c != '3'
            && c != '4' && c != '5' && c != '6'
            && c != '7' && c != '8' && c != '9'){
                consoantes++;
            }
        }
        c = fgetc(file);
    }
    printf("Quantidade de vogais no arquivo: %d\n", vogais);
    printf("Quantidade de consoantes no arquivo: %d\n", consoantes);
    fclose(file);
    return EXIT_SUCCESS;
}