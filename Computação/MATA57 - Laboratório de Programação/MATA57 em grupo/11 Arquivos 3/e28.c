// Feito por Lucas Lima 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_COLUMN_SIZE 30

void revert_file(FILE *file);
int count_file_lines_and_columns(FILE *, char **); // Conta o total de linhas e aloca a memória 
//necessária numa matriz, além de retornar o total de linhas
int main(){
    FILE *file_read;
    printf("Nome do arquivo:");
    char file_name[20];
    scanf("%s", &file_name);
    file_read = fopen(file_name, "r");
    if(file_read == NULL){
        printf("erro na leitura!\n");
        return EXIT_FAILURE;
    }
    revert_file(file_read);
    free(file_read);
    return EXIT_SUCCESS;
}

void revert_file(FILE *file){
    char **lines = (char **) malloc(sizeof(char *));
    int total_lines = count_file_lines_and_columns(file, lines), i = 0, j = 0;
    /* for(i = 0; i < total_lines; i++){
        for (j = 0; j < MAX_COLUMN_SIZE; j++){
            if(lines[i][j] == '\0'){
                int t;
                for(t = j-1; t>=0; t--){
                    printf("%c", lines[i][t]);
                }
                break;
            }
        }
        printf("\n");
    } */
}

int count_file_lines_and_columns(FILE *file, char **lines){
    char *ptr_line = fgets(lines[0], MAX_COLUMN_SIZE, file);
    int total_lines = 0;
    while(ptr_line != NULL){
        total_lines ++;
        lines = (char **) realloc(lines, sizeof(char *) * total_lines+1);
        int i = 0;
        ptr_line = fgets(lines[total_lines], MAX_COLUMN_SIZE, file);
    }
    int i = 0, j = 0;
    for(i = 0; i < total_lines; i++){
        for (j = 0; j < MAX_COLUMN_SIZE; j++){
            if(lines[i][j] == '\0' || lines[i][j] == '\n'){
                break;
            }
            printf("%c", lines[i][j]);
        }
        printf("\n");
    }
    return total_lines;
}