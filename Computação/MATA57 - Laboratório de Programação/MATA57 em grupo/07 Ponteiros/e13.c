//feito por Alan Cristian Nunes da Silva
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

//FunÃ§Ã£o que retonar verdadeiro caso s2 esteja contida em s1, caso contrÃ¡rio falso
bool contem(char *s1, char*s2) {
  //Verificando se s2 estÃ¡ contido em s1
  for(int i = 0; i < strlen(s1); i++) {
    if(*(s1+i) == *(s2)) {
      int  count = 0;
      for(int j = 0; j < strlen(s2); j++) {
        if(*(s1+i+j) == *(s2+j)){
          count ++;
        }
      }
      // retonar true
      if(count == strlen(s2)){
        return true;
      }
    }
  }
  //retorna false
  return  false;
}

int main(void) {
  // Declarando as variÃ¡veis
  char s1[20], s2[20];
  //Entrada de dados
  printf("Digite o valor da primeira string: ");
  scanf("%s", s1);
  printf("Digite o valor da segunda string: ");
  scanf("%s", s2);
  //Verificando se uma s2 estÃ¡ contida em s1
  if(contem(s1, s2)) {
    printf("a segunda string estÃ¡ contida na primeira!");
  }else {
    printf("a segunda string nÃ£o estÃ¡ contida na primeira!");
  }
  return 0;
}
