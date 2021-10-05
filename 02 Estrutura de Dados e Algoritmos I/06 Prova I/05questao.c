#include<stdio.h>
#include<stdlib.h>

typedef struct{
    int num;
    struct item *next;
} item;
typedef struct {
    struct item *head; // Em pilhas a head é o elemento do topo
    // ou último a ser inserido
} pilha;

item *criar_item(int);
pilha *criar_pilha();
void empilhar(pilha *, item *);
item *desempilhar(pilha *);
void imprimir(pilha *);
void topo_base(pilha *);

int main(){
    pilha *pil = criar_pilha();
    pilha *aux = criar_pilha();
    empilhar(pil, criar_item(1));
    empilhar(pil, criar_item(2));
    empilhar(pil, criar_item(3));
    empilhar(pil, criar_item(4));
    empilhar(pil, criar_item(5));
    empilhar(pil, criar_item(6));
    empilhar(pil, criar_item(7));
    imprimir(pil);
    printf("\n");
    topo_base(pil);
    imprimir(pil);
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
    return pi;
}

void empilhar(pilha *p, item *e){
    if(p->head == NULL){
        p->head = e;
        return;
    }
    e->next = p->head;
    p->head = e;
}   

item *desempilhar(pilha *p){
    vazia(p);
    item *temp = p->head;
    item *copy_temp = (item *) malloc(sizeof(item));
    copy_temp->num = temp->num;
    copy_temp->next = NULL;
    p->head = temp->next;
    free(temp);
    return copy_temp;
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

void topo_base(pilha *p){
    pilha *aux = criar_pilha();
    item *temp = p->head;
    while (temp->next != NULL)
    {
        /* Removendo elemento de p até o último
        (não incluso), e colocando-os na pilha 
        aux...*/
        temp = temp->next;
        empilhar(aux, desempilhar(p));
    }
    // Pegando o elemento que está na base de p
    item *base = desempilhar(p);
    item *temp2 = aux->head;
    while(temp2 != NULL){
        temp2 = temp2->next;
        empilhar(p, desempilhar(aux));
    }
    empilhar(p, base);
}