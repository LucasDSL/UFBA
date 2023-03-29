// feito por Igor Dantas
// https://github.com/igordantasgf

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void gravarNome(char **nomes,int Linha) {                       
  printf("\nDigite o nome a ser armazenado na linha %d ", Linha);
  scanf("%s", nomes[Linha]);  //| Função que armazena um nome em uma determinada linha dada
}                             //|    pelo usuário e usada como parâmetro na funcão.

void apagarNomePorLinha(char **nomes, int Linha) {
  int i;                      //| Função que apaga o nome contido na linha fornecida pelo usuário:
  for(i = 0; i < 30; i++) {   //| Loop para substituir os 30 caracteres por ' ' no indice 'Linha'.
    nomes[Linha][i] = ' ';
  }
}



void substituirNome(char **nomes, int N, char *nome) {
  int pos = 0;                      //| Função que busca um nome e o substitui por outro no mesmo lugar.
  int i, j;                          
  for(i = 0; i < N; i++) {          //| Num loop que pode percorrer todas as N alocadas no inicio:
    int count = 0;            
    for(j = 0; j < 30; j ++) {      //|   Analisamos todos os 30 caracteres presentes nesta linha
      if(nomes[i][j] == nome[j]) {  //|     e caso seja igual ao caractere de mesmo indice no nome informado, incrementamos count.
        count ++;                   //|  
      }                             //|
      if(count >= 29) {             //|   A posteriori, se count entrar nesta condição(houveram mais de 29 caracteres iguais), 
        pos = i;                    //|     quer dizer que as linhas são iguais, logo, salvamos 'pos' como 'i',   
        break;                      //|     indicando a linha a ser substituida e encerramos o loop.
      }
    }
  }
  printf("\nDigite o nome a ser colocado no lugar: ");
  scanf("%s", nomes[pos]);          //|   Colocamos um input no lugar de nomes[pos], sendo 'pos' a linha encontrada no loop anterior,
}                                   //|     indicando a linha que continha o nome que queríamos substituir.




void apagarNomePorNome(char **nomes, int N, char *nome) {
  int pos = 0;                        //| Função semelhante a anterior, mas que coloca espaços na linha encontrada ao inves
  int i, j;                           //|   de outro nome.

  for(i = 0; i < N; i++) {            //| Num loop que pode percorrer todas as N alocadas no inicio:
    int count = 0;
    for(j = 0; j < 30; j ++) {        //| Analisamos todos os 30 caracteres presentes nesta linha
      if(nomes[i][j] == nome[j]) {    //|   e caso seja igual ao caractere de mesmo indice no nome informado, incrementamos count.
        count ++;
      }
      if(count >= 29) {               //| A posteriori, se count entrar nesta condição(houveram mais de 29 caracteres iguais),
        pos = i;                      //|   quer dizer que as linhas são iguais, logo, salvamos 'pos' como 'i',
        break;                        //|   indicando a linha a ser apagada e encerramos o loop.
      }
    }
  }
  for(i  = 0; i < 30; i++) {          //| Colocamos espaços ' ' em cada caractere da linha 'pos', indicando a linha que continha
    nomes[pos][i] = ' ';              //|   o nome que gostaríamos de apagar.
  }
}

char *buscarNome(char **nomes, int Linha) {
  printf("\n%s", nomes[Linha]);       //| Função que imprime o nome contido na linha informada
}



int main() {
  int N, i, j;
  char o;         // Caractere que vai indicar qual operação iremos realizar

  printf("Digite a quatidade de nomes: ");  //| Input da quantidade N de linhas que iremos alocar, indicando também
  scanf("%d", &N);                          //|   a quantidade de nomes que podemos armazenar.
  
  char **nomes = malloc(N * sizeof(char));  //| Alocamos N linhas de caracteres para o ponteiro "**nomes", sendo
                                            //| "pointer to pointer" pois será uma matriz de duas dimensões.

  for(i = 0; i < N; i++) {                  //| Para cada linha 'N', iremos nela alocar mais 30 caracteres, pois irá conter o nome
    nomes[i] = malloc(30 * sizeof(char));   //|   a ser armazenado nesaa linha 'N'.
  }
  for(i = 0; i < N; i++) {                  //| Aqui, substituímos todos os caracteres da matriz por " ", para facilitar a leitura
    for(j = 0; j < 30; j++) {               //| e a impressão da matriz pelo programa.
      nomes[i][j] = ' ';
    }
  }
  
  while(1){                                 //|       MENU       |//
    int linha;
    char nome_temp[30]; 
    printf("\nDigite a letra da operacao: ");      // Aqui, digitamos a letra para 'o' que indica qual operação queremos fazer:
  	scanf("%c", &o);

  	if(o == 'a'){                                    //| (a) Gravar um nome em uma linha da matriz;
        printf("\nEm qual linha você quer inserir?");
        scanf("%d", &linha);
  		  gravarNome(nomes, linha);
        continue;

	  }else if(o == 'b'){                              //| (b) Apagar o nome contido em uma linha da matriz;
        printf("\nEm qual linha você quer apagar");  
        scanf("%d", &linha);
        apagarNomePorLinha(nomes, linha);
        continue;

	  }else if(o == 'c'){       //| (c) Informar um nome, procurar a linha onde ele se encontra e substituir por outro nome;
        printf("\nDigite o nome a ser procurado e substituido: ");
        scanf("%s", &nome_temp);
		    substituirNome(nomes, N, nome_temp);
        continue;

  	}else if(o == 'd'){       //| (d) Informar um nome, procurar a linha onde ele se encontra e apagar;
        printf("\nDigite o nome a ser procurado e apagado: ");
        scanf("%s", &nome_temp);
        apagarNomePorNome(nomes, N, nome_temp);
        continue;

    }else if(o == 'e'){       //| (e) Pedir para recuperar o nome contido em uma linha da matriz;
        printf("\nDigite a linha a ser imprimida: ");
        scanf("%d", &linha);
        buscarNome(nomes, linha);
        continue;

    }
    else if(o == 'f'){        //| Encerrar função
        printf("\nEcerrando o programa...");
        break;

    }

  }
}
