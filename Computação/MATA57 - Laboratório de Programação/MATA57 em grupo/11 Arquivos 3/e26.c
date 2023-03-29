//feito por Adrielle Andrade Carvalho
#include <stdio.h>
#include <stdlib.h>
#define MAX 128 

typedef struct alunos{
	char nome[MAX];
	char sobrenome[MAX];
	char data[MAX];
}alunos;

void cadastro(alunos *, int);

void escrita(FILE *, alunos *, int);

void leitura(FILE *, int);

int main(){
	int n, i;
	scanf("%d", &n);
	FILE *f;
	alunos *lista = (alunos *) malloc(sizeof(alunos) * n);
	for(i=0;i<n;i++){
		cadastro(lista, i);
	}
	escrita(f, lista, n);
	leitura(f, n);		
	return 0;
}

void cadastro(alunos *lista, int i){//função para receber os dados
	printf("\nNome: ");
	scanf(" %s", &lista[i].nome);
	printf("\nSobrenome: ");
	scanf(" %s", &lista[i].sobrenome);
	printf("\nData de nascimento: ");
	scanf(" %s", &lista[i].data);	
}

void escrita(FILE *f, alunos *lista, int n){//função para armazenar os dados em um arquivo
	f = fopen("matricula.txt", "wb");
	fwrite(lista, sizeof(alunos), n, f);
	fclose(f);
	free(lista);	
}

void leitura(FILE *f, int n){//função para exibir os dados dos arquivos
	f = fopen("matricula.txt", "rb");
	int i;
	alunos armazenados;
	for(i=0;i<n;i++){
		fseek(f, i * sizeof(alunos), SEEK_SET); //da um offset a partir do começo com base em qual elemento vc procura
		fread(&armazenados, sizeof(alunos), 1, f);
		printf("Nome: %s\nSobrenome: %s\nData de nascimento: %s\n", armazenados.nome, armazenados.sobrenome, armazenados.data);
	}
	fclose(f);
}


