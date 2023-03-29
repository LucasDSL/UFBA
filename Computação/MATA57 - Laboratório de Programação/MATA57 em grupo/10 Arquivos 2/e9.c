//feito por Adrielle Andrade Carvalho e Iasmim da Cruz Marinho
#include<stdio.h>
#include<stdlib.h>

void uniao(FILE *f, FILE *uni){//coloca o conteúdo de um arquivo em outro
    char c = 'c';
    while(c != EOF){
        c = fgetc(f);
        if(c == EOF){
            break;
        }
        fputc(c, uni);
    }
    fclose(f);
}

void leitura(FILE *f){//lê um arquivo
	char c;
	do{
		c = fgetc(f);
		printf("%c", c);		
	}while(c != EOF);
}

int main(){
    FILE *f1;
    printf("Informe o nome do primeiro arquivo\n");
    char arq1[20];
    scanf("%s", &arq1);
    f1 = fopen(arq1, "r");
    printf("Informe o nome do segundo arquivo\n");
    char arq2[20];
    scanf(" %s", &arq2);
    FILE *f2 = fopen(arq2, "r");
    FILE *f3 = fopen("uniao.txt", "w");
    uniao(f1,f3);
    uniao(f2,f3);
    fclose(f3);
    f3 = fopen("uniao.txt", "r");
    leitura(f3);
    return 0;
}
