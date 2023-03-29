// feito por Igor Dantas
// https://github.com/igordantasgf

#include <stdlib.h>
#include <stdio.h>

int main(){
    int i=1;             // Criação das variáveis i e montante para auxiliar a recursividade da função. 
    int montante=1;      //i indicará o número a ser multiplicado no processo fatorial e montante é o valor acumulado
    fatorial(6,i,montante);
}

int fatorial(int a, int i, int montante){
    int j;

    if(i==a){                  // se i que, inicialmente, vale 1, chega a valer a, quer dizer que chegamos no valor desejado da fatorial 

        for(j=0; j<montante; j++){      // função printf que printa montante * '|' linhas, deixando a representação mais interessante
            printf("|");
        }
        printf(" : %d \n", montante);   // printf do valor acumulado, indicando o fatorial de a
        i=1;
        montante=1;
        return EXIT_SUCCESS;            // encerra a função

    }else{                     // significa que 'i' ainda não chegou a valer 'a'

        for(j=0; j<montante; j++){      //
            printf("|");
        }
        printf(" : %d \n", montante);

        i++;                            // incrementa i para multiplicar o montate por i
        montante=montante*i;

        fatorial(a,i,montante);         // chamada recursiva, mas agora com i=i+1, repetindo-se até que i=a (condição 1);
    }
}

