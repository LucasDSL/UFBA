//feito por Alan Cristian Nunes da Silva
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  // Entrando nÃºmeros alunos
  int num;
  printf("Digite um nÃºmero de alunos: ");
  scanf("%i", &num);
  // Alocando dinamicamente dois vetores
  char **nomes = malloc(num * sizeof(char *));
  for(int i = 0; i < num; i++) {
    nomes[i] = malloc(40 * sizeof(char));
  }
  float *notas = malloc(num * sizeof(float));
  // Entrando com as informaÃ§Ãµes dos alunos
  for(int i = 0; i < num; i++) {
    printf("Digite o nome do %iÂ° aluno(a): ", i + 1);
    scanf(" %[^\n]", nomes[i]);
    printf("Digite a nota do %iÂ° aluno(a): ", i + 1);
    scanf("%f", &notas[i]);
  }
  // Criando um novo arquivo
  FILE *arq = fopen("arq.txt","w");

  // Adicionando novo aluno
  for(int i = 0; i < num; i++) {
    // Adicionando o nome
    fputs(nomes[i], arq);
    // Adicionando os espaÃ§os
    int espacos = 40 - strlen(nomes[i]);
    for(int j = 0; j < espacos; j++) {
      fputs(" ", arq);
    }
    // Adicionando a nota com a quebra de linha
    char nota[6];
    sprintf(nota, "%.2f\n",notas[i]);
    fputs(nota, arq);
  }

  // Fechando o arquivo
  fclose(arq);

  return(0);
}
