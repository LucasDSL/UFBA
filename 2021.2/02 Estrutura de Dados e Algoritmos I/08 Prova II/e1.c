#include <stdlib.h>
#include <stdio.h>

typedef struct no{
	int valor;
	struct no *esq;
	struct no *dir;
}no;

typedef struct arvore{
	struct no *raiz;
	int total;
}arvore;


arvore *criar_arvore();
no *criar_no(int);
void inserir(no *, arvore *);
void inserir_no(no *, no *, int);

int
main(int argc, char **argv){

	arvore *arv = criar_arvore();
    int i;
	for( i = 0; i < 10; i++){
		inserir(criar_no(v[i]), arv);
	}

	return EXIT_SUCCESS;
}

arvore *
criar_arvore(){
	arvore *a = (arvore *) malloc (sizeof(arvore));
	a->raiz = NULL;
	a->total = 0;

	return a;
}

no *
criar_no(int q){
	no *n = (no *) malloc (sizeof(no));
	n->valor = q;
	n->esq = NULL;
	n->dir = NULL;

	return n;
}

void inserir(no *n, arvore *a){
	printf("Inserindo [%d]\n", n->valor);
	if (a->raiz == NULL){
                a->raiz = n;
        }else{
		inserir_no(n, a->raiz, a->total);
	}
	a->total = a->total+1;
	//printf("Total de nos [%d]\n", a->total);
}

void inserir_no(no *n, no *raiz, int total){
	//estrategia: buscar o null usando busca em largura
	struct no *fila[total];
	int i = 0, v = 0;
	no *posicao = raiz;
	do{//procurar o primeiro null
		printf("Procurando em [%d]\n", posicao->valor);
		if(posicao->esq == NULL){
			printf("Inserindo aa esquerda de [%d]\n", posicao->valor);
			posicao->esq = n;
			break;//
		}else{
			fila[i] = posicao->esq;
			i++;
			if(posicao->dir == NULL){
				printf("Inserindo aa direita de [%d]\n", 
						posicao->valor);
				posicao->dir = n;
				break;
			}else{
				fila[i] = posicao->dir;
				i++;
			}
		}
		posicao = fila[v];
		v++;

	}while(1);
}