//Feita por Iasmim da Cruz Marinho
//O programa recebe um valor e calcula se é par ou impar

#include <stdio.h>
#include <stdlib.h>

//assinatura do método
void ParOuImpar(int n);

int main(void) {
  int n;
  ParOuImpar(n);
  return EXIT_SUCCESS;
}

//método recebe n é calcula se é par ou impar
void ParOuImpar(int n){
  
  printf("Informe um valor positivo: ");
  scanf("%d", &n);

  if(n>0){
    //um número é par se o resto da divisão dele por 2 é 0
    if(n%2==0){
      printf("%d é par", n );
    }else{
      printf("%d é impar", n );
    }
  }else{
    printf("informe um valor válido\n");
    //chama o método novamente caso valor não seja válido
    ParOuImpar(n);

  }
}
