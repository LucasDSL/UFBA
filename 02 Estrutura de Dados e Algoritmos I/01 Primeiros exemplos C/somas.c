#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
long int soma_seq(int d){
    unsigned long int resultado = 0; 
    int i;
    for(i = 1; i <= d; i++){
        resultado += i;
    }
    return resultado;
}

double soma(long int d){
    return ((double) d * (double) (d + 1) / 2);
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    unsigned long int d; 
    printf("Digite um número: ");
    scanf("%ld", &d);

    // O algoritmo sequencial é mais trabalhoso visto que tem ordem D;
    // O algoritmo que utiliza a forma é constante. 
    printf("Resultado com soma sequencial: %ld\n", soma_seq(d));
    printf("Resultado da soma: %f", soma(d));
}