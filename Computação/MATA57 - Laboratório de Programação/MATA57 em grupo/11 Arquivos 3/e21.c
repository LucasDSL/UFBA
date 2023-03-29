#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//estrutura aluno
typedef struct aluno{
char nome[40];
float nota;
struct aluno *prox;
}aluno;


void inserirAluno(aluno a);
void lerArquivo(aluno a);

int main(){
    int quant, i;

    aluno p1;

    //entrar com numero de alunos da disciplina
    printf("Quantos alunos estão matriculados?\n");
    scanf("%d", &quant);

    for(i = 0; i < quant; i++){

    printf("Informe nome do aluno: ");
    fflush(stdin); //limpa buffer do teclado
    gets(p1.nome);

    printf("Informe nota final do aluno: ");
    scanf("%f", &p1.nota);
    inserirAluno(p1);

    }

    lerArquivo(p1);


return 0;

}

void inserirAluno(aluno a){
FILE *arq;

    if((arq = fopen("alunos.txt", "ab")) == NULL){ //escrita binária
            printf("Não foi possivel abrir\n");
            exit(1);
    }
    fwrite(&a, sizeof(aluno),1, arq); //função de escrita em arquivo binario
    fclose(arq);
}
void lerArquivo(aluno a){
    FILE *arq;
    int i = 0;
    if((arq = fopen("alunos.txt", "rb")) == NULL){ //leitura binária
            printf("Não foi possivel abrir\n");
            exit(1);
    }
    //função de leitura binaria
    while(fread(&a, sizeof(aluno),1, arq)){
    fclose(arq);
}
//encontrar aluno com maior nota e exibir nome
void maiorNota(){
}


