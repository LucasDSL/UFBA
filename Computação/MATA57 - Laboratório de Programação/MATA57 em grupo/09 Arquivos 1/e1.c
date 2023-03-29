//feito por Adrielle Andrade Carvalho
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void escrever(FILE * f){ // função que escreve no arquivo
	f = fopen("arq.txt","w"); // abre o arquivo para escrita
	char c;
	do{
		scanf("%c", &c); 
		if(c != '0'){
			fputc(c, f);
		}		
	}while(c != '0');
	fclose(f);
	return;
}

void imprimir(FILE * f){ // função que lê e imprime o conteúdo do arquivo
	char c;
	f = fopen("arq.txt","r"); // abre o arquivo pra leitura
	do{
		c = fgetc(f);
		printf("%c", c);		
	}while(c != EOF);
	fclose(f);
	return;
}

int main(){
	FILE *f;
	escrever(f);
	imprimir(f);
	return 0;
}
