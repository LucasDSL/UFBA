#include<stdio.h>
#include<stdlib.h>

typedef struct{
    int num;
    struct item *next;
} item;
typedef struct {
    struct item *tail; 
    struct item *head; // Em pilhas a head é o elemento do topo
    // ou último a ser inserido
} pilha;

item *criar_item(int);
pilha *criar_pilha();
void empilhar(pilha *, item *);
void imprimir(pilha *);

int main(){
    printf("Testando criacao de elemento e pilha e impressao de pilha:\n");
    pilha *pil = criar_pilha();
    empilhar(pil, criar_item(1));
    empilhar(pil, criar_item(2));
    empilhar(pil, criar_item(3));
    empilhar(pil, criar_item(4));
    empilhar(pil, criar_item(5));
    empilhar(pil, criar_item(6));
    empilhar(pil, criar_item(7));
    imprimir(pil);
    printf("\nTestando desempilhar 4 elementos:\n");
    desempilhar(pil);
    desempilhar(pil);
    desempilhar(pil);
    desempilhar(pil);
    imprimir(pil);
    printf("\nDesempilhando mais 3 elementos e vendo se a pilha esta vazia:\n");
    desempilhar(pil);
    desempilhar(pil);
    desempilhar(pil);
    vazia(pil);
    imprimir(pil);
    free(pil);
    return EXIT_SUCCESS;
}

item *criar_item(int num){
    item *it = (item *) malloc(sizeof(item));
    it->num = num;
    it->next = NULL;
    return it;
}
pilha *criar_pilha(){
    pilha *pi = (pilha *) malloc(sizeof(pilha));
    pi->head = NULL;
    pi->tail = NULL;
    return pi;
}

void empilhar(pilha *p, item *e){
    if(p->head == NULL){
        p->head = e;
        p->tail = e;
        return;
    }
    e->next = p->head;
    p->head = e;
}   

void desempilhar(pilha *p){
    vazia(p);
    item *temp = p->head;
    p->head = temp->next;
    free(temp);
}
void vazia(pilha *p){
    if(p->head == NULL){
        printf("A pilha esta vazia!\n");
        return;
    }
}
void imprimir(pilha *p){
    vazia(p);
    item *temp = p->head;
    int count = 0;
    while(temp != NULL){
        printf("[%d] = %d\n", count, temp->num);
        temp = temp->next;
        count += 1;
    }
}