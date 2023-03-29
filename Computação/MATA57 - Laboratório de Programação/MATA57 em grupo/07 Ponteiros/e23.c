// Feito por Lucas Lima
#include<stdlib.h>
#include<stdio.h>
// busca o maior número na lista de acordo com o tamanho da lista
int retorna_maior(int *vet, int n){
    int i = 1, maior = *vet;
    for(i; i < n; i++){
        if(maior < *(vet + i)){
            maior = *(vet + i);
        }
    }
    return maior;
}
// Mostra a quantidade desejada de elementos por linha, de acordo com a
// quantidade desejada de elementos por linha e o tamanho da lista
void lista_por_linha(int *vet, int n_por_linha, int tam_lista){
    int i = 0, cont = 0;
    for(i; i < tam_lista; i++){
        if(cont == n_por_linha){
            printf("\n");
            cont = 0;
        }
        printf("%d ", *(vet+i));
        cont++;
    }
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
    lista_por_linha(ptr, k, tam);
    printf("\n");
    printf("O maior elemento eh: %d\n", retorna_maior(lista, tam));
    return EXIT_SUCCESS;
}