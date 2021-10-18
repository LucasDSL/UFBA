#include<stdio.h>
#include<stdlib.h>

typedef struct item{
    int num;
    struct item *next;
} item;
typedef struct pilha{
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
    int linhas;
    scanf("%d", &linhas);
    int num_atual;
    while(scanf("%d", &num_atual) == 1){
        empilhar(pil, criar_item(num_atual));
    };
    pilha *aux = criar_pilha();
    item *temp = pil->head;
    while (temp != NULL)
    {
        // Invertendo a pilha recebida
        temp = temp->next;
        empilhar(aux, desempilhar(pil));
    }
    topo_base(aux);
    imprimir(aux);
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
    item *temp = p->head;
    item *copy_temp = (item *) malloc(sizeof(item));
    copy_temp->num = temp->num;
    copy_temp->next = NULL;
    p->head = temp->next;
    free(temp);
    return copy_temp;
}

void imprimir(pilha *p){
    item *temp = p->head;
    int count = 0;
    while(temp != NULL){
        printf("%d ", temp->num);
        temp = temp->next;
        count += 1;
    }
    printf("\n");
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