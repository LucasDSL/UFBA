#include<stdio.h>
#include<stdlib.h>

typedef struct {
    float num;
    struct elemento *next;
    struct elemento *last;
} elemento;

typedef struct {
    struct elemento *head;
    struct elemento *tail;
} lista;

elemento *criar_elemento(float);
lista *criar_lista();
void adicionar_fim(lista *, elemento *);
void adicionar_inicio(lista *, elemento *);
void imprimir(lista *);
void insercao_ordenada_inicio(lista *, elemento *);
void insercao_ordenada_fim(lista *, elemento *);

int 
main(){
    lista *l1 = criar_lista();
    lista *l2 = criar_lista();
    float num; 
    char nextCHAR;
    // Lendo a primeira lista
    while (scanf("%f%c", &num, &nextCHAR))
    {
        adicionar_fim(l1, criar_elemento(num));
        if(nextCHAR == '\n'){
            break;
        }
    }
    // Lendo a segunda lista
    while (scanf("%f%c", &num, &nextCHAR))
    {
        adicionar_fim(l2, criar_elemento(num));
        if(nextCHAR == '\n'){
            break;
        }
    }

    elemento *temp = l2->head;
    // Adicionando o primeiro elemento da lista 2 com inserção ordenada
    // começando da cabeça
    insercao_ordenada_inicio(l1, criar_elemento(temp->num));
    temp = temp->next;
    // Inserindo os elementos seguintes de l2 com encadeamento para trás
    // a partir da utilização das estruturas de uma lista duplamente encadeada
    while(temp != NULL){
        insercao_ordenada_fim(l1, criar_elemento(temp->num));
        temp = temp->next;
    }
    imprimir(l1);
}

elemento *criar_elemento(float f){
    elemento *element = (elemento *) malloc(sizeof(elemento));
    element->num = f;
    element->next = NULL;
    element->last = NULL;
    return element;
}

lista *criar_lista(){
    lista *list = (lista *) malloc(sizeof(lista));
    list->head = NULL;
    list->tail = NULL;
    return list;
}

void adicionar_fim(lista *l, elemento *e){
    if(l->head == NULL){
        l->head = e;
        l->tail = e;
        return;
    }
    elemento *ele = l->tail;
    e->last = ele;
    ele->next = e;
    l->tail = e;
}

void adicionar_inicio(lista *l, elemento *e){
    e->next = l->head;
    l->head = e;
}
void insercao_ordenada_inicio(lista *l, elemento *e){
    // Caso a lista esteja vazia 
    if(l->head == NULL){
        l->head = e;
        l->tail = e;
        return;
    }
    elemento *temp = l->head;
    // Caso o primeiro e único elemento seja menor que o que desejamos inserir 
    if(temp->next == NULL && temp->num <= e->num){
        temp->next = e;
        e->last = temp;
        l->tail = e;
    } 
    // Caso o primeiro elemento seja maior que o que desejamos inserir
    if(temp->num >= e->num){
        e->next = temp;
        temp->last = e;
        l->head = e;
        return;
    }
    // Verifica se o número deve ser inserido no meio da lista
    // Caso o atual seja "< e" e o seguinte seja "> e"
    elemento *temp2 = temp->next;
    while (temp2 != NULL){
        if(temp->num <= e->num 
        && temp2->num >= e->num){
            e->last = temp;
            e->next = temp2;
            temp->next = e;
            temp2->last = e;
            return;
        }
        temp = temp->next;
        temp2 = temp2->next;
    }
    // Caso não seja nenhum dos casos e saia do loop, ou seja
    // temp2 == NULL, significa que chegamos ao fim da lista
    // dessa forma devemos inserir o número no fim
    temp->next = e;
    e->last = temp;
    l->tail = e;
}
void insercao_ordenada_fim(lista *l, elemento *e){
    // Caso a lista esteja vazia 
    if(l->tail == NULL){
        l->head = e;
        l->tail = e;
        return;
    }
    elemento *temp = l->tail;
    // Caso o último e único elemento seja menor que o que desejamos inserir 
    if(temp->num <= e->num){
        temp->next = e;
        e->last = temp;
        l->tail = e;
        return;
    } 
    // Verifica se o número deve ser inserido no meio da lista
    // Caso o atual seja ">" e o anterior seja "<"
    elemento *temp2 = temp->last;
    while (temp2 != NULL){
        if(temp->num >= e->num 
        && temp2->num <= e->num){
            e->last = temp2;
            e->next = temp;
            temp->last = e;
            temp2->next = e;
            return;
        }
        temp = temp->last;
        temp2 = temp2->last;
    }
    // Caso não seja nenhum dos casos e saia do loop, ou seja
    // temp2 == NULL, significa que chegamos ao início da lista
    // dessa forma devemos inserir o número na head
    temp->last = e;
    e->next = temp;
    l->head = e;
}
void imprimir(lista *l){
    elemento *temp = l->head;
    while(temp != NULL){
        printf("%.2f ", temp->num);
        temp = temp->next;
    }
    printf("\n");
}