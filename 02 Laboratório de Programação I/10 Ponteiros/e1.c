#include<stdio.h>
#include<stdlib.h>
int main(){
    int inteiro, *inte;
    char chr, *ch;
    float flutuante, *flu;
    inteiro = 5;
    inte = &inteiro;
    printf("valor do inteiro: %d\n", inteiro);
    chr = 'a';
    ch = &chr;
    printf("Valor do char: %c\n", chr);
    flutuante = 0.5;
    flu = &flutuante;
    printf("Valor do float: %.2f\n", flutuante);
    *flu = 2.5;
    *ch = 'c';
    *inte = 5;
    printf("Inteiro após modificação com ponteiro: %d\n", inteiro);
    printf("Char após modificação com ponteiro: %c\n", chr);
    printf("Flutuante após modificação com ponteiro: %.2f\n", flutuante);
}