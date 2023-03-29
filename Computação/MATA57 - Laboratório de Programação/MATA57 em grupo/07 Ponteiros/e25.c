//feito por Alan Cristian Nunes da Silva
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// funÃ§Ã£o que ler as notas e armazena via ponteiro
void lerNota(float *nota1, float *nota2) {
  // Lendo a primeira variÃ¡vel
  printf("Digite a primeira nota: ");
  scanf("%f", nota1);
  // Lendo a segunda variÃ¡vel
  printf("Digite a segunda nota: ");
  scanf("%f", nota2);
}

// funÃ§Ã£o que ler retorna as mÃ©dias via parÃ¢mentro
void media(float *mediaSimples, float *mediaPonderada, float nota1, float nota2) {
  // Calcula a mÃ©dia simple e aramazena na variÃ¡vel passada por parÃ¢mentro
  *mediaSimples = (nota1 + nota2)/ 2.0;
  // Calcula a mÃ©dia ponderada e aramazena na variÃ¡vel passada por parÃ¢mentro
  *mediaPonderada = (nota1 + (2.0 * nota2))/ 3.0;
}


int main(void) {
  // Declarando as variÃ¡veis
  float nota1, nota2, mediaSimples, mediaPonderada;
  // Entrada de dados
  lerNota(&nota1, &nota2);
  // Chamando a funÃ§Ã£o media
  media(&mediaSimples, &mediaPonderada, nota1, nota2);
  // Printando os valores das mÃ©dias
  printf("MÃ©dia simples Ã©: %.2f\n", mediaSimples);
  printf("MÃ©dia ponderada Ã©: %.2f\n", mediaPonderada);
}
