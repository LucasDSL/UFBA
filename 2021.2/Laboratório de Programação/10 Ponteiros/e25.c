#include<stdio.h>
#include<stdlib.h>

void ler_notas_calc_media(){
    float nota1, nota2, med_simples, med_pond;
    printf("Digite a primeira nota:");
    scanf("%f", &nota1);
    printf("Digite a segunda nota:");
    scanf("%f", &nota2);
    if(nota1 > 10 || nota1 < 0 || nota2 > 10 || nota2 < 0){
        printf("As notas devem estar entre 0 e 10!");
        return;
    }
    med_pond = (nota1 + nota2*2)/3;
    med_simples = (nota1 + nota2)/2;
    printf("A primeira nota foi: %.2f\n", nota1);
    printf("A segunda nota foi: %.2f\n", nota2);
    printf("A media ponderada foi: %.2f\n", med_pond);
    printf("A media simples foi: %.2f\n", med_simples);
}

int main(){
    ler_notas_calc_media();
}