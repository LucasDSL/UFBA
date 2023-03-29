//feito por Adrielle Andrade Carvalho
#include <stdio.h>
#include <stdlib.h>

int ordenar(int *a, int *b, int *c){
	if(*a==*b && *a==*c){ // caso os numeros sejam todos iguais a fun��o retorna 1
		return 1;
	}
	int aux;
	if(*b<=*a){ // caso o numero da segunda op��o seja menor que o da primeira, eles trocam de posi��o
		aux = *a;
		*a = *b;
		*b = aux;
	}
	if(*c<=*a){ // caso o numero da terceira op��o seja menor que o da primeira, eles trocam de posi��o
		aux = *a;
		*a = *c;
		*c = aux;
	}
	if(*c<=*b){ // caso o numero da terceira op��o seja menor que o da segunda, eles trocam de posi��o
		aux = *b;
		*b = *c;
		*c = aux;
	}
	return 0;
}
int main(){
	int a, b, c, v;
	printf("Informe 3 numeros:\n"); // recebe os numeros
	scanf("%d%d%d", &a, &b, &c);
	v = ordenar(&a, &b, &c); // chama a fun��o que ordena
	if(v == 1){
		printf("Os n�meros s�o iguais");
	}else{
		printf("%d %d %d", a, b, c);
	}
	return 0;
}
