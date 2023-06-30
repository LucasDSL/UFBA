#include<stdio.h>
#include<stdlib.h>
//Exercício 13. Crie uma função recursiva que receba dois números inteiros n e m como parâmetro e retorne o soma dos números do intervalo [n, m].

int somaRecursivaNeM(int n, int m){
    if(n == m){
        return m;
    }
    else if (n > m){
        return n + somaRecursivaNeM(n - 1, m);
    }
    else{
        return m + somaRecursivaNeM(n, m-1);
    }
}

int main(){
    int numero1, numero2;
    printf("Digite dois numeros: ");
    scanf("%d %d", &numero1, &numero2);
    printf("A soma de %d ate %d eh: %d\n", numero1, numero2, somaRecursivaNeM(numero1, numero2));
}