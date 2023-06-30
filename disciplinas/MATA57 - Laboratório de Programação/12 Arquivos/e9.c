#include<stdio.h>
#include<stdlib.h>

int main(void){
    FILE *file1, *file2;
    printf("Arquivo 1:");
    char file_1[20], file_2[20];
    scanf("%s", &file_1);
    printf("Arquivo 2:");
    scanf(" %s", &file_2);

    file1 = fopen(file_1, "r");
    file2 = fopen(file_2, "r");
    if(file1 == NULL || file2 == NULL){
        printf("Erro na leitura\n");
        return EXIT_FAILURE;
    }
    FILE *write_new = fopen("newfile.txt", "w");
    char c1 = fgetc(file1);
    while(c1 != EOF){
        fputc(c1, write_new);
        c1 = fgetc(file1);
    }
    fclose(file1);
    char c2 = fgetc(file2);
    while(c2 != EOF){
        fputc(c2, write_new);
        c2 = fgetc(file2);
    }
    fclose(file2);
    fclose(write_new);
    return EXIT_SUCCESS;
}