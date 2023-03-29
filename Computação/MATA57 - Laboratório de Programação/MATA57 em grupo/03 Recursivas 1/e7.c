#include<stdio.h>
#include<stdlib.h>
// Lucas Lima
// Not working for floats smaller than 1.
float multiplica(float num1, float num2){
    if(num2 == 1.0){
        // Caso base retorna o número em si
        // pois ele estará sendo multiplicado por 1
        return num1;
    }
    else if(num2 > 1.0 && num2 < 2.0){
        // Caso para o qual temos números com racionais
        // o transformamos em inteiros para poder continuar com a resolução
        // dentro dos outros ifs
        return num1 + (multiplica(num1, (num2-1.0)*10.0))/10.0;  
    }
    else{
        // Retorna o número em si e o outro parâmetro 
        // o segundo é ele mesmo -1, pois será a feita 
        // a soma do número 1 com ele mesmo, n2 vezes
        // Basicamente uma multiplicação através de somas
        return num1 + multiplica(num1, num2-1.0);
    }
}

int main(){
    printf("10 multiplicado por 3.55 eh: %.2f\n", multiplica(10.0, 3.55));
}
