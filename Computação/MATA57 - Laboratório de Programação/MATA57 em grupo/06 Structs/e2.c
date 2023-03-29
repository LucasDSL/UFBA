//feito por Adrielle Andrade Carvalho
#include <stdio.h>
#include <stdlib.h>
#define MAX 128

typedef struct pop{
	char sexo;
	char olho;
	char cabelo;
	int idade;
}pop;

void dados(pop *, int);
void porcentagem(pop *, int);

int main(){
	pop lista[100];
	int i=0, n;
	do{
		dados(lista, i);
		printf("\nDeseja continuar? \n[1] Sim\n[0]Não ");
		scanf("%d", &n);
		i++;
	}while((n == 1) && (i<100));
	return 0;
}

void dados(pop *lista, int i){
	printf("\nSexo: ");
	scanf(" %c", &lista[i].sexo);
	printf("\nCor dos olhos: ");
	scanf(" %c", &lista[i].olho);
	printf("\nCor do cabelo: ");
	scanf(" %c", &lista[i].cabelo);
	printf("\nIdade: ");
	scanf("%d", &lista[i].idade);
}

void velho(pop *lista, int quant){
	int i, maior = lista[0].idade, pos = 0;
	for(i=1;i<quant;i++){
		if(lista[i].idade > maior){
			pos = i;
			maior = lista[i].idade;
		}
	}
	printf("A pessoa mais velha tem %d anos e está na posição %d da lista", maior, pos);
}

void porcentagem(pop *lista, int quant){
	int i, cont = 0;
	float porc;
	for(i=0;i<quant;i++){
		if((lista[i].sexo == 'f') && (lista[i].cabelo == 'l') && (lista[i].olho == 'v') && ((lista[i].idade >= 18) && (lista[i].idade < 35))){
			cont++;
		}
	}
	porc = (cont/quant)*100;
	printf("O percentual é %g", porc);
}
