#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// Lista ligada ou encadeada : dinâmica
typedef struct elemento{
    float quantidade;
    struct elemento *prox;
} elemento;

typedef struct lista{
    struct elemento *head;
} lista;

// Funções para criação de lista e de elementos e manipulação
lista *criar_lista();
elemento *criar_elemento(float);
void adicionar_inicio(elemento *, lista *);
void adicionar_fim(elemento *, lista *);
void imprimir(lista *);
void remover_inicio(lista *);
void insercao_posicao(elemento *, lista *, int);
void insercao_ordenada(lista *, elemento *);
int busca_posicao(lista *, elemento *);
void remove_posicao(lista *, int);
void conc(lista *, lista *);
void
getElements(char *line, float *elementos, int *tamanho){
	int i = 0;
	
	char* token = strtok(line, " ");
	while (token) {
		i += 1;
		elementos = (float *) realloc (elementos, sizeof(int)*i);
		elementos[i-1] = atof(token);
		token = strtok(NULL, " ");
        }

	*tamanho = i;

}
// Fazendo testes  com as implementações
int main(){
    lista *l1 = criar_lista();
    lista *l2 = criar_lista();
	char *line = NULL;
	size_t len = 0;
	getline(&line, &len, stdin);

	int total_linhas = atoi(line);
    int i, j;
	for(j = 0; j < total_linhas; j++){
		getline(&line, &len, stdin);
		float *elementos = (float *) malloc (0*sizeof(float));
		int *tamanho = (int *) malloc (1*sizeof(int));
		getElements(line, elementos, tamanho);
		for(i = 0; i < *tamanho; i++){
            if(j == 0){
                adicionar_fim(criar_elemento(elementos[i]), l1);
            }
            if(j == 1){
                adicionar_fim(criar_elemento(elementos[i]), l2);
            }
		}
		free(elementos);
		free(tamanho);
	}
	free(line);
    conc(l1, l2);
    imprimir(l1);
	return EXIT_SUCCESS;
}

lista *criar_lista(){
    lista *l = (lista *) malloc(sizeof(lista));
    l->head = NULL;
    return l;
}
elemento *criar_elemento(float quant){
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
    while(temp != NULL){
        printf("%g ", temp->quantidade);
        temp = temp->prox;
    }
    printf("\n");
}

void adicionar_fim(elemento *e, lista *l){
    // Caso a lista esteja vazia, já adiciona o primeiro elemento
    if(l->head == NULL){
        l->head = e;
        return;
    }
    //Caso não esteja vazia, procuramos o último elemento.
    elemento *temp = l->head;
    while(temp->prox != NULL){
        temp = temp->prox;
    }
    temp->prox = e;
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
    while(posAtual!=pos){
        if(posAtual == pos-1){
            // O seguinte após o inserido é o que vem após o atual(após a posição desejada)
            e->prox = temp->prox;
            // O anterior à posição desejada(pos-1) terá como próximo o número inserido
            temp->prox = e;
            break;
        }
        posAtual += 1;
        temp = temp->prox;
    }
}
elemento *copy(elemento *e){
    elemento *ele = (elemento *) malloc(sizeof(elemento));
    ele->prox = NULL;
    ele->quantidade = e->quantidade;
    return ele;
}
void conc(lista *l1, lista *l2){
    int cont = 0;
    elemento *temp2 = l2->head;
    while(temp2 != NULL){
        elemento *copy_temp2 = copy(temp2);
        if(cont % 2 == 0){
            insercao_posicao(copy_temp2, l1, cont+1);
            temp2 = temp2->prox;
        }
        cont += 1;
    }
}