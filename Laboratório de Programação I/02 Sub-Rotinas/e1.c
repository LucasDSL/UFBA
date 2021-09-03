 #include<stdio.h>
#include<stdlib.h>
//Exercício 01 (Pereira, 2010). Codifique um procedimento em C que receba como parâmetro um número natural n como entrada e exiba na tela uma contagem regressiva de n até 0.
void mostra_n_ate_0(int n){
    for(n = n; n > -1; n--){
        if(n == 0){
            printf("%d\n", n);
            break;
        }
        printf("%d ", n);
    }
}
int main(){
    int i; 
    printf("Digite um número natural: ");
    scanf("%d", &i);
    mostra_n_ate_0(i);
    return EXIT_SUCCESS;
}    