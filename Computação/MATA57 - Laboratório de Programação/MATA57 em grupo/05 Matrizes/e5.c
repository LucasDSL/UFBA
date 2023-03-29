//feito por Adrielle Andrade Carvalho
#include <stdio.h>
int m, n;

void dados(int campo[m][n], int v){
	int i, j, p1, p2;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){//preenche o campo com 0
			campo[i][j]=0;
		}
	}
	for(i=0;i<v;i++){//coloca 1 nas posições das células vivas
		scanf("%d", &p1);
		scanf("%d", &p2);
		campo[p1+1][p2+1]=1;
	}
}

void caux(int campo[m][n], int campoaux[m][n]){//a matriz auxiliar é uma cópia da original para receber as atualizações
	int i, j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){//preenche o campo auxiliar 
			campoaux[i][j] = campo[i][j];
		}
	}
}

void jogo(int campo[m][n], int campoaux[m][n]){
	int i, j;
	int redor = 0;
	for(i=1;i<m;i++){
		for(j=1;j<n;j++){//comparação com as 8 posições ao redor da posição, acumulando +1 cada vez que tiver uma célula viva
			if(campo[i-1][j-1]==1){
				redor++;
			}
			if(campo[i-1][j]==1){
				redor++;
			}
			if(campo[i-1][j+1]==1){
				redor++;
			}
			if(campo[i][j-1]==1){
				redor++;
			}
			if(campo[i][j+1]==1){
				redor++;
			}
			if(campo[i+1][j-1]==1){
				redor++;
			}
			if(campo[i+1][j]==1){
				redor++;
			}
			if(campo[i+1][j+1]==1){
				redor++;
			}
			if(redor<2){//campo auxiliar é alterado de acordo com as regras do jogo
				campoaux[i][j]=0;
			}else if(redor>3){
				campoaux[i][j]=0;
			}else if(redor==3){
				campoaux[i][j]=1;
			}
			redor=0;
		}
	}
	for(i=1;i<m;i++){//campo é atualizado e impresso depois de ser totalmente analisado
		for(j=1;j<n;j++){
			campo[i][j]=campoaux[i][j];
			printf("%d ", campo[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

int main(){
	int i, j, v, g;
	scanf("%d", &m);
	scanf("%d", &n);
	scanf("%d", &v);
	scanf("%d", &g);
	m = m + 2;
	n = n + 2;
	int campo[m][n], campoaux[m][n];
	dados(campo, v);
	caux(campo, campoaux);
	for(i=0;i<g;i++){
		jogo(campo, campoaux);
	}
	return 0;
}
