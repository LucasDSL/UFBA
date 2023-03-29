//feito por Adrielle Andrade Carvalho
#include <stdio.h>
#include <stdlib.h>

double * alocar(int n){ // função para alocar dinamicamente a palavra
	double *p = (double *) malloc(sizeof(double) * n);
	return p;
}

void imprimir(double *p, int n){// função pra randomizar e imprimir os 10 primeiros
	int i;
	for(i=0;i<10;i++){
		p[i] = rand() % 100;
	}
	for(i=0;i<10;i++){
		printf("p[%d] = %g\n", i, p[i]);
	}
}
int main(){
	int n;
	printf("Digite o tamanho do vetor\n");
	scanf("%d", &n);
	double *p = alocar(n);
	imprimir(p, n);
	free(p);
	return 0;
}
