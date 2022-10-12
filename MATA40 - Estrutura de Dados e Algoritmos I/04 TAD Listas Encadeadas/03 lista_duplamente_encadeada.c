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

int 
main(){
    lista *l1 = criar_lista();
    adicionar_fim(l1, criar_elemento(5.5));
    adicionar_fim(l1, criar_elemento(2));
    adicionar_fim(l1, criar_elemento(4.5));
    adicionar_fim(l1, criar_elemento(25));
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

void imprimir(lista *l){
    elemento *temp = l->head;
    printf("-----imprimindo Lista-----\n");
    while(temp != NULL){
        printf("%.2f ", temp->num);
        temp = temp->next;
    }
    printf("\n-----fim da Lista-----\n");
}