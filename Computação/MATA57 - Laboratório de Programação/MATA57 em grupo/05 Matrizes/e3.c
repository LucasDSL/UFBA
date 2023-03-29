#include <stdio.h>

int main()
{
    int A[100][100];
    int B[100][100];
    int N, M;
    int N2, M2;

	//L� as dimens�es de cada matriz
    printf("Dimensoes Matriz A, separadas por espaco: \n");
    scanf("%d %d", &N, &M);
    printf("Dimensoes Matriz B, separadas por espaco: \n");
    scanf("%d %d", &N2, &M2);
    
    //Caso o n�mero de colunas de A seja diferente do n�mero de linhas de B, informa que � imposs�vel realizar o produto das matrizes.
	if (M != N2) printf("Impossivel realizar o c�lculo do produto \n");
    
	else {
    //Le A.
	for (int i = 0; i < N; i++) {
    	for (int j = 0; j < M; j++) {
        printf("A%dx%d: ", i+ 1, j + 1);
    		scanf("%d", &A[i][j]);
		}
	}
	
	//Le B.
	for (int i = 0; i < N2; i++) {
    	for (int j = 0; j < M2; j++) {
        printf("B%dx%d: ", i+ 1, j + 1);
    		scanf("%d", &B[i][j]);
		}
	}
	//Inicializando os elementos da matriz multiplica�o C.
	int C[100][100];
	for (int i = 0; i < N; i++) {
    	for (int j = 0; j < M2; j++) {
    		C[i][j] = 0;
		}
	}
	
    // Multiplicando os elementos de A e B e armazenando em C.
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < M2; ++j) {
            for(int k = 0; k < M; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
		}
	}
	for (int i = 0; i < N; i++) {
    	for (int j = 0; j < M2; j++) {
    		printf("%d ", C[i][j]);
    		if (j == M2 - 1) printf("\n");
		}
	}
}
}