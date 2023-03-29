// Código feito por Igor Dantas
// https://github.com/igordantasgf

#include <stdio.h>
#include <stdlib.h>

void mediaPonderada(float x,float y,float a,float b){ //criação de uma função do tipo Float
  // x e y = valores
  // a e b = pesos
  // somatório dos pesos = 1
  printf("%.2f", (x*a)+(y*b));
}

int main() {
  float x,y,a,b;
  // mediaPonderada(valor 1, valor 2, peso 1, peso 2)
  scanf("%f %f %f %f", &x, &y, &a, &b);
  mediaPonderada(x, y, a, b);
}
