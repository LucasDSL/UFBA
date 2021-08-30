#include<stdio.h>
int main(){
    int ano; 
    printf("Digite um ano: ");
    scanf("%i", &ano);

    if((ano % 4 && (ano % 100)) || ano % 400){
        printf("O ano é bissexto.");
    }
    else{
        printf("O ano não é bissexto.");
    }

    return 0;
}