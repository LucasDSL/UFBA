// Feito por Lucas Lima 

#include<stdio.h>
#include<stdlib.h>
// Função com nome autoexplicativo
// Utiliza-se da lógica de ponteiros para criação de uma matriz com valores NULL
int ** cria_matriz(int linhas, int colunas){
    int **mat = (int **) calloc(linhas, sizeof(int*));
    int i = 0, j = 0;
    for(i; i < linhas; i++){
        *(mat + i) = (int *) calloc(colunas, sizeof(int));
    }
    for(i = 0; i < linhas; i++){
        for(j; j < colunas; j++){
            *(*(mat+i)+j) = NULL;
        }
    }
    return mat;
}

int ** encontra_3_maiores(int ** matriz, int linhas_matriz, int colunas_matriz){
    int ** maiores = cria_matriz(3, 3);
    // Variáveis para acessar diretamente os valores da matriz maiores
    int *ponteiro_para_maior_1 = *(maiores+0) + 0;
    int *ponteiro_para_maior_2 = *(maiores+0) + 1;
    int *ponteiro_para_maior_3 = *(maiores+0) + 2;
    // Variáveis para acessar diretamente linhas dos maiores
    int *linha_maior_1 = *(maiores+1) + 0;
    int *linha_maior_2 = *(maiores+1) + 1;
    int *linha_maior_3 = *(maiores+1) + 2;
    // Variáveis para acessar diretamente colunas dos maiores
    int *coluna_maior_1 = *(maiores+2) + 0;
    int *coluna_maior_2 = *(maiores+2) + 1;
    int *coluna_maior_3 = *(maiores+2) + 2;
    int i = 0, j;
    for(i; i < linhas_matriz; i++){
        for(j = 0; j < colunas_matriz; j++){
            int numero_atual = *((*(matriz+i))+j);
            // Calculando o menor atual
            // Verificando se ainda há algum local não preenchido na matriz maiores:
            if(*ponteiro_para_maior_1 == NULL){
                *ponteiro_para_maior_1 = numero_atual;
                *linha_maior_1 = i;
                *coluna_maior_1 = j;
                continue;
            }
            if(*ponteiro_para_maior_2 == NULL){
                *ponteiro_para_maior_2 = numero_atual;
                *linha_maior_2 = i;
                *coluna_maior_2 = j;
                continue;
            }
            if(*ponteiro_para_maior_3 == NULL){
                *ponteiro_para_maior_3 = numero_atual;
                *linha_maior_3 = i;
                *coluna_maior_3 = j;
                continue;
            }
            // Calculando o menor atual no caso da matriz de maiores estar completa
            int menor = *ponteiro_para_maior_1, posicao_menor = 0;
            if(*ponteiro_para_maior_2 < menor){
                posicao_menor = 1;
            }
            else if(*ponteiro_para_maior_3 < menor){
                posicao_menor = 2;
            }
            // Caso o número não seja maior que o menor dos números maiores, não precisamos 
            // verificar ele para outras ocasiões
            switch (posicao_menor)
            {
            case 0:
                if(numero_atual > *ponteiro_para_maior_1){
                    *ponteiro_para_maior_1 = numero_atual;
                    *linha_maior_1 = i;
                    *coluna_maior_1 = j;
                }
                break;
            case 1:
                if(numero_atual > *ponteiro_para_maior_2){
                    *ponteiro_para_maior_2 = numero_atual;
                    *linha_maior_2 = i;
                    *coluna_maior_2 = j;
                }
                break;
            case 2:
                if(numero_atual > *ponteiro_para_maior_3){
                    *ponteiro_para_maior_3 = numero_atual;
                    *linha_maior_3 = i;
                    *coluna_maior_3 = j;
                }
                break;
            default:
                break;
            }
        }
    }
    return maiores;
}

void mostra_maiores(int ** matriz_maiores){
    int i;
    for(i = 0; i < 3; i++){
        int numero_atual = *(*(matriz_maiores + 0) + i);
        if(numero_atual == NULL){
            break;
        }
        int linha_numero_atual = *(*(matriz_maiores + 1) + i);
        int coluna_numero_atual = *(*(matriz_maiores + 2) + i);
        printf("Numero %d na posicao [%d][%d]\n", numero_atual, linha_numero_atual, coluna_numero_atual);
    }
}   

int main(){ 
    // Lê o número de linhas e colunas da matriz e a cria de acordo
    int n, m;
    printf("Numero de linhas:");
    scanf("%d", &n);
    printf("Numero de colunas:");
    scanf("%d", &m);
    int **mat = cria_matriz(n, m);
    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf("Digite o numero [%d][%d]:" , i, j);
            scanf("%d", (*(mat+i))+j);
        }
    }
    int ** mat_maiores = encontra_3_maiores(mat, n, m);
    mostra_maiores(mat_maiores);
    free(mat);
    free(mat_maiores);
    return EXIT_SUCCESS;
}