#include<stdio.h>
#include<stdlib.h>

typedef struct {
    char *descricao;
    int quantidade;
} Item;

int main(){
    Item lista_compras[2];

    lista_compras[0].descricao = (char *) malloc(50 * sizeof(char));
    lista_compras[0].descricao = "Carne";
    lista_compras[0].quantidade = 1;

    lista_compras[1].descricao = (char *) malloc(50 * sizeof(char));
    lista_compras[1].descricao = "Arroz";
    lista_compras[1].quantidade = 5;

    printf("Item '%s': %d\n", lista_compras[0].descricao, lista_compras[0].quantidade);

    // Abaixo notações sobre como utilizar structs referenciados por ponteiros.
    Item *novo_item = (Item *) malloc(1 * sizeof(Item));  
    novo_item->descricao = (char *) malloc(50 * sizeof(char));
    novo_item->descricao = "Qualquer coisa";
    novo_item->quantidade = 4;

    printf("Item '%s': %d\n", novo_item->descricao, novo_item->quantidade);

    return EXIT_SUCCESS;
}