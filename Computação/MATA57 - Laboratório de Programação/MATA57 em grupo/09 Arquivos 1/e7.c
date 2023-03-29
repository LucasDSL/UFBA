//feito por Adrielle Andrade Carvalho
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void escrever(FILE * f1, FILE * f2){ 
	printf("Informe o nome do arquivo\n"); //lê o arquivo informado pelo usuário
    char arq1[20];
    scanf(" %[^\n]", &arq1);
    f1 = fopen(arq1, "r"); //abre o arquivo informado pelo usuário para leitura
    f2 = fopen("sem vogal.txt", "w");
	char c;
	do{
		c = fgetc(f1);
		if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
			fputc('*', f2); // caso a letra seja uma vogal, ela é substituida por *
		}else{
			fputc(c, f2);
		}		
	}while(c != EOF);
	fclose(f1);
	fclose(f2);
	return;
}

void imprimir(FILE * f2){ // imprime o arquivo criado sem vogais
	char c;
	f2 = fopen("sem vogal.txt","r");
	do{
		c = fgetc(f2);
		printf("%c", c);		
	}while(c != EOF);
	fclose(f2);
	return;
}

int main(){
	FILE *f1, *f2;
	escrever(f1, f2);
	imprimir(f2);
	return 0;
}
