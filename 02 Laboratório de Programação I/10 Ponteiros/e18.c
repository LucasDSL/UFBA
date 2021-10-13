#include<stdio.h>
#include<stdlib.h>
# define pi 3.14159;
void calc_esfera(float, float *, float *);

int main(){
    printf("Digite o raio de uma esfera: ");
    float r;
    scanf("%f", &r);
    float area, volume;
    calc_esfera(r, &area, &volume);
    printf("Essa esfera tem area: %.2f\n", area);
    printf("Essa esfera tem volume: %.2f\n", volume);
}

void calc_esfera(float R, float *area, float *volume){
    *area = 4.0 * 3.14159 * pow(R, 2);
    *volume = R * R * R * 3.14159 * 4 / 3;
}