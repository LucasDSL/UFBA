#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct aluno{
    int matricula;
    char sobrenome[30];
    int ano_nascimento;
} Aluno;

int main(){
    Aluno *alunos;
    printf("Quantos alunos serao cadastrados?");
    int qtd_alunos, i;
    scanf("%d", &qtd_alunos);
    alunos = (Aluno *) malloc(sizeof(Aluno) * qtd_alunos);
    for(i = 0; i < qtd_alunos; i++){
        printf("Entre com as informacoes do aluno %d:\n", i+1);
        printf("Digite a matricula do aluno:");
        scanf("%d", &((alunos+i)->matricula));
        printf("Digite o sobrenome do aluno: ");
        scanf(" %s", &((alunos+i)->sobrenome));
        printf("Digite o ano de nascimento do aluno:");
        scanf("%d", &((alunos+i)->ano_nascimento));
    }
    for(i = 0; i < qtd_alunos; i++){
        printf("Aluno %d\n", i+1);
        printf("Matricula: %d\n", (alunos+i)->matricula);
        printf("Sobrenome: %s\n", (alunos+i)->sobrenome);
        printf("Ano de nascimento: %d\n", (alunos+i)->ano_nascimento);
    }
    free(alunos);
    return EXIT_SUCCESS;
}