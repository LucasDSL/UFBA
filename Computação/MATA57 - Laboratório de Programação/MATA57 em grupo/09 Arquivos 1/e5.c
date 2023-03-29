#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Exercicio 05 Arquivos
//Feito por Jonas Oliveira

int main(void) {
  char nome[128];
  printf("Digite o nome do arquivo, incluindo a extensao (e o diretorio, se o arquivo nao estiver na mesma pasta): ");
  scanf("%s", nome);


  FILE * teste = fopen(nome, "r");
  if (teste == NULL) {
    printf("Erro na abertura!\n");
    exit(1);
  }

  char inpt;

  printf("Digite o caractere a ser contado:\n");
  scanf(" %c", &inpt);

  int count = 0;

  char busca = fgetc(teste);

  while(busca != EOF) {
    if (busca == inpt) count++;
    busca = fgetc(teste);
  }

  printf("O caractere ocorre %d vezes no arquivo de texto\n", count);
  fclose(teste);
  
  return 0;
}
