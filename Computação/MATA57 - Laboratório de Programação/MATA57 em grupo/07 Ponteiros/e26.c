//Feita por Iasmim da Cruz Marinho
/*Calcular as raizes
Se ∆ < 0 nao existe real. 
Se ∆ = 0 existe uma raiz real.
Se ∆ ≥ 0 existem duas raízes reais.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Assinatura da função
int raizes(float A,float B,float C,float * X1,float * X2);
void imprime(float *X1, float *X2);

int main(void) {
  
  float A, B, C;
  float *X1 = 0, *X2 = 0;
  float raiz;
  float X,Y;
  
  printf("Informe A, B e C para calcular raizes:\n");
  scanf("%f%f%f",&A, &B, &C);

  if(A != 0){
   
  raiz = raizes(A, B, C, X1, X2);
  printf("Possui %g raizes reais.", raiz);
  
  
  }

  return EXIT_SUCCESS;
}

//retorna o número de raízes reais e distintas
int raizes(float A,float B,float C,float * X1,float * X2){

  float X,Y;
  //calcula delta
  float delta = pow(B,2) - 4*A*C;

  //condições para existencia da raíz
  if(delta < 0){
    return 0;
  }
  else{
  //calcula raizes
    X = (-B + (sqrt(delta)))/(2*A);
    Y = (-B - (sqrt(delta)))/(2*A);
    
    if(delta == 0){
    //passa endereço das raizes para X1 e X2
      X1 = &X;
      X2 = X1;
    //chama procedimento que imprime as raizes
      imprime(X1, X2);
      return 1;

    }else{
      X1 = &X;
      X2 = &Y;
      imprime(X1, X2);
      return 2;
      
    
    }

  }
}
void imprime(float *X1, float *X2){
  printf("X1 = %f \n", *X1);
  printf("X2 = %f \n",* X2);
}
