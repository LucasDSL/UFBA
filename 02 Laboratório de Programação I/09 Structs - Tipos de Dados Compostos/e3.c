#include<stdio.h>
#include<stdlib.h>

typedef struct produto{
    int codigo;
    char descricao[200];
    float preco;
    int quantidade_estoque;
} produto;

void cadastrar_produtos(int, produto *);
int main(){
    int produtos_cadastrados;
    printf("Digite a quantidade de produtos a cadastrar:");
    scanf("%d", &produtos_cadastrados);
    produto produtos[100];
    cadastrar_produtos(produtos_cadastrados, &produtos);
    int codigos_escolhidos[100], cont_escolhidos = 0;
    int total_codigo[100];
    float total_conta = 0;
    while(1){
        int cod_prod_desejado, quantidade_desejada;
        printf("Codigo do produto:");
        scanf("%d", &cod_prod_desejado);
        printf("Digite a quantidade desejada do produto:");
        scanf("%d", &quantidade_desejada);
        if(quantidade_desejada < 0){
            printf("Quantidade invalida, por favor digite novamente!\n");
            continue;
        }
        int i = 0, encontrado = 0;
        for(i; i < sizeof(produtos)/sizeof(produto); i++){
            if(produtos[i].codigo == cod_prod_desejado){
                codigos_escolhidos[cont_escolhidos] = cod_prod_desejado;
                if(produtos[i].quantidade_estoque <= quantidade_desejada){
                    total_codigo[cont_escolhidos] = produtos[i].quantidade_estoque;
                    produtos[i].quantidade_estoque = 0;
                }
                else{
                    total_codigo[cont_escolhidos] = quantidade_desejada;
                    produtos[i].quantidade_estoque -= quantidade_desejada;
                }
                total_conta += total_codigo[cont_escolhidos] * produtos[i].preco;
                cont_escolhidos++;
                encontrado = 1;
            }
        }   
        if(encontrado){
            printf("Deseja adicionar outro produto ao carrinho?(S/N)");
            char res;
            scanf("%c", &res);
            if(res == 'S'){
                continue;
            }
            break;
        }
        printf("Produto não encontrado! Tente novamente!");
        printf("Deseja adicionar outro produto ao carrinho?(S/N)");
        char res;
        scanf("%c", &res);
        if(res == 'N'){
            break;
        }
    }
    printf("Nota fiscal: \n");
    int j = 0;
    for(j; j < cont_escolhidos-1; j++){
        printf("Produto %d - quantidade: %d\n", codigos_escolhidos[j], total_codigo[j]);
    }
    printf("Obrigado por comprar conosco, volte sempre!");
}

void cadastrar_produtos(int total_produtos, produto *lista_produtos){
    int i = 0;
    for(i; i < total_produtos; i++){
        int new_quantidade;
        printf("Digite a quantidade de produtos em estoque: ");
        scanf("%d", &new_quantidade);
        (lista_produtos + i)->quantidade_estoque = new_quantidade;
        int new_codigo;
        printf("Digite o codigo do produto: ");
        scanf("%d", &new_codigo);
        (lista_produtos+i)->codigo = new_codigo;
        // Adicionando descricao
        char new_descricao[200];
        printf("Digite a descricao do produto: ");
        scanf(" %[^\n]", &new_descricao);  
        int t = 0;
        for(t; t < sizeof(new_descricao)/sizeof(char); t++){
            (lista_produtos + i)->descricao[t] = new_descricao[t];
        }
        float new_preco;
        printf("Digite o preco do produto: ");
        scanf("%f", new_preco);
        (lista_produtos + i)->preco = new_preco;
    }   
}