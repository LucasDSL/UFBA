//feito por Adrielle Andrade Carvalho
#include <stdio.h>
#include <string.h>

void inverter(char *, int, int);

int main(){
	int len;
	char s[100];
	printf("Informe a frase:\n");
	scanf(" %[^\n]", &s);
	len=strlen(s); // armazena o tamanho da frase
	inverter(s, len, 0); //chama a função de inverter
	printf("Frase invertida:\n");
	printf("%s", s);
	return 0;
}

void inverter(char * s, int len, int i){//função que inverte a frase
	char aux;
	aux=s[i]; // a variavel auxiliar armazena a letra na posição i
	s[i]=s[len-i-1]; // a letra na posição i é trocada pela letra na posição oposta
	s[len-i-1]=aux;
	if(i<(len/2) - 1){ //até metade da frase a função de inverter é chamada
		return inverter(s, len, i+1);
	}
}
