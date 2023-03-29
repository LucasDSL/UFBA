// Feito por Lucas Lima 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct t {
    int cod;
    char descricao[200];
    int quantidade;
}merch;

merch *cria_produtos(int *);
void retira_produtos(merch *, int);
void relatorio_geral(merch *, int);
void relatorio_indisponiveis(merch *, int);
void write_binary_file(merch *, int);
void menu(int *);

int main(){
    int opcao, total_produtos = 0, exit = 0;
    merch *produtos;
    while(exit == 0){
        menu(&opcao);
        switch (opcao){
            case 1:
                produtos = cria_produtos(&total_produtos);
                break;
            case 2:
                retira_produtos(produtos, total_produtos);
                break;
            case 3:
                relatorio_geral(produtos, total_produtos);
                break;
            case 4:
                relatorio_indisponiveis(produtos, total_produtos);
                break;
            default:
                exit = 1;
                break;
        }   

    }
    write_binary_file(produtos, total_produtos);
    free(produtos);
    return EXIT_SUCCESS;
}

void menu(int *opcao){
    printf("Digite o número correspondente a opção:\n");
    printf("1 - Entrada de produto\n");   
    printf("2 - Retirada de produto\n");   
    printf("3 - Relatorio geral de produtos\n");
    printf("4 - Relatorio de produtos não disponíveis\n");
    printf("5 - Sair do programa\n");
    scanf("%d", opcao);
}
merch *cria_produtos(int *total_produtos){
    printf("Quantos produtos deseja cadastrar? ");
    int quantia, i = 0;
    scanf("%d", &quantia);
    *total_produtos += quantia;
    merch *produtos = (merch *) malloc(quantia * sizeof(merch));
    for(i = 0; i < quantia; i++){
        printf("Produto %d:\n", i+1);
        printf("Quantidade: ");
        scanf("%d", &produtos[i].quantidade);
        printf("Descricao: ");
        scanf(" %[^\n]", &produtos[i].descricao);
        printf("Codigo do produto: ");
        scanf("%d", &produtos[i].cod);
    }
    return produtos;
}
void retira_produtos(merch *produtos, int total_produtos){
    printf("Qual o código do produto que deseja retirar? ");
    int cod_retirada, i = 0;
    scanf("%d", &cod_retirada);
    for(i = 0; i < total_produtos; i++){
        if(produtos[i].cod == cod_retirada){
            printf("Quantia do produto que deseja retirar?");
            int quantia_retirada;
            scanf("%d", &quantia_retirada);
            if(quantia_retirada >= produtos[i].quantidade){
                produtos[i].quantidade = 0;
            }
            else{
                produtos[i].quantidade -= quantia_retirada;
            }
            return;
        }
    }
    printf("Produto não encontrado! Tente novamente!");
}

void relatorio_geral(merch *produtos, int total_produtos){
    int i;
    for(i = 0; i < total_produtos; i++){
        printf("Produto %d\n", i+1);
        printf("Codigo: %d\n", produtos[i].cod);
        printf("Descricao: %s\n", produtos[i].descricao);
        printf("Quantidade: %d\n", produtos[i].quantidade);
    }
    return;
}

void relatorio_indisponiveis(merch *produtos, int total_produtos){
    int i;
    printf("Produtos indisponíveis:\n");
    for(i = 0; i < total_produtos; i++){
        if(produtos[i].quantidade == 0){
            printf("Codigo: %d\n", produtos[i].cod);
            printf("Descricao: %s\n", produtos[i].descricao);
        }
    }
    return;
}

void write_binary_file(merch *produtos, int total_produtos){
    FILE *file = fopen("txts/e24_list_products.txt", "wb");
    if(file == NULL){
        printf("Erro ao tentar gravar dados!\n");
        fclose(file);
        return;
    }
    int produtos_gravados = fwrite(produtos, sizeof(merch), total_produtos, file);
    if(produtos_gravados == total_produtos){
        printf("Informações de todos os produtos armazenadas com sucesso!\n");
        fclose(file);
        return;
    }
    printf("Nem todos os produtos foram armazenados!\n");
    fclose(file);
    return;
}