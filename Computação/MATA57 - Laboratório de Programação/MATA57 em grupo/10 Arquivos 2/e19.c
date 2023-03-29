//feito por Adrielle Andrade Carvalho
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void escrever(FILE *f){ // função que escreve no arquivo
    printf("Informe o nome do arquivo\n");
    char arq1[20];
    int cont = 1, i = 0, j, k, n, maior = 0, tam;
    char c;
    char linha[128], nome[128];
    scanf(" %[^\n]", &arq1);
    f = fopen(arq1, "r");
    do{
		c = fgetc(f);
		if(c == '\n'){
			cont++;//conta a quantidade de linhas
		}    
	}while(c != EOF);
    fclose(f);
    f = fopen(arq1, "r");
    for(i=0;i<cont;i++){
    	fgets(linha, 120, f);//pega cada linha do arquivo
    	tam = strlen(linha);
    	for(j=0;j<tam;j++){
    		if(linha[j-3] == 'A' && linha[j-2] == ':'){//caso os elementos anteriores sejam A e :, teremos encontrado a nota 
    			n = (linha[j] - 48);//transformando de char para inteiro
    			if(linha[j+1] == '0'){
    				n = n * 10;
				}
			}
		}
		if(n >= maior){//caso n seja maior que o maior elemento armazenado, atualizamos o conteúdo dessa variável
			maior = n;
			j = 6;
			k = 0;
			do{
				nome[k] = linha[j];//armazena o nome da pessoa com maior nota
				k++;
				j++;
			}while(linha[j] != ' ');
		}
	}
    printf("Nome do aluno(a): ");
    for(i=0;i<k;i++){
    	printf("%c", nome[i]);
	}
	printf("\nNota: %d", maior);
}

int main(){
    FILE *f;
    escrever(f);
    return 0;
}
