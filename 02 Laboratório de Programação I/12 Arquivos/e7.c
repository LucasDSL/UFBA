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
    char c;
    FILE *changed_file = fopen("result_6.txt", "w");
    while(c != EOF){
        c = fgetc(file);
        if(c == 'a' || c == 'A'
        || c == 'e' || c == 'E'
        || c == 'i' || c == 'I'
        || c == 'o' || c == 'O'
        || c == 'u' || c == 'U'){
            fputc('*', changed_file);
            continue;
        }
        fputc(c, changed_file);
    }
    fclose(file);
    fclose(changed_file);
    return EXIT_SUCCESS;
}