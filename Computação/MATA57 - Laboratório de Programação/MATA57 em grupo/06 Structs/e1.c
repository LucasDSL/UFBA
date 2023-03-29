//feito por Alan Cristian Nunes da Silva
#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

// Estutura tipo Filme
typedef struct {
  char nome[50];
  char genero[50];
  int duracao;
  int rank;
}filme;

// PrintarFilme
void printarFilme(filme f) {
  printf("Nome: %s\n", f.nome);
  printf("GÃªnero: %s\n", f.genero);
  printf("DuraÃ§Ã£o: %i\n", f.duracao);
  printf("Rank: %i\n", f.rank);
}

// Busca por rank
void buscarPorRank(filme *filmes, int num) {
  scanf("%i", &num);
  for(int i = 0; i < 5; i++) {
    if(filmes[i].rank == num) {
      printarFilme(filmes[i]);
      break;
    }
  }
}

// Busca por gÃªnero
void buscarPorGenero(filme *filmes, char *genero) {
  for(int i = 0; i < 5; i++) {
    if(strcmp(filmes[i].genero, genero) == 0) {
      printarFilme(filmes[i]);
    }
  }
}

// Busca por nome
void buscarPorNome(filme *filmes, char *nome) {
  for(int i = 0; i < 5; i++) {
    if(strcmp(filmes[i].nome, nome) == 0) {
      printf("%i",filmes[i].rank);
      break;
    }
  }
}

int main(){
  filme filmes[5];
  // Preenchimento do vetor filmes
  for(int i = 0; i < 5; i++) {
    printf("Digite o nome: ");
    scanf (" %[^\n]", filmes[i].nome);

    printf("Digite o gÃªnero: ");
    scanf (" %[^\n]", filmes[i].genero);

    printf("Digite a duraÃ§Ã£o: ");
    scanf ( "%i", &filmes[i].duracao);
    printf("Digite o rank: ");
    scanf ( "%i", &filmes[i].rank);
  }
  // Buscando por rank
  int N;
  printf("Digite um nÃºmero de 1 a 5: ");
  scanf("%i", &N);
  buscarPorRank(filmes, N);
  
  // Buscando por genero
  char gen[50];
  printf("Digite um gÃªnero: ");
  scanf (" %[^\n]", gen);
  buscarPorGenero(filmes, gen);
  
  // Buscando por nome
  char nome[50];
  printf("Digite um nome de filme: ");
  scanf (" %[^\n]", nome);
  buscarPorNome(filmes, nome);


	return 0;
}
