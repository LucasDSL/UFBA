#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//Exercicio 17 de Alocacao
//Feito por Jonas
int main(void) {
  char nome[128], str[128], primeiralinha[8]; 
  int dados1[1][3];
  int linhas, colunas;
  printf("Nome do arquivo: ");
  scanf("%s", nome);

  FILE * arquivo = fopen(strcat(nome, ".txt"), "r");
  FILE * matriz = fopen("matriz.txt", "w");
  if (arquivo == NULL) printf("Erro!!");

  fscanf(arquivo, "%d %d %d", &dados1[0][0], &dados1[0][1], &dados1[0][2]); //pega os valores referentes a linhas, colunas e qtade de elementos a serem anulados na matriz

   int **dados = (int**)malloc(dados1[0][2] * sizeof(int*)); //cria um ponteiro de ponteiros do tamanho do numero de posicoes a serem anuladas. Esse tamanho tambem eh o mesmo numero de linhas que sobram no arquivo depois que o primeiro fscanf roda. 

   for (int i = 0; i < dados1[0][2]; i++) {
     dados[i] = (int*)malloc(2 * sizeof(int)); //este vetor servira para coletar as posicoes a serem anuladas. Como cada posicao requer dois valor inteiros (um i e um j), decidi que cada ponteiro soh precisa de dois espacos alocados
   }

  for (int i = 0; i < (dados1[0][2]); i++) {
     fscanf(arquivo, "%d %d", &dados[i][
       0], &dados[i][1]); //finalmente, pega todas as posicoes que ainda faltam
  }
  
  int tru = 0;
  for (int i = 0 ; i < dados1[0][0]; i++) {
    for (int j = 0; j < dados1[0][1]; j++) {
      for (int k = 0; k < dados1[0][2]; k++) {
        if (i == dados[k][0] && j == dados[k][1])
        { 
           fputc(48, matriz);
           fputc(32, matriz);
           tru = 1;
           //esse if incluira na matriz o numero 0 apenas se as posicoes dos fors de i e j coincidirem com as posicoes armazenadas no vetor dados.     
        }
      }
      if (tru == 0) {
        //se true for 1 significa que o numero nesta posicao eh 0 e portanto nada mais, nesta posicao, precisa ser incluso na matriz
        fputc(49, matriz);
        fputc(32, matriz); }
      if (j == dados1[0][1] - 1) fputc(10, matriz); // inclui um \n caso se tenha chegado ao fim da linha
      tru = 0;
    }
  }

   fclose(arquivo);
   fclose(matriz);

  return 0;
}
