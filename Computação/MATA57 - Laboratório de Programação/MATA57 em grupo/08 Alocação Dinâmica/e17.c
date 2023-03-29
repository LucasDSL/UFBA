//feito por Alan Cristian Nunes da Silva
#include <stdio.h>
#include <stdlib.h>

int main() {
  //Declarando variÃ¡veis
  int count = 0, total = 10, num;
  // Alocando dinÃ¢micamente o vetor
  int *vetor = malloc(total * sizeof(int));
  do {
    // lendo valor e armazenando no vetor
    scanf("%i", &num);
    vetor[count] = num;
    count ++;
    //verificando se o vetor atigiu o limite e alogando mais memÃ³ria para o vetor
    if(count % 10 == 0) {
      total += 10;
      int *vetor1 = malloc(total * sizeof(int));
      for(int i = 0; i < total-10; i++) {
        vetor1[i] = vetor[i];
      }
      vetor = malloc(total * sizeof(int));
      for(int i = 0; i < total-10; i++) {
        vetor[i] = vetor1[i];
      }
    }
  }while(num != 0);
  //printando o vetor
  for(int i = 0; i < count-1; i++) {
    printf("%i\n", vetor[i]);
  }
}
