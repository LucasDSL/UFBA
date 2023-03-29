// Feito por Lucas Lima 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 128
void mostra_informacoes_arquivo(FILE *);
void conta_letras(char *, int, int *);

int main(int *argc, char *arv[]){
    FILE *fil;
    printf("Digite o nome do arquivo:");
    char file_name[20];
    scanf("%s", &file_name);
    fil = fopen(file_name, "r");
    if(fil == NULL){
        printf("Erro na leitura!\n");
        return EXIT_FAILURE;
    }
    mostra_informacoes_arquivo(fil);
    return EXIT_SUCCESS;
}

void mostra_informacoes_arquivo(FILE *file){ // Mostra as informações requeridas na questão 
    char line[MAX];
    int n_lines = 0, n_chars = 0, n_words = 0, i;
    char *ptr_line = fgets(line, 128, file);
    int *quantidade_letras = (int *) calloc(26, sizeof(int)); // lista para guardar a quantidade de cada letra no alfabeto
    while(ptr_line != NULL){
        n_chars += strlen(line) - 1; // Número de chars por linha é o mesmo que o número de caractéres lidos -1 pois desconsideramos \n
        int spaces = 0;
        for(i = 0; i < strlen(line); i++){ // buscamos espaços vazios e '\n's na lista para sabermos 
        // a quantidade de palavras(espaços + 1) e a quantidade de linhas
            if(ptr_line[i] == ' '){
                spaces++;
            }
            if(ptr_line[i] == '\n'){
                n_lines++;
            }
        }
        n_words += spaces + 1;
        conta_letras(ptr_line, strlen(line), quantidade_letras); // irá contar a quantidade de cada 
        // letra específica em cada linha e armazená-la na lista exposta acima 
        ptr_line = fgets(line, 128, file);
    }
    // Mostra a quantidade de cada letra - seja maiúscula ou minúscula - de acordo com a lista exposta
    printf("O arquivo passado tem %d linhas, %d chars, %d palavras.\n",
    n_lines, n_chars, n_words);
    char alphabet_lower[26] = {'a', 'b', 'c', 'd', 'e' , 'f', 'g', 'h', 
    'i', 'j', 'k','l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 
    'u', 'v', 'w', 'x', 'y', 'z'};
    char alphabet_upper[26] = {'A', 'B', 'C', 'D', 'E' , 'F', 'G', 'H', 
    'I', 'J', 'K','L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 
    'U', 'V', 'W', 'X', 'Y', 'Z'};
    printf("Quantia de cada letra:\n");
    for(i = 0; i < 26; i++){
        printf("%c/%c == %d\n", alphabet_upper[i], alphabet_lower[i], quantidade_letras[i]);
    }
}

void conta_letras(char *line, int size_line, int *quantias_letras){
    char alphabet_lower[26] = {'a', 'b', 'c', 'd', 'e' , 'f', 'g', 'h', 
    'i', 'j', 'k','l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 
    'u', 'v', 'w', 'x', 'y', 'z'};
    char alphabet_upper[26] = {'A', 'B', 'C', 'D', 'E' , 'F', 'G', 'H', 
    'I', 'J', 'K','L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 
    'U', 'V', 'W', 'X', 'Y', 'Z'};
    int i = 0;
    // Para cada caracter na linha de arquivo, buscamos um igual nas listas 
    // de caracteres maiúsculos ou minúsculos
    // caso seja espaço vazio já pulamos para a iteração seguinte.
    for(i = 0; i < size_line; i++){
        if(line[i] == ' '){
            continue;
        }
        int j;
        for(j = 0; j < 26; j++){
            if(line[i] == alphabet_lower[j]
            || line[i] == alphabet_upper[j]){
                quantias_letras[j] += 1;
            }
        }
    }
}