#include<stdio.h>
#include<stdlib.h>
typedef struct 
{
    float num;
    struct item *last;
    struct item *next;
} item;

typedef struct 
{   
    struct item *head;
} lista;
item *criar_item(float);
lista *criar_lista();
void adicionar_fim(lista *, item *);
void imprimir(lista *);

int main(){
    lista *l1 = criar_lista();
    lista *l2 = criar_lista();
    float var;
    char proxChar;
    while(scanf("%f%c", &var, &proxChar)){
        adicionar_fim(l1, criar_item(var));
        if(proxChar == '\n'){
            break;
        }
    }
    imprimir(l1);
}

lista *criar_lista(){
    lista *l = (lista *) malloc(sizeof(lista));
    l->head = NULL;
    return l;
}
item *criar_item(float n){
    item *e = (item *) malloc(sizeof(item));
    e->num = n;
    e->next = NULL;
    e->last = NULL;
    return e;
}

void adicionar_fim(lista *l, item *i){
    if(l->head == NULL){
        l->head = i;
        return;
    }
    item *temp = l->head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    i->last = temp;
    temp->next = i;
}
void imprimir(lista *l){
    if(l->head == NULL){
        return;
    }
    item *temp = l->head;
    while(temp!=NULL){
        printf("%.2f ", temp->num);
        temp = temp->next;
    }
}