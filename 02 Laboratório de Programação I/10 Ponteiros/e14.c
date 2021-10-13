#include<stdlib.h>
#include<stdio.h>

void preenche_vetor(int *, int , int);

int main(){
    int size_vetor, numero;
    printf("Digite o tamanho do vetor:");
    scanf("%d", &size_vetor);
    printf("Digite o numero para preenche-lo:");
    scanf("%d", &numero);
    int vetor[size_vetor];
    preenche_vetor(&vetor, numero, size_vetor);
    int i = 0;
    for(i; i < size_vetor; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
    return EXIT_SUCCESS;
}       

void preenche_vetor(int *vet, int n, int size){
    int i = 0;
    for(i; i < size; i++){
        *(vet + i) = n;
    }
}