// feito por Igor Dantas
// https://github.com/igordantasgf

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int imprime(int *p, int n){ //funcao para imprimir o array, recebendo o ponteiro indicando
                            // o endereco inicial de um array e a quantidade n de elemtos nesse array 
    int i;           
    for(i=0; i<n; i++){     // loop para imprimir os elementos
        printf("elemento %d : %d\n", i+1,*p); // imprime o conteudo do endereco p, denotado por *p
        p++;   // incrementa o valor de p em x bytes, dependendo do seu tipo, sendo, neste caso, int(4). 
    }
    return EXIT_SUCCESS;
}


int main(){
    int i,n;
    scanf("%d", &n); // input n do tamanho do array
    int a[n];        // criacao do array com indice n
    int *p = a;    // criacao do ponteiro p, indicando o endereco inicial de a
    for(i=0; i<n; i++){   // loop para armazenar os valores dentro do array a
        scanf("%d", &*p); // armazena o valor pedido no endereco p
        p++;   // incrementa o endereco p;
    }
    p=a; // atribui novamente a "p" o endereco de "a" para ter o inicio do array na funcao
    imprime(p,n);  //chamada da funcao 
    
}
