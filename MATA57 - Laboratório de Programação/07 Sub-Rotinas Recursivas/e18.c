#include<stdio.h>
#include<stdlib.h>
// Not working for floats smaller than 1.
float multiplica(float num1, float num2){
    if(num2 == 1.0){
        return num1;
    }
    else if(num2 > 1.0 && num2 < 2.0){
        return num1 + (multiplica(num1, (num2-1.0)*10.0))/10.0;  
    }
    else{
        return num1 + multiplica(num1, num2-1.0);
    }
}

int main(){
    printf("10 multiplicado por 3.55 eh: %.2f\n", multiplica(10.0, 3.55));
}