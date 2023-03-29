// feito por Igor Dantas
// https://github.com/igordantasgf

#include <stdio.h>
#include <stdlib.h>

int main(){

    int m,n;                                             
    printf("\n Digite as dimensoes da matriz: \n\n");
    scanf("%d %d", &m, &n);   // input das dimensoes da matriz

    int *matriz, *inicio;                  // 1 - criacao de dois ponteiros, sendo "matriz" nossa matriz e "inicio" um vetor referencial
    matriz = malloc(m * n * sizeof(int)); // 2 - alocacao da matriz na memoria, usando m*n espacos (dimensoes)
    inicio = matriz;                     // 3 - igualamos os ponteiros para ter o endereco inicial da matriz salva

    int i,j;
    printf("\n Digite o conteudo da matriz: \n\n");
    for(i=0; i<m*n; i++){
        scanf("%d", &*matriz); // 1 - input do conteudo na matriz de acordo com as dimensoes m e n
        matriz++;             // 2 - podemos usar o loop apenas ate m*n pois o armazenamento da matriz 
                             //      normalmente se dá de forma linear ao decorrer cada linha.
                            // ex: 120004 120008 120012 <- enderecos
                           //      120016 120020 120024  
    }

    int valor;
    matriz = inicio;       // colocamos o inicio da matriz de volta em "matriz"
    printf("\n Qual numero voce deseja consultar?: \n ");
    scanf("%d", &valor); // input do numero a ser consultado
    consulta(matriz, m, n, valor); // chamada da funcao para consultar o numero na matriz
}


void consulta(int *matriz, int m, int n, int valor){ // 1 - parametros: endereco da matriz, dimensoes(m,n) e o valor pedido
        for(int i=0; i<m; i++){                     // 2 - loop em formato diferente para denotar o endereco encontrado e
            for(int j=0; j<n; j++){                // caracterizar uma matriz
                if(valor==*matriz){               // se o valor for igual ao conteudo no endereco do ponteiro, encontramos o valor
                    printf("\nvalor encontrado");
                    printf("\nendereco: %d %d", i,j);
                    return;
                }
                matriz++;                   // incrementamos o ponteiro para percorrer a matriz
            }     
        
        }
        printf("\nvalor nao foi encontrado");  
        return;                      // se a funcao chegar ate aqui, e porque o valor nao foi encontrado e a funcao nao
                                    // foi encerrada.
}
