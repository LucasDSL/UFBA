// Feito por Lucas Lima 
#include<stdio.h>
#include<stdlib.h>

int main(){
    char alphabet_lower[26] = {'a', 'b', 'c', 'd', 'e' , 'f', 'g', 'h', 
    'i', 'j', 'k','l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 
    'u', 'v', 'w', 'x', 'y', 'z'};
    char alphabet_upper[26] = {'A', 'B', 'C', 'D', 'E' , 'F', 'G', 'H', 
    'I', 'J', 'K','L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 
    'U', 'V', 'W', 'X', 'Y', 'Z'};
    char *quantity = (char *) calloc(26, sizeof(char));
    FILE *file;
    printf("Nome do arquivo: ");
    char file_name[20];
    scanf("%s", &file_name);
    file = fopen(file_name, "r");
    if(file == NULL){
        fprintf(stderr, "Erro na leitura\n");
        return EXIT_FAILURE;
    }
    char c_file = fgetc(file);
    int i;
    while(c_file != EOF){
        for(i = 0; i < 26; i++){
            if(alphabet_lower[i] == c_file 
            || alphabet_upper[i] == c_file){
                *(quantity + i) = *(quantity+i) + 1;
            }
        }
        c_file = fgetc(file);
    }
    fclose(file);
    printf("Quantidades:\n");
    for(i = 0; i < 26; i++){
        printf("Letra %c/%c: %d\n", alphabet_upper[i], alphabet_lower[i], *(quantity + i));
    }
    free(quantity);
    return EXIT_SUCCESS;
}