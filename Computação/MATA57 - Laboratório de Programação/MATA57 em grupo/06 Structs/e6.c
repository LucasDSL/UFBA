//sistema de matrícula
#include <stdio.h>
#include <stdlib.h>
//#include <string.h>

#define MAX_ALUNOS 3
#define MAX_DISC 3

//aluno
typedef struct aluno{
  char cod[30];
  char nome[30];
  int idade;
  int sexo;
  float nota;
  int* quant;
}aluno;
//disciplina
typedef struct disciplina{
  char codDisc[30];
  char nomeDisc[30];
}disciplina;

void cadastroAluno(aluno* info);
void cadastroDisc(disciplina* disc);
void matricula(aluno* info, disciplina* disc);
int relatorioSexoM(aluno* info);
int relatorioSexoF(aluno* info);
float mediaIdade(aluno *info);
float mediaIdadeNota(aluno *info);

//colocar menu aqui

int main(void) {
  int op;
  aluno a[MAX_ALUNOS];
  disciplina d[MAX_DISC];

  do{
  printf(" 1 - cadastrar estudantes\n 2 - cadastrar disciplina\n 3 - realizar matriculas em disciplinas\n 4 - imprimir relatório\n 5 - sair\n");
  scanf("%d", &op);
  printf("-\n");
 switch(op){
   case 1: 
   cadastroAluno(a);
   printf("Aluno cadastrado!\n");
   printf("-\n");
   break;
   case 2: 
   cadastroDisc(d);
   printf("Disciplina cadastrada!\n");
   printf("-\n");
   break;
   case 3: 
   matricula(a,d);
   printf("Matricula realizada!\n");
   printf("-\n");
   break;
   //criar relatórios
   case 4: 
    printf("--------RELATÓRIO--------\n");
   printf("Quantidade alunos sexo masc: %d\n", relatorioSexoM(a));
   printf("Quantidade alunos sexo fem: %d\n", relatorioSexoF(a));
   printf("Media de idade dos alunos: %.2f\n", 
   mediaIdade(a));
    printf("Media de idade dos alunos com nota > 7.5: %.2f\n", 
   mediaIdadeNota(a));
   printf("-\n");
   break;
   case 5: printf("Finalizado!");
   break;
   default : printf("Inválido\n");
 }
  }while(op != 5);

  return EXIT_SUCCESS;
}

//cadastrar aluno
void cadastroAluno(aluno* info){
  for(int i = 0; i < MAX_ALUNOS; i++){

    printf("Códido do aluno %d: ", i+1);
    scanf("%s", info[i].cod);
    printf("Nome: ");
    scanf("%s", info[i].nome);
    printf("Idade: ");
    scanf("%d", &info[i].idade);
    printf("Sexo: 0 - masculino, 1 - feminino: ");
    scanf("%d", &info[i].sexo);
    printf("Nota Enem: ");
    scanf("%f", &info[i].nota);

  }
}

//cadastrar disciplina
void cadastroDisc(disciplina* disc){
  for(int i = 0; i < MAX_DISC; i++){

   printf("Códido disciplina: ");
   scanf("%s", disc->codDisc);
   printf("Nome: ");
   scanf("%s", disc->nomeDisc);

  }
}
//fazer uma matricula
void matricula(aluno* info, disciplina* disc){
  int c = 0;
  int s = 0;
  int result;
  printf("Códido do aluno: ");
  scanf("%s", info->cod);
  printf("Códido disciplina: ");
  scanf("%s", disc->codDisc);
  printf("Semestre: ");
  scanf("%d", &s);
}
//quantidade alunos sexo masculino
int relatorioSexoM(aluno* info){
  int c = 0;
  for(int i = 0; i < MAX_ALUNOS; i++){
    if(info[i].sexo == 0){
      c++;
    }
  }
  return c;
}
//quantidade alunos sexo feminino
int relatorioSexoF(aluno* info){
  int c = 0;
  for(int i = 0; i < MAX_ALUNOS; i++){
    if(info[i].sexo == 1){
      c++;
    }
  }
  return c;
}
//Media das idades
float mediaIdade(aluno *info){
  float med, resultado = 0;
  for(int i = 0; i < MAX_ALUNOS; i++){
    med = med + info[i].idade;
    }
  
  resultado = med/MAX_ALUNOS;

  return resultado;
}
//Media das idades dos alunos com nota maio que 7.5
float mediaIdadeNota(aluno *info){
  float med, resultado = 0;
  for(int i = 0; i < MAX_ALUNOS; i++){
    if(info[i].nota > 7.5){
    med = med + info[i].idade;
    }
  }
  
  resultado = med/MAX_ALUNOS;
  if(resultado==0){
    return 0;
  }

  return resultado;
}
//relatorio e