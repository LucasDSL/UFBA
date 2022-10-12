#include<stdio.h>
#include<stdlib.h>
//Exercício 04 (Pereira, 2010). Codifique uma função em C que calcule a média ponderada de duas notas. Essa função deve receber quatro parâmetros de entrada, sendo as notas e seus respectivos pesos. Os pesos devem ser valores entre 0 e 1, com soma igual a 1.
float media_das_notas(float nota1, float nota2, float peso1, float peso2){
    float media = (nota1 * peso1) + (nota2 * peso2);
    return media;
}
int main(){
    float nota1, nota2, peso1, peso2;

    printf("Digite a nota 1:");
    scanf("%f", &nota1);
    printf("Digite a nota 2:");
    scanf("%f", &nota2);
    printf("Digite o peso 1:");
    scanf("%f", &peso1);
    printf("Digite o peso 2:");
    scanf("%f", &peso2);
    printf("A media eh: %2.f", media_das_notas(nota1, nota2, peso1, peso2));
    return EXIT_SUCCESS;
}