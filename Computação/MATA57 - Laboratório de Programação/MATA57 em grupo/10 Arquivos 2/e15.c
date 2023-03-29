//feita por Iasmim da Cruz Marinho

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

 void copiaInfo(FILE* f1, FILE* f2, int a);
 void abreArquivo(FILE *f1, FILE *f2, int a);

int main(){
    int ano;
    FILE *f1, *f2;

    printf("Informe o ano corrente\n");
    scanf("%d", &ano);

     abreArquivo(f1, f2, ano);

    return 0;

    }
    void abreArquivo(FILE *f1, FILE *f2, int ano){
    printf("Informe o nome do primeiro arquivo\n");
    char arq1[20];
    scanf("%s", &arq1);
    strcat(arq1,".txt"); //unir o yipo ao nome

    if((f1 = fopen(arq1, "r")) == NULL){ //se arquivo não pode ser lido
        printf("Não foi possivel abrir\n");
        exit(1);
    }
    printf("Informe o nome do segundo arquivo\n");
    char arq2[20];
    scanf(" %s", &arq2);
    strcat(arq2,".txt"); //unir o yipo ao nome

    if((f2 = fopen(arq2, "w")) == NULL){ //se arquivo não pode ser lido
        printf("Não foi possivel abrir\n");
        exit(1);

    }
        copiaInfo(f1, f2, ano); //chama procedimento que copia saída
    }

    void copiaInfo(FILE* f1, FILE* f2, int ano){
        int  nasc;
        char nome[40];
        char *frase;

        while(!feof(f1)){ //executa até não ter mais texto
        fscanf(f1, " %s\n %d", nome, &nasc); //leitura dos dados formatados
        //printf("%s %d %d\n", nome, nasc, ano-nasc);

        fputs(nome, f2); //insere nome no arquivo2

        int idade = ano-nasc; //calcula idade de cada pessoa

        if(idade> 18){ //
            frase = " maior de idade\n";
        }else if(idade < 18){
            frase =  " menor de idade\n";
        } else if(idade == 18){
            frase = " entrando na maior idade\n";
        }
            //insere mensagem no arquivo2
            fputs(frase, f2);

    }

    fclose(f1);//fecha arquivo
    fclose(f2);

}
