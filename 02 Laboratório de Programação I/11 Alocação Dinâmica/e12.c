#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct produto{
    int codigo;
    char nome[50];
    float preco;
    int quantidade_estoque;
    
} produto;

void imprimir_produto(produto *);
int main(){
    produto *produtos;
    printf("Quantos produtos serão cadastrados?");
    int produtosQtd, i;
    scanf("%d", &produtosQtd);
    produtos = (produto *) malloc(sizeof(produto) * produtosQtd);
    for(i = 0; i < produtosQtd; i++){
        printf("Entre com as informacoes do produto %d:\n", i+1);
        printf("Digite o codigo do produto:");
        scanf("%d", &((produtos+i)->codigo));
        printf("Digite o nome do produto:");
        scanf(" %s", &((produtos+i)->nome));
        printf("Digite o preco do produto:");
        scanf("%f", &((produtos+i)->preco));
        printf("Digite a quantidade do produto em estoque:");
        scanf("%d", &((produtos+i)->quantidade_estoque));
    }
    produto *produtoPrecoAlto = produtos;
    produto *produtoQuantiaAlta = produtos;
    for(i = 0; i < produtosQtd; i++){
        if((produtos+i)->preco > produtoPrecoAlto->preco){
            produtoPrecoAlto = produtos+i;
        }
        if((produtos+i)->quantidade_estoque > produtoQuantiaAlta->quantidade_estoque){
            produtoQuantiaAlta = produtos+i;
        }
    }
    printf("Produto com preco mais alto: \n");
    imprimir_produto(produtoPrecoAlto);
    printf("Produto com mais quantidade no estoque:\n");
    imprimir_produto(produtoQuantiaAlta);
    free(produtos);
    return EXIT_SUCCESS;
}

void imprimir_produto(produto *p){
    printf("Produto: %s\n", p->nome);
    printf("Quantia em estoque: %d\n", p->quantidade_estoque);
    printf("Preco: %.2f\n", p->preco);
    printf("Codigo: %d\n", p->codigo);
}