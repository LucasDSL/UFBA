// feito por Igor Dantas
// https://github.com/igordantasgf

#include <stdio.h>
#include <stdlib.h>

int main(){
  transposta(4,3);
}

int transposta(linha,coluna){ // função recebe a quantidade de linhas e colunas da função

  int i,j;                    // variáveis para os loops
  int i1[linha][coluna];      // criação da matriz inicial com 'linha' linhas e 'coluna' colunas;
  int fim[coluna][linha];     // criação da matriz final, com os índices trocados, pois na transposição de uma matriz,
                              // caso ela seja assimétrica, a quantidade de linhas vira a quantidade de colunas e vice versa;

  for(i=0;i<linha;i++){       // loop  que recebe os valores da matriz, preenchendo linha por linha
    for(j=0;j<coluna;j++){
      scanf("%d",&i1[i][j]);
    }
  }
  for(i=0;i<linha;i++){       // preenche a matriz final com a inicial, porém, com indices trocados
    for(j=0;j<coluna;j++){
      fim[j][i]=i1[i][j];
    } 
  }
  printf("\nresultado:\n");   // demonstração do resultado
  
  for(i=0;i<coluna;i++){
    for(j=0;j<linha;j++){
      printf("%d ",fim[i][j]);
    }
    printf("\n");
  }


  return EXIT_SUCCESS;
}


