// feito por Igor Dantas
// https://github.com/igordantasgf

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(){
    int lot[6],bilhete[6], *bil,i,tam=0,k=0; // criação do vetor de numeros da loteria e do bilhete, um vetor e algumas variáveis.
    
    printf("Os 6 numeros da caixa:\n"); // leitura dos 6 numeros gerados pela loteria
    for(i=0; i<6; i++){
        scanf("%d", &lot[i]);
    }

    printf("Os 6 numeros do bilhete:\n"); // leitura dos numeros do bilhete
    for(i=0; i<6; i++){
        scanf("%d", &bilhete[i]);
    }
    
    for(i=0; i<6; i++){           // verifica quantos numeros sao iguais aos do bilhete e guarda esse valor em "tam"
        if(lot[i]==bilhete[i]){
            tam++;
        }
    }
    bil = malloc(tam * sizeof(int));  // alocando espaco para um vetor de tamanho igual a quantidade de números corretos

    for(i=0; i<6; i++){            // armazenando os numeros corretos no vetor alocado acima:
        if(lot[i]==bilhete[i]){   // se o loterico i for igual ao bilhete i, colocamos este valor no vetor alocado
            bil[k]=bilhete[i];   // armazenado no indice k que, inicialmente, e 0, e vai sendo incrementado ao longo do loop
            k++;
        }
    }
    printf("\nNumeros sorteados pela caixa:\n");
    for(i=0; i<6; i++){             // mostra os numeros escolhidos pela loterica
        printf("%d ", lot[i]);
    }
    printf("\nNumeros acertados:\n");
    for(i=0; i<k; i++){            // mostra os numeros acertados, armazenados no vetor alocado
        printf("%d ", bil[i]);
    }


    free(bil);                     // liberacao da memoria
}
