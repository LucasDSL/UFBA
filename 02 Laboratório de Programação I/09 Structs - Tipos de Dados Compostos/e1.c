#include<stdio.h>
#include<stdlib.h>
struct filme{
    char nome[50];
    char genero[24];
    float duracao;
    int top;
};

void ranking_filme_mostrar(struct filme *);

int main(){
    struct filme filmes[5];
    int i = 0;

    printf("Digite o nome do filme:");
    scanf(" %[^\n]", &filmes[i].nome);
    printf("Digite o genero do filme:");
    scanf(" %[^\n]", &filmes[i].genero);
    printf("Digite a duracao do filme:");
    scanf(" %f\n", &filmes[i].duracao);
    printf("Digite o o ranking do filme entre os seus favoritos:");
    scanf(" %d\n", &filmes[i].top);
    
    ranking_filme_mostrar(filmes);
}

void ranking_filme_mostrar(struct filme *filmes){
    int rank, i;
    printf("Digite o rank do filme desejado(1-5):");
    scanf("%d", &rank);
    for(i = 0; i < 5; i++){
        struct filme filme_atual = *(filmes+i);
        if(filme_atual.top == rank){
            printf("Nome: %s\n", filme_atual.nome);
            printf("Genero: %s\n", filme_atual.genero);
            printf("Duracao: %.2f\n", filme_atual.duracao);
            printf("No ranking: %d\n", filme_atual.top);
        }
    }
}   