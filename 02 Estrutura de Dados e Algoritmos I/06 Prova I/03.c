#include<stdio.h>
#include<stdlib.h>

typedef struct {
    int num;
    struct elemento *next;
    struct elemento *last;
} elemento;

typedef struct {
    struct elemento *head;
    struct elemento *tail;
} lista;

elemento *criar_elemento(int);
lista *criar_lista();
void adicionar_fim(lista *, elemento *);
void adicionar_inicio(lista *, elemento *);
void imprimir(lista *);

int 
main(){
    lista *l1 = criar_lista();
    // Criação da lista de jogadores
    adicionar_fim(l1, criar_elemento(0));
    adicionar_fim(l1, criar_elemento(1));
    adicionar_fim(l1, criar_elemento(2));
    adicionar_fim(l1, criar_elemento(3));
    adicionar_fim(l1, criar_elemento(4));
    adicionar_fim(l1, criar_elemento(5));
    int count = 0, ler_soma = 0, soma = 0;
    // Lendo os números
    while(count < 6){
        scanf("%d", &ler_soma);
        soma += ler_soma;
        count++;
    }
    char perdedor[8];
    int inicio;
    scanf("%s %d", &perdedor, &inicio);
    // Retirando da soma total a quantidade equivalente ao começo 
    // da contagem, para que possa iniciar a contagem da começo
    // mas termina no equivalente, caso houvesse um ínicio definido 
    soma -= inicio;
    elemento *temp = l1->head;
    while (soma > 1)
    {
        temp = temp->next;
        soma -= 1;
    }
    printf("%d\n", temp->num);
}

elemento *criar_elemento(int f){
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
    // Conectando o último elemento da lista
    elemento *ele = l->tail;
    e->last = ele;
    ele->next = e;
    l->tail = e;
    // Conectando o fim da lista ao início
    e->next = l->head;
    elemento *head = l->head;
    head->last = e;
}

void adicionar_inicio(lista *l, elemento *e){
    elemento *head = l->head;
    e->next = head;
    e->last = head->last;
    l->head = e;
}

void imprimir(lista *l){
    printf("-----imprimindo Lista-----\n");
    elemento *temp = l->head;
    printf("%d ", temp->num);
    temp = temp->next;
    while(temp != l->head){
        printf("%d ", temp->num);
        temp = temp->next;
    }
    printf("\n-----fim da Lista-----\n");
}