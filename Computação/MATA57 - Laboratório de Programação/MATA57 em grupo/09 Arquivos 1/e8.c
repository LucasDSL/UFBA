//feito por Alan Cristian Nunes da Silva
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


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
  
  int count = 0;
  //Criando novo arquivo
  FILE *newArq;
  newArq = fopen("newArq.txt", "w");
  //Varrendo o texto char por char
  do {
    c = fgetc(arq);
    if(c != EOF) {
      //Colocando as letras em maiusculo
      c = toupper(c);
      fputc(c,newArq);
    }  
  }while(c != EOF);
  fclose(arq);
  fclose(newArq);
  return(0);
}
