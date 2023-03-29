//feito por Adrielle Andrade Carvalho
#include <stdio.h>
#include <stdlib.h>

void dobro(int *a, int *b){ // função que calcula o dobro dos numeros informados
	 *a = 2 * (*a);
	 *b = 2 * (*b);
	return;
}

int main(){
	int a;
	int b;
	printf("Informe a:\n");
	scanf("%d", &a); //recebe o primeiro numero
	printf("Informe b:\n");
	scanf("%d", &b); //receb o segundo numero
	dobro(&a, &b);
	printf("2 * a = %d\n2 * b = %d\n", a, b);
	return 0;
}
