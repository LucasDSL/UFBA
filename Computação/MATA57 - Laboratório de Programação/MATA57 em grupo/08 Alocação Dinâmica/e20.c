#include<stdio.h>
#include<stdlib.h>
#include <math.h>
#include <string.h>

//Exercicio 20 de Alocacao Dinamica
//Feito por Jonas Oliveira
struct cidades {
  char nome[128];
  float X;
  float Y;
};

void cadastro_cidades (int N, struct cidades * vetor) {
for (int i = 0; i < N; i++) {
    printf("Insira nome: ");
    scanf("%s", vetor[i].nome);

    printf("Insira coordenada X: ");
    scanf("%f", &vetor[i].X);

    printf("Insira coordenada Y: ");
    scanf("%f", &vetor[i].Y);
  }
}

void distancia_matriz 
(int N, float ** matriz, struct cidades * vetor) {
    for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      matriz[i][j] = sqrt(((vetor[i].X - vetor[j].X) * (vetor[i].X - vetor[j].X))+((vetor[i].Y - vetor[j].Y) * (vetor[i].Y - vetor[j].Y))); //calcula a distancia
    }
  }
}
float distancia_cidades(char * nome1, char * nome2, struct cidades * vetor, int N) { //calcula, ao final, a distancia entre duas cidades especificas a partir dos nomes
  float distancia;
  int posicao1, posicao2;
  for (int i = 0; i < N; i++) {
    if (strcmp(vetor[i].nome, nome1) == 0) posicao1 = i;
    if (strcmp(vetor[i].nome, nome2) == 0) posicao2 = i;
  }

  distancia = sqrt(((vetor[posicao1].X - vetor[posicao2].X) * (vetor[posicao1].X - vetor[posicao2].X))+((vetor[posicao1].Y - vetor[posicao2].Y) * (vetor[posicao1].Y - vetor[posicao2].Y))); //calcula a distancia

  return distancia;
}


int main()
{
  int N;
  printf("Insira o numero de cidades: ");
  scanf("%d", &N);
  
  struct cidades *vetor = (struct cidades*) malloc(N * sizeof(struct cidades));

  cadastro_cidades(N, vetor);

    float **matriz = (float **) malloc(N * sizeof(float*)); //aloca espaço para um ponteiro que aponta para outros ponteiros
  
  for (int i = 0; i < N; i++) {
    matriz[i] = (float *) malloc(N * sizeof(float)); //aloca um novo espaço de tamanho N para cada ponteiro da matriz
  }

  distancia_matriz(N, matriz, vetor);

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      printf("%f ", matriz[i][j]);
      if (j == N - 1) printf("\n");
    }
  }
  char cidade1[128], cidade2[128];
  printf("Para calcular as distancias entre duas cidades, digite o nome da primeira cidade: ");
  scanf("%s", cidade1);
  printf("Agora, o da segunda: ");
  scanf("%s", cidade2);

  printf("A distancia entre as duas cidades é: %f\n", distancia_cidades(cidade1, cidade2, vetor, N));

  for (int i = 0; i < N; i++) free(matriz[i]);
  free(matriz);
  free(vetor);
}


