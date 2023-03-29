//feito por Adrielle Andrade Carvalho
#include <stdio.h>
#include <stdlib.h>

void extremos(int *a, int n, int *maior, int *menor){
	int *p = a, i;
	*maior = *p; // iguala maior e menor ao primeiro elemento
	*menor = *p;
	p++;
	for(i=1;i<n;i++){ // laço para percorrer todos os elementos
		if(*p > *maior){ // se o valor no vetor for maior que o armazenado em maior, atualiza maior
			*maior = *p;
		}
		if(*p < *menor){ // se o valor no vetor for menor que o armazenado em menor, atualiza menor
			*menor = *p;
		}
		p++;
	}	

}

int main(){
	int n, i, maior, menor, *p;
	printf("Informe o tamanho do vetor:\n");
	scanf("%d", &n);
	int a[n];
	p = a;
	for(i=0;i<n;i++){ // recebe os valores do vetor
		printf("Informe o valor %d:\n", i);
		scanf("%d", &*p);
		p++;
	}
	extremos(a, n, &maior, &menor); //função para achar o maior e o menor
	printf("\nO maior elemento é %d", maior);
	printf("\nO menor elemento é %d", menor);
	return 0;
}
