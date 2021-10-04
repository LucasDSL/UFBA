#include<stdio.h>
#include<stdlib.h>
// Lista ligada ou encadeada : dinâmica
typedef struct{
    int quantidade;
    struct elemento *prox;
} elemento;

typedef struct{
    struct elemento *head;
} lista;

// Funções para criação de lista e de elementos e manipulação
lista *criar_lista();
elemento *criar_elemento(int);
void adicionar_inicio(elemento *, lista *);
void adicionar_fim(elemento *, lista *);
void imprimir(lista *);
void remover_inicio(lista *);
void insercao_posicao(elemento *, lista *, int);

// Fazendo testes  com as implementações
int main(){
    lista *l = criar_lista();
    adicionar_fim(criar_elemento(14), l);
    adicionar_inicio(criar_elemento(12), l);
    adicionar_fim(criar_elemento(15), l);
    adicionar_fim(criar_elemento(25), l);
    adicionar_fim(criar_elemento(31), l);
    adicionar_fim(criar_elemento(17), l);
    imprimir(l);
    remover_inicio(l);
    printf("Lista sem o primeiro elemento:\n");
    insercao_posicao(criar_elemento(1), l, 2);
    insercao_posicao(criar_elemento(1), l, 0);
    imprimir(l);
    return EXIT_SUCCESS;
}

lista *criar_lista(){
    lista *l = (lista *) malloc(sizeof(lista));
    l->head = NULL;
    return l;
}
elemento *criar_elemento(int quant){
    elemento *e = (elemento *) malloc(sizeof(elemento));
    e->quantidade = quant;
    e->prox = NULL;
    return e;
}

void adicionar_inicio(elemento *e, lista *l){
    // Garante que os elementos anteriores já presentes na lista não serão perdidos
    e->prox = l->head;
    l->head = e;
}

void imprimir(lista *l){
    elemento *temp = l->head;
    printf("-----imprimindo Lista-----\n");
    while(temp != NULL){
        printf("%d ", temp->quantidade);
        temp = temp->prox;
    }
    printf("\n-----fim da Lista-----\n");
}

// Implementação minha...
void adicionar_fim(elemento *e, lista *l){
    // Caso a lista esteja vazia, já adiciona o primeiro elemento
    if(l->head == NULL){
        l->head = e;
        return;
    }
    //Caso não esteja vazia, procuramos o último elemento.
    elemento *temp = l->head;
    while(1){
        if(temp->prox == NULL){
            break;
        }
        temp = temp->prox;
    }
    temp->prox = e;
}

void remover_inicio(lista *l){
    // Caso a lista não esteja vazia
    if(l->head != NULL){
        elemento *temp = l->head;
        l->head = temp->prox;
        free(temp);
    }
}

void insercao_posicao(elemento *e, lista *l, int pos){
    if(pos < 0){
        return;
    }
    if(pos == 0){
        e->prox = l->head;
        l->head = e;
        return;
    }
    int posAtual = 0;
    // Aponta para o número atual pelo qual percorremos a lista
    elemento *temp = l->head;
    // Aponta para o número após o atual
    elemento *temp2 = temp->prox;
    while(1){
        if(posAtual == pos-1){
            // O seguinte após o inserido é o que vem após o atual(após a posição desejada)
            e->prox = temp2;
            // O anterior à posição desejada(pos-1) terá como próximo o número inserido
            temp->prox = e;
            break;
        }
        posAtual += 1;
        temp = temp->prox;
        temp2 = temp->prox;
    }
}
// Fazer implementação de Remoção de posição
// Inserção ordenada
// Buscar posição
// Verificar implementação de Lista duplamente encadeada: 
// uma lista com elementos contento *prox e *anter(anterior)