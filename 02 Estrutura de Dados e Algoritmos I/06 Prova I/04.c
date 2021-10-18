#include<stdio.h>
#include<stdlib.h>

typedef struct elemento{
    int num;
    struct elemento *next;
    struct elemento *last;
} elemento;

typedef struct lista{
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
    int linhas, i;
    scanf("%d", &linhas);
    int operacao, valor, posicao;
    for(i = 0; i < linhas; i++){
        scanf("%d", &operacao);
        if(operacao == 1){
            scanf("%d %d", &valor, &posicao);
            insercao_posicao(l1, criar_elemento(valor), posicao);
        }
        else if(operacao == 0){
            scanf("%d", &posicao);
            remove_posicao(l1, posicao);
            continue;
        }
    }
    imprimir(l1);
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
            // Para caso o último elemento esteja sendo removido
            if(after_the_removed == NULL){
                return;
            }
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
    elemento *temp = l->head;
    printf("%d ", temp->num);
    temp = temp->next;
    while(temp != l->head && temp != NULL){
        printf("%d ", temp->num);
        temp = temp->next;
    }
    printf("\n");
}