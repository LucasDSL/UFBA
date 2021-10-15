#include<stdio.h>
#include<stdlib.h>
typedef struct filme{
    char nome[50];
    char genero[24];
    float duracao;
    int top;
} filme;

void ranking_filme_mostrar(filme *);

int main(){
    filme filmes[5];
    int i = 0;
    for(i; i < 5; i++){
        printf("Digite o nome do filme:");
        scanf(" %[^\n]", &filmes[i].nome);
        printf("Digite o genero do filme:");
        scanf(" %[^\n]", &filmes[i].genero);
        printf("Digite a duracao do filme:");
        scanf("%f", &filmes[i].duracao);
        printf("Digite o o ranking do filme entre os seus favoritos:");
        scanf("%d", &filmes[i].top);
    }
    ranking_filme_mostrar(filmes);
}

void ranking_filme_mostrar(filme *filmes){
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