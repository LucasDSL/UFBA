//feito por Adrielle Andrade Carvalho
#include <stdio.h>
#include <stdlib.h>

int ** alocar(int n, int m){ // função para alocar dinamicamente a matriz
	int i, j;
	int **p = (int **) malloc(sizeof(int *) * n);
	for(i=0;i<n;i++){
		p[i] = (int *) malloc(m * sizeof(int));
	}
	return p;
}

void dados(int ** p, int n, int m){ // função para receber os dados de p
	int i, j;
	printf("Informe a matriz:\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d", &p[i][j]);
		}
	}	
	return;
}

void transposta(int ** p, int ** t, int n, int m){ // função para fazer a transposta
	int i, j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			t[i][j] = p[j][i];
		}
	}	
	return;
}

void imprimir(int n, int m, int ** p){ // função para imprimir as matrizes
	int i, j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d ", p[i][j]);
		}
		printf("\n");
	}
	return;
}

int main(){
	int **p, **t, n, m;
	printf("Digite a quantidade de linhas\n");
	scanf("%d", &n);
	printf("Digite a quantidade de colunas\n");
	scanf("%d", &m);
	p = alocar(n, m);
	t = alocar(m, n);
	dados(p, n, m);
	transposta(p, t, n, m);
	printf("Normal:\n");
	imprimir(n, m, p);
	printf("Transposta:\n");
	imprimir(m, n, t);
	free(p);
	free(t);
	return 0;
}
