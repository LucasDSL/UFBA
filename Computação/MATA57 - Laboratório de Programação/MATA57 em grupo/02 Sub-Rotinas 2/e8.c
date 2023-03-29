#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// FunÃ§Ã£o que testa a possibilidade do nÃºmero ter um natural tal que o produto Ã© igual a ele
bool Epossivel(int num) {
  // laÃ§o que limita o teste
  while(num > 1) {
    //verifica se o nÃºmero pode ser divisivel de 9 a 2
    for(int i = 9; i >= 2; i--) { 
      //caso o nÃºmero for divisÃ­vel, para o for e divide num por i
      if(num % i == 0) {
        num /= i;
        break;
      }
      //retorna a impossiblidade caso ele nÃ£o seja divisivel por nenhum nÃºmero entre 9 e 2 
      if(i == 2) {
        return false;
      }
    }
  }
  // caso passe pelo laÃ§o acima o nÃºmero testado tem um natural tal que o produto Ã© igual a ele 
  return true;
}

// FunÃ§Ã£o que recebe como parÃ¢metro um n e retorna um m natural tal que o produto Ã© igual a n
int acharQ(int num) {
  //inicia variaveis auxiliares
  int Q = 0, expoenteDo10 = 0;
  //laÃ§o que gera o nÃºmero Q
  while (num > 1) {
    for(int i = 9; i >= 2; i--) {
      //verifica por qual nÃºmero num Ã© divisÃ­vel comeÃ§ando pelo maior
      if(num % i == 0 ) {
        //divide num por i
        num /= i;
        //incrementa Q com i vezes a potÃªncia de 10
        Q += i * pow(10, expoenteDo10);
        expoenteDo10 ++; 
        break;
      } 
    }
  }
  return Q;
}

// FunÃ§Ã£o main
int main() {

  // Entrada de dados
  int num;
  printf("Digite um número: ");
  scanf("%i", &num);

  //verifica se o número é positivo
  if(num >= 0) {
    //chama a função que verifica a possibilidade do nÃºmero ter um natural tal que o produto Ã© igual a ele 
    if(Epossivel(num)) {
      printf(
        "O mínimo natural tal que o produto dos dígitos é igual a %i Ã©: %i"
        ,num,acharQ(num));
    }else {
      printf("Problema sem solução!");
    }
  } else {
    printf("Número digitado inválido!");
  }
  

  return 0;
}
