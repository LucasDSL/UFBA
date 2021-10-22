#include<stdlib.h>
#include<stdio.h>

int main(){
    int *loteria = (int *) malloc(sizeof(int) * 6);
    int *jogados = (int *) malloc(sizeof(int) * 6);
    int i;
    for(i = 0; i < 6; i++){
        printf("numero da loteria:");
        scanf("%d", (loteria + i));
    }
    for(i = 0; i < 6; i++){
        printf("numero jogado:");
        scanf("%d", (jogados + i));
    }
    int j = 0, corretos = 0;
    int *acertos = (int *) malloc(sizeof(int));
    for(i = 0; i < 6; i++){
        for(j = 0; j < 6; j++){
            if(*(loteria + i) == *(jogados + j)){
                acertos = (int*) realloc(acertos, sizeof(int) * (corretos+1));
                *(acertos + corretos) = *(loteria + i);
                corretos ++;
            }
        }
    }
    printf("Numero da loteria:\n");
    for(i = 0; i < 6; i++){
        printf("%d ", *(loteria + i));
    }
    printf("\n");
    printf("Acertos:\n");
    for(i = 0; i < corretos; i++){
        printf("%d ", *(acertos + i));
    }
    free(loteria);
    free(acertos);
    free(jogados);
    return EXIT_SUCCESS;
}