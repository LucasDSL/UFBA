#include<stdio.h>
#include<stdlib.h>

int calcula_raizes(float, float, float, float *, float *);

int main(){
    float x1, x2;
    printf("Considere a equacao: 2x^2 + 4x -8\n");
    printf("Ela possui %d raizes reais\n", calcula_raizes(2, 4, -8, &x1, &x2));
}

int calcula_raizes(float A, float B, float C, float *x1, float *x2){
    float delta = B * B - 4 * A * C;
    if(delta > 0){
        *x1 = (-B + pow(delta, 0.5))/2*A;
        *x2 = (-B - pow(delta, 0.5))/2*A;
        return 2;
    }
    else if(delta == 0){
        *x1 = (-B + pow(delta, 0.5))/2*A;
        return 1;
    }
    return 0;
}