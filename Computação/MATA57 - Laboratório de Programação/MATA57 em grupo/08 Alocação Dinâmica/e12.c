//Feita por Iasmim da Cruz Marinho
//Considere um cadastro de produtos de um estoque

#include <stdio.h>
#include <stdlib.h>

//estrutura de produto
typedef struct produto{
  int cod;
  char nome[50];
  int quant;
  float valor;  
}produto;

//assinatura
void inserirProdutos(produto* p, int);
char* maiorPreco(produto* p, int q, int indice);
char* maiorQuantidade(produto* p, int q, int indice);

int main(void) {
  int q;

  printf("Informe a quantidade de produtos: ");
  scanf("%d", &q);
  printf("--\n");
  
  //aloca memoria quantidade informada
  produto* p = (produto *) malloc (sizeof(produto) * q);

  inserirProdutos(p,  q);

  //retorna produto mais caro
  char* prodMaisCaro = maiorPreco(p,  q, 0);
  printf("O produto com maior preço é %s\n", prodMaisCaro);

  //retorna produto em maior quantidade
  char* quantidade = maiorQuantidade(p,  q, 0);
  printf("O produto com maior quantidade disponível é %s\n", quantidade);

  free(p);

  return EXIT_SUCCESS;
}

//inserção de produtos
void inserirProdutos(produto* p, int q){

  for(int i = 0; i < q; i++){

    printf("Informe cod do produto %d: ", i+1);
    scanf("%d", &p[i].cod);
    printf("Informe nome do produto %d: ", i+1);
    scanf("%s", p[i].nome);
    printf("Informe quantidade do produto %d no estoque: ", i+1);
    scanf("%d", &p[i].quant);
    printf("Informe preço de venda do produto %d: R$", i+1);
    scanf("%f", &p[i].valor);
    printf("--\n");

  }

}

//encontra maior preço de forma recursiva

char* maiorPreco(produto* p, int q, int indice){
  //se qanho for 0, retorna 0
  if(q == 0){
    return p[indice].nome;
  }else
  //compara posicao n-1 com p indice atual
    if(p[q - 1].valor > p[indice].valor){
  //retorna valor decrementando indice    
      return maiorPreco(p,  q - 1, q - 1);
    }
  else
  //retorna valor de indice atual
      return maiorPreco(p, q-1, indice);
}
//encontra maior quantidade em estoque de forma recursiva

char* maiorQuantidade(produto* p, int q, int indice){
  //se qanho for 0, retorna 0
  if(q == 0){
    return p[indice].nome;
  }else
  //compara posicao n-1 com p indice atual
    if(p[q - 1].quant > p[indice].quant){
  //retorna valor decrementando indice    
      return maiorQuantidade(p,  q - 1, q - 1);
    }
  else
  //retorna valor de indice atual
      return maiorQuantidade(p, q-1, indice);
}
