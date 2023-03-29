// feito por Igor Dantas
// https://github.com/igordantasgf

#include <stdio.h>
#include <stdlib.h>
int main(){
    float a[3][3]; // criacao da matriz float, com os indices 3x3
    int i=0, j=0;

    for(i=0; i<3; i++){  //percorrer a linha i
        for(j=0; j<3; j++){ // percorrer a coluna j da linha i
            printf("%d ", &a[i][j]);  // retorna o endereco de a[i][j], atribundo o & para denotar tal funcao            
        }
        printf("\n");
    }
}
