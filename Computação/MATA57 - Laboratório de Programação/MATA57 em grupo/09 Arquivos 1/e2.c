//feito por Alan Cristian Nunes da Silva
#include <stdio.h>
#include <stdlib.h>


int main() {
  //Entrando com o arquivo texto
  char txt[100];
  printf("Digite o arquivo: ");
  scanf("%s", txt);
  //Abrindo ou criando o arquivo no modo leitura
  FILE *arq;
  arq = fopen(txt,"r");
  //Testando para ver se o arquivo digitado existe
  if(arq == NULL) {
    printf("O arquivo nÃ£o existe!\n");
    exit(0);
  }
  char c;
  
  //Contando Linhas do arquivo
  int count = 1;
  do {
    c = fgetc(arq);
    if(c != EOF) {
      if(c == '\n') {
        count ++;
      }
    }  
  }while(c != EOF);
  //printando o total de Linhas
  printf("O total de linahs: %i\n", count);
  fclose(arq);
  return(0);
}
