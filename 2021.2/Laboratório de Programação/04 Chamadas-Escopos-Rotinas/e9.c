#include<stdio.h>
#include<stdlib.h>
//Exercício 09 (The Huxley, 2021). Faça um programa em C ou C++ que leia três valores e apresente o maior dos três valores lidos seguido da mensagem "eh o maior". Utilize a fórmula:
//maior(a, b) = ((a + b + abs(a - b)) / 2
//Desafio: encontrar o maior sem usar condicionais ("if").
int main(){
    float nums[3];
    int i;
    for(i = 0; i < 3; i++){
        printf("Digite um número: ");
        scanf("%f", &nums[i]);
    }

    float maior0_1 = (nums[0] + nums[1] + abs(nums[0] - nums[1])) / 2;
    float maior_geral = (maior0_1 + nums[2] + abs(maior0_1 - nums[2])) / 2;

    printf("%f eh o maior.\n", maior_geral);
}