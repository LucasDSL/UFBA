#include<stdio.h>
#include<stdlib.h>

void frac(float, int*, float*);

int main(){
    float f;
    printf("Digite um numero tipo float:");
    scanf("%f", &f);
    int parte_inteira = 0;
    float parte_frac = 0.0;
    frac(f, &parte_inteira, &parte_frac);
    printf("A parte inteira do numero eh: %d\n", parte_inteira);
    printf("A parte a do numero eh: %.2f\n", parte_frac);
}

void frac(float f, int *parte_inteira, float *parte_frac){
    *parte_inteira = (int) f;
    *parte_frac = f - *parte_inteira;
}