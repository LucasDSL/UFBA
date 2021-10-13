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
void insercao_ordenada_inicio(lista *, elemento *);
void insercao_posicao(lista *, elemento *, int);
void remove_posicao(lista *, int);

int 
main(){
    lista *l1 = criar_lista();
    int operacao, valor, posicao;
    while(scanf("%d", &operacao)){
        if(operacao == 1){
            scanf("%d %d", &valor, &posicao);
            insercao_posicao(l1, criar_elemento(valor), posicao);
            imprimir(l1);
        }
        else if(operacao == 0){
            scanf("%d", &posicao);
            remove_posicao(l1, posicao);
            imprimir(l1);
            continue;
        }
    }
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
    while (temp2 != l->head){
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
    elemento *tail = l->tail;
}
void insercao_posicao(lista *l, elemento *e, int pos){
    if(pos < 0){
        return;
    }
    if(pos == 0){
        e->next = l->head;
        l->head = e;
        return;
    }
    int posAtual = 0;
    // Aponta para o número atual pelo qual percorremos a lista
    elemento *temp = l->head;
    // Aponta para o número após o atual
    while(posAtual!=pos){
        if(posAtual == pos-1){
            // O seguinte após o inserido é o que vem após o atual(após a posição desejada)
            e->next = temp->next;
            // O anterior à posição desejada(pos-1) terá como próximo o número inserido
            temp->next = e;
            break;
        }
        posAtual += 1;
        temp = temp->next;
    }
}
void remove_posicao(lista *l, int pos){
    if(pos < 0){
        return;
    }
    elemento *temp = l->head;
    if(pos == 0 && temp->next == NULL){
        l->head == NULL;
        return;
    }
    // O elemento após o head
    // sempre o seguinte após o número atual
    elemento *next = temp->next;
    elemento *tail = l->tail;
    if(pos == 0){
        l->head = next;
        next->last = l->tail;
        tail->next = l->head;
        free(temp);
        return;
    }
    int posAtual = 0;
    while(posAtual != pos){
        if(posAtual == pos-1){
            temp->next = next->next;
            elemento *after_the_removed = next->next;
            after_the_removed->last = temp;
            return;
        }
        posAtual += 1;
        temp = temp->next;
        next = next->next;
    }
}
void imprimir(lista *l){
    if(l->head == NULL){
        printf("\n");
        return;
    }
    printf("-----imprimindo Lista-----\n");
    elemento *temp = l->head;
    printf("%d ", temp->num);
    temp = temp->next;
    while(temp != l->head && temp != NULL){
        printf("%d ", temp->num);
        temp = temp->next;
    }
    printf("\n-----fim da Lista-----\n");
}