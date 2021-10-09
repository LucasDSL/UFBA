#include<stdio.h>
#include<stdlib.h>
int main(){
    int n1, n2;
    printf("Digite dois numeros: ");
    scanf("%d %d", &n1, &n2);
    printf("O endereco %x contem o numero %d\n", &n1, n1);
    printf("O endereco %x contem o numero %d\n", &n2, n2);
    if(&n1 > &n2){
        printf("Conteudo no endereco maior: %d\n", n1);
        return EXIT_SUCCESS;
    }
    printf("Conteudo no endereco maior: %d\n", n2);
    return EXIT_SUCCESS;
}