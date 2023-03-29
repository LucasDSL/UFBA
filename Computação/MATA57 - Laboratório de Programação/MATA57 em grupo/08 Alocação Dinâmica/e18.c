//Feita por Iasmim da Cruz Marinho

#include <stdio.h>
#include <stdlib.h>

//quantidade de inteiros no vetor
#define MAX 2
//dimensões da matriz
#define LIN 3
#define COL 2
//quantidade produtos
#define Q 3
//tamanho texto
#define TXT 3

//estrutura produto
typedef struct produto{
  int cod;
  char nome[30];
  float valor;  
}produto;
//estrutura texto
typedef struct texto{
  char caracteres[10];
}texto;

void VetorInt(int* p1);
void AlocaMatriz(int** p2);
void inserirProdutos(produto* p, int);
void escreverTexto(texto* tx, int);
void menu(int *p1, int **p2, produto *p3, texto *p4);

int main(int argc, char **argv) {
	int *p1, **p2;
  produto *p3;
  texto *p4;

  //int alocar 1024 bytes = 256 inteiros
  p1 = (int *) malloc(MAX);
  //aloca matriz de inteiros
  p2 =  (int **) malloc (LIN * COL * sizeof (int*)) ;
  p3 = (produto *) malloc (sizeof(produto) * Q);
  p4 = (texto *) malloc (sizeof(texto) * TXT);
  
  menu(p1, p2, p3, p4);
  
}
void menu(int *p1, int **p2, produto *p3, texto *p4){

  int op, p,v;

    printf("O que deseja fazer?\n 1 - inserir vetor\n 2 - inserir matriz\n 3 - inserir produtos\n 4 - escrever texto\n");
    scanf("%d", &op);

    if(op == 1){
      
      //alocar vetor
      VetorInt(p1);
      free(p1);
    }
    if(op == 2){
      //aloca matriz
    AlocaMatriz(p2);
    free(p2);

    } 
    if(op == 3){
      //inserir produtos
    inserirProdutos(p3,  Q);
    free(p3);
    }
    if(op == 4){
      //escrever texto 
    escreverTexto(p4, TXT);
    free(p4);
    }else{
      exit(0);
    }
  
}
//procedimento alocar vetor
void VetorInt(int* p1){
  int valor;
  for(int i = 0; i < MAX; i++){
    printf("pos[%d]: ", i);
    scanf("%d", &valor);
    p1[i] = valor;
  }

}
//Matriz de inteiros de dimensão 10 x 10
void AlocaMatriz(int** p2){
  //para cada linha cria um novo array
  for(int i = 0; i < LIN; i++){
    p2[i] =  (int *) malloc (LIN * sizeof (int)) ;
    for(int j = 0; j < COL; j++){
      printf("pos[%d][%d]: ", i, j);
      scanf("%d", &p2[i][j]);
    }
  }

}
//inserção de produtos
void inserirProdutos(produto* p3, int q){

  for(int i = 0; i < q; i++){

    printf("Informe cod do produto %d: ", i+1);
    scanf("%d", &p3[i].cod);
    printf("Informe nome do produto %d: ", i+1);
    scanf("%s", p3[i].nome);
    printf("Informe preço do produto %d: R$", i+1);
    scanf("%f", &p3[i].valor);
    printf("--\n");

  }

}
//Escrever texto
void escreverTexto(texto* tx, int t){
  int c = 0;
  for(int i = 0; i < t; i++){
    printf("linha [%d]", i);    

    scanf("%s",tx->caracteres);
    
  }

}
