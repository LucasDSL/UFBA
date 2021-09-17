#include<stdlib.h>
#include<stdio.h>
//Exercício 02 (Pereira, 2010). Codifique um procedimento em C que receba como parâmetro um número inteiro como entrada e exiba o dia da semana correspondente por extenso, isto é: 1 = domingo, 2 = segunda, 3 = terça etc.
void qual_o_dia(int dia){
    
    switch (dia)
    {
    case 1:
        printf("1 = Domingo\n");
        break;
    case 2:
        printf("2 = Segunda\n");
        break;
    case 3:
        printf("3 = Terça\n");
        break;
    case 4: 
        printf("4 = Quarta\n");
        break;
    case 5:
        printf("5 = Quinta\n");
        break;
    case 6:
        printf("6 = Sexta\n");
        break;
    case 7:
        printf("7 = Sabado\n");
        break;
    default:
        printf("Nao");
        break;
    }
}

int main(){
    int num_dia;
    printf("Digite um numero entre 1 e 7 (inclusos) para receber o dia da semana correspondente: ");
    scanf("%d", &num_dia);
    qual_o_dia(num_dia);
    return EXIT_SUCCESS;
}