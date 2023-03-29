#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Exercicio 11 de Arquivos 
//Feito por Jonas

int main(void) {
  char nome[128];
  printf("Nome do arquivo, sem a extensao: ");
  scanf("%s", nome);

  FILE * arquivo = fopen(strcat(nome,".txt"), "r");
  //strcat concatena o nome do arquivo com a extensao

  if (arquivo == NULL) {
    printf("Erro na abertura!!");
    exit(1);
  }

  char str[1024];

 int count = 0;

 char palavra[128];
 printf("Palavra a ser procurada: ");
 scanf("%s", palavra);
 
  while (fgets(str, 1024, arquivo)) {
    //a cada iteração, str se refere a uma nova linha
    if(strstr(str, palavra)) count++;
    //strstr busca se o primeiro argumento(str) contem o segundo (palavra)
  }
  printf("Ocorrencia da palavra: %d", count);
  fclose(arquivo);
}
