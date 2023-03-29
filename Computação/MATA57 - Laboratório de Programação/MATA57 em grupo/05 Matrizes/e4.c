//Chama-se de quadrado mágico um arranjo, na forma de um quadrado, de N x N números inteiros tal que todas as linhas, colunas e diagonais têm a mesma soma. Escreva um programa que, dado um quadrado, determine se ele é magico ou não e qual a soma dele (caso seja mágico).
#include<stdio.h>
#include<stdlib.h>
// Lucas Lima.
int main(){
    int n;
    printf("Digite a dimensao do quadrado: ");
    scanf("%d", &n);

    int i, j, matriz[n][n], somas[2*n + 2], soma_atual;
    // Lê a matriz e verifica as somas das linhas
    for(i = 0; i < n; i++){
        soma_atual = 0;
        for(j = 0; j < n; j++){
            scanf("%d", &matriz[i][j]);
            soma_atual += matriz[i][j];
        }
        somas[i] = soma_atual;
    }
    // Verifica as somas das colunas.
    for(j = 0; j < n; j++){
        soma_atual = 0;
        for(i = 0; i < n; i++){
            soma_atual += matriz[i][j];
        }
        // Evita que as soma das colunas substituam a das linhas
        somas[j+n] = soma_atual;
    }
    // Verifica as diagonais
    int soma_dp = 0, soma_ds = 0, count_ds = n-1; // Diagonal principal e secundária e contador para conseguir a D.S.
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(i == j){
                soma_dp += matriz[i][j];
            }
        }
        soma_ds += matriz[i][count_ds];
        count_ds--;
    }
    // Diagonais principais e secundárias para as últimas posições da lista de somas
    somas[2*n] = soma_dp; 
    somas[2*n + 1] = soma_ds;
    int primeiro_numero_soma = somas[0];
    for(i = 1; i < 2*n + 2; i++){
        if(somas[i] != primeiro_numero_soma){
            printf("Nao eh magico!");
            return EXIT_FAILURE;
        }
        primeiro_numero_soma = somas[i];
    } 
    printf("Eh magico e a soma eh: %d\n", primeiro_numero_soma);
    return EXIT_SUCCESS;
}