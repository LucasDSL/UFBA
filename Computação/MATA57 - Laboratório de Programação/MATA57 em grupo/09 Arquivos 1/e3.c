//feito por Adrielle Andrade Carvalho e Iasmim da Cruz Marinho
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int vogais(){//função que conta as vogais
	FILE *f;
	int cont;
	char c;
	char arq[20];
	printf("Informe o nome do arquivo\n");
    scanf("%s", &arq);
	f = fopen(arq,"r");//abre o arquivo informado pelo usuário para leitura
	do{
		c = fgetc(f);
		if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
			cont++;//caso seja vogal a variável cont soma 1
		}		
	}while(c != EOF);
	return cont;
}

int main(){
	printf("O arquivo tem %d vogais\n", vogais());
	return 0;
}
