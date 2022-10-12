#include<stdio.h>
#include<stdlib.h>

void insere_arv_estatica(int, int *, int);
void pos_ordem(int *, int, int);

int main(){
    int elementos_arv, i;
    scanf("%d", &elementos_arv);
    int size_vetor = 4*elementos_arv + 3;
    int *arv_estatica = (int *) calloc(size_vetor, sizeof(int));

    for(i = 0; i < elementos_arv; i++){
        int el_atual;
        scanf("%d", &el_atual);
        insere_arv_estatica(el_atual, arv_estatica, 0);
    }
    pos_ordem(arv_estatica, 0, size_vetor);
    free(arv_estatica);
}

void insere_arv_estatica(int elemento, int *arvore, int indice){
    if(*(arvore+indice) == 0){
        *(arvore+indice) = elemento;
    }
    else if(elemento > *(arvore+indice)){
        insere_arv_estatica(elemento, arvore, 2*indice+2);
    }
    else{
        insere_arv_estatica(elemento, arvore, 2*indice + 1);
    }

}
  

void pos_ordem(int *arv, int indice, int size){     
    if(indice < size){
        pos_ordem(arv, 2*indice+1, size);
        pos_ordem(arv, 2*indice+2, size);
        if(*(arv+indice) != 0){
            printf("%d ", *(arv+indice));
        }
    }
}