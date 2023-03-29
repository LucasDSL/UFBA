// Feito por Lucas Lima 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 128
float calcula_total(FILE *file){
    // variável que guardará a linha do arquivo 
    char line[MAX];
    char *ptr_line = fgets(line, MAX, file);
    int position_last_space = 0;
    float total = 0;
    while (ptr_line != NULL)
    {

        int i;
        for(i = 0; i < strlen(line); i++){ // em cada linha será buscado o último espaço ' '
            if(ptr_line[i] == ' '){
                position_last_space = i;
            }
        }
        // A partir desse espaço sabemos que os chars seguintes são o número/preço do produto
        char number[10];
        int total_digits = 0;
        for(i = position_last_space; i < strlen(line)-1; i++){
            number[total_digits] = ptr_line[i + 1]; // assim guardamos o preço daquele produto da linha 
            // na variável dita acima, cuidando com o índice de cada dígito
            total_digits++;
        }
        // após isso somamos o número em questão com o total do preço
        total += atof(number);
        // passamos para a próxima linha 
        ptr_line = fgets(line, MAX, file);
    }
    // Retorna o preço total
    return total;
}
int main(){
    FILE *f;
    char file_name[20];
    printf("Nome do arquivo:");
    scanf("%s", &file_name);
    f = fopen(file_name, "r");
    if(f == NULL){
        printf("Erro na leitura!\n");
        return EXIT_FAILURE;
    }
    printf("total: %.2f\n", calcula_total(f));
}