//feito por Alan Cristian Nunes da Silva
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct {
    int matricula;
    char sobrenome[30];
    int anoNascimento;
    
} Aluno;

int main() {
    int N;
    //Entrda da Quantidade de Alunos
    printf("Digite a quantidade de Alunos a ser Armazenados: ");
    scanf("%i", &N);
    //Alocando Memoria para os alunos
    Aluno *Alunos = malloc(N * sizeof(Aluno));
    //Entrada das informaÃ§Ãµes dos Alunos
    for(int i = 0; i < N; i++) {
        printf("MatrÃ­cula: ");
        scanf("%i", &Alunos[i].matricula);
        printf("sobrenome: ");
        scanf("%s", Alunos[i].sobrenome);
        printf("Ano de Nascimento: ");
        scanf("%i", &Alunos[i].anoNascimento);
    }
    //Printando os valores na tela
    for(int i = 0; i < N; i++) {
        printf("MatrÃ­cula: %i\n", Alunos[i].matricula);
        printf("sobrenome: %s\n", Alunos[i].sobrenome);
        printf("Ano de Nascimento: %i\n", Alunos[i].anoNascimento);
    }
    //Libera espaÃ§o da memÃ³ria
    free(Alunos);

    return 0;
}
