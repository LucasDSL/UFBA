#include<stdio.h>
#include<stdlib.h>

int main(){
    int size;
    printf("Digite a quantidade de memoria(multiplo de 4):");
    scanf("%d", &size);
    if(size % 4 != 0){
        printf("Erro: numero nao multiplo de 4\n");
        return EXIT_FAILURE;
    }
    size = size / 4;
    int *vet = (int *) calloc(size, sizeof(int));
    int i;
    printf("Digite o numero para selecionar a opcao:\n 1 - Inserir um valor em determinada posicao\n2 - consultar valor contigo em determinada posicao\n");
    int option;
    scanf("%d", &option);
    int valor, posicao;
    if(option == 1){
        printf("Digite o valor:");
        scanf("%d", valor);
        printf("Ditite em qual posicao deseja inseri-lo:");
        scanf("%d", posicao);
        if(posicao < 0 || posicao >= size){
            printf("Erro: posicao invalida\n");
            free(vet);
            return EXIT_FAILURE;
        }
        *(vet + posicao) = valor;
        printf("Valor %d na posicao %d inserido com sucesso\n", *(vet + posicao), posicao);
        free(vet);
        return EXIT_SUCCESS;
    }
    else if(option == 2){
        printf("Digite a posicao de consulta:");
        scanf("%d", posicao);
        if(posicao < 0 || posicao >= size){
            printf("Erro: posicao invalida\n");
            free(vet);
            return EXIT_FAILURE;
        }
        printf("O valor na posicao %d e %d\n", posicao, *(vet + posicao));
        free(vet);
        return EXIT_SUCCESS;
    }
    free(vet);
    return EXIT_FAILURE;
}