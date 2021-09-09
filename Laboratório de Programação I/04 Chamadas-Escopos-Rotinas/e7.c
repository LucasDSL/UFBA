#include<stdlib.h>
#include<stdio.h>
//Exercício 07 (The Huxley, 2021). Dados 04 números inteiros, implemente um programa C que: calcule o produto entre eles caso os 04 números digitados sejam primos; se algum deles não for primo, imprima que a operação não pode ser realizada. Modularize adequadamente o seu programa com sub-rotinas.
int eh_primo(int numero){
    int i;
    int div = 0;
    if (numero == 1){
        return 0;
    }
    else if(numero == 2){
        return 1;
    }
    int fim = numero / 2;
    for(i = 2; i <= fim; i++){
        if (numero % i == 0){
            div ++;
        }
    }
    if(div  == 0){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int numeros[4], i, mult = 1, primos = 0;
    for(i = 0; i < 4; i++){
        printf("Digite um número: ");
        scanf("%d", &numeros[i]);
        int atual_num = numeros[i];
        if(eh_primo(atual_num) == 1){
            mult *= atual_num;
            primos += 1;
        }
    }
    if (primos == 4){
        printf("Multiplicacao dos primos: %d", mult);
    }
    else{
        printf("A operacao nao pode ser realizada.");
    }
}