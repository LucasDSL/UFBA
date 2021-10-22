#include<stdio.h>
#include<stdlib.h>

int main(){
    int *vet = (int *) calloc(1500, sizeof(int));
    int i = 0;
    for(i = 0; i < 1500; i++){
        if(*(vet + i) != 0){
            printf("Vetor iniciado sem numero 0\n");
            free(vet);
            return EXIT_FAILURE;
        }
    }
    for(i = 0; i < 1500; i++){
        *(vet + i) = i;
    }
    for(i = 0; i < 1500; i++){
        if(i < 10 || i > 1489){
            printf("%d ", *(vet + i));
        }
    }
}