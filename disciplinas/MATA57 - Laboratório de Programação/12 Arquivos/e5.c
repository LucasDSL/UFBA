#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *file; 
    char c, file_name[20];
    printf("Digite o nome do arquivo:");
    scanf("%s", &file_name);
    file = fopen(file_name, "r");
    if(file == NULL){
        printf("Erro na leitura\n");
        return EXIT_FAILURE;
    }
    printf("Digite um char:");
    scanf(" %c", &c);
    int count_c = 0;
    char readn_file = fgetc(file);
    while (readn_file != EOF)
    {
        if(readn_file == c){
            count_c++;
        }
        readn_file = fgetc(file);
    }
    printf("\nO char %c apareceu %d vezes no arquivo\n", c, count_c);
    fclose(file);
    return EXIT_SUCCESS;
}