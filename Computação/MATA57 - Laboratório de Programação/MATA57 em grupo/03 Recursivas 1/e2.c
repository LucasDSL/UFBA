//feito por Adrielle Andrade Carvalho
#include <stdio.h>

int soma(int, int);

int main() {
	int n, m;
	printf("Informe o primeiro numero:\n");
	scanf("%d", &n);
	printf("Informe o segundo numero:\n");
	scanf("%d", &m);
	printf("%d", soma(n,m)); // chamada da função soma
	return 0;
}

int soma(int n, int m){ // função recursiva que calcula a soma
	if(n==m){
		return m;
	}
	return n+soma(n+1,m); //n é somado com a soma do seu sucessor até m, com a função sendo chamada até que n = m
}
