//feito por Adrielle Andrade Carvalho
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void escrever(FILE *f){ // função que escreve no arquivo
	f = fopen("dados.txt", "w");
	char nome[128];
	char tel[128];
	char zero[10] = "0";
    int v = 1;
    do{
    	printf("Nome:\n");
    	scanf(" %[^\n]", &nome);
    	printf("Telefone:\n");
    	scanf(" %[^\n]", &tel);
    	if(strcmp(tel,zero) == 0){
    		v = 0;
    		break;
		}
		fputs(nome, f);
		fputc(' ', f);
		fputs(tel, f);
		fputc('\n', f);
	}while(v == 1);
    fclose(f);
}

void imprimir(FILE *f){ // função que lê e imprime o conteúdo do arquivo
	char c;
	f = fopen("dados.txt", "r");
    do{
		c = fgetc(f);
		printf("%c", c);		
	}while(c != EOF);
	fclose(f);
}

int main(){
    FILE *f;
    escrever(f);
    imprimir(f);
    return 0;
}
