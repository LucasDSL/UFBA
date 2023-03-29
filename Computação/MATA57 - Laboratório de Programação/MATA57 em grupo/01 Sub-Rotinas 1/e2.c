//feito por Alan Cristian Nunes da Silva
#include <stdio.h>

// Procedimento que printa no console o dia da semana
void diaDaSemana(int num) {

  switch(num){
    case 1:
      printf("Domingo");
    break;
    case 2:
      printf("Segunda");
    break;
    case 3:
      printf("TerÃ§a");
    break;
    case 4:
      printf("Quarta");
    break;
    case 5:
      printf("Quinta");
    break;
    case 6:
      printf("Sexta");
    break;
    case 7:
      printf("SÃ¡bado");
    break;
    default:
      printf("NÃºmero invÃ¡lido");
  }
}

// FunÃ§Ã£o main
int main() {

  // Entrada de dados
  int num;
  printf("Digite um nÃºmero: ");
  scanf("%i", &num);

  // Chamada do procedimento
  diaDaSemana(num);

  return 0;
}
