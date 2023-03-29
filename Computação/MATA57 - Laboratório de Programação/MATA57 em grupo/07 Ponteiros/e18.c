//feito por Adrielle Andrade Carvalho
#include <stdio.h>
#include <stdlib.h>

void calc_esfera(float r, float *a, float *v){
	*a = 4 * 3.14 * r * r; // calculo da area
	*v = 4 * 3.14 * r * r * r / 3; //calculo do volume
}

int main(){
	float r, a, v;
	printf("Informe o raio:\n");
	scanf("%f", &r);
	calc_esfera(r, &a, &v); // função que calcula a area e o volume
	printf("Área: %g\nVolume: %g\n", a, v);
	return 0;
}
