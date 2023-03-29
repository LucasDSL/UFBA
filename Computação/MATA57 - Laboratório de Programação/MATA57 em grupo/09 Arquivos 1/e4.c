// feito por Igor Dantas
// https://github.com/igordantasgf

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {

	FILE *p;  // criacao de um ponteiro do tipo FILE
	
	p = fopen("textoe4.txt", "r"); //abrindo o arquivo de texto no modo leitura
	
	if (p == NULL) { // se o ponteiro indicar NULL, o arquivo nao existe ou nao foi encontrado
		perror("\nHouve um erro ao abrir arquivo para leitura: ");
		exit(1); // encerra o programa caso isso aconteca
	}
	


	printf("\nArquivo aberto para leitura!");
  


    char Linha[100]; 
	fgets(Linha, 100, p); // tranfere para o array Linha os 99 caracteres da primeira linha do arquivo ou até o \n
    printf("\n\nO conteudo do arquivo e: %s", Linha); // output da string retirada do arquivo
    


    int con=0,vog=0; // variaveis con = consoantes e vog = vogais

    for(int i=0; i<100; i++){             // Consulta de todos os caracteres do texto:
        if(Linha[i]<97 || Linha[i]>122){ // se o char selecionado no loop não for uma letra,
            continue;                   // continuamos o fluxo, não contando como con ou vog
        }
        else if(97<=Linha[i]<=122){   // Se o char selecionado for uma letra
            if(Linha[i]==97 || Linha[i]==101 || Linha[i]==105 || Linha[i]==111 || Linha[i]==117){
                vog++;              // e for uma vogal, sendo um dos valores decimais acima de acordo com a tabela ASCII, incrementa vog.
            }else{                 // senao, incrementa-se con.
                con++;
            }
        }
    }

    printf("\nExistem %d vogais no arquivo", vog);
    printf("\nExistem %d consoantes no arquivo", con);
	
	fclose(p); // fecha-se o arquivo
	
	return 0;
}
