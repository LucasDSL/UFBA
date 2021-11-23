#include<stdlib.h>
#include<stdio.h>

int retorna_maior(int *vet, int n){
    int i = 1, maior = *vet;
    for(i; i < n; i++){
        if(maior < *(vet + i)){
            maior = *(vet + i);
        }
    }
    return maior;
}

int main(){
    int cont = 0, i = 0, tam;
    printf("Digite o tamanho do array: ");
    scanf("%d", &tam);
    int lista[tam];
    for(i; i < tam; i++){
        printf("Digite o valor %d:", i);
        scanf("%d", &lista[i]);
    }
    printf("Quantos elementos deseja ver por linha?");
    int k;
    scanf("%d", &k);
    int *ptr = lista;
    i = 0;
    for(i; i < tam; i++){
        if(cont == k){
            printf("\n");
            cont = 0;
        }
        printf("%d ", *(ptr+i));
        cont++;
    }
    printf("\n");
    printf("O maior elemento eh: %d\n", retorna_maior(lista, tam));
    return EXIT_SUCCESS;
}