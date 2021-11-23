#include<stdlib.h>
#include<stdio.h>

typedef struct 
{
    int real;
    int imag;
} complexo;

complexo soma(complexo num1, complexo num2){
    complexo result;
    result.real = num1.real + num2.real; 
    result.imag = num1.imag + num2.imag;
    return result;
}

int main(){
    complexo a, b;
    a.real = 3;
    a.imag = 2;

    b.real = 6;
    b.imag = 2;

    complexo c = soma(a, b);
    printf("Numero: %d + %di\n", c.real, c.imag);
    return 0;
}