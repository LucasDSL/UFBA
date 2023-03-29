//feito por Adrielle Andrade Carvalho
#include <stdlib.h>
#include <stdio.h>

void regressiva(long long int);

int main(){
	long long int n;
	printf("Informe o numero natural:\n");
	scanf("%d", &n); // recebe o numero para iniciar a contagem
	printf("A contagem regressiva de %d ate 0:\n", n);
	regressiva(n);
    return 0;
}

void regressiva(long long int n){ // função que calcula a contagem
	long long int i;
	for(i=n;i>=0;i--){ // loop que imprime de n ate 0
		printf("%d\n", i);
	}
}
