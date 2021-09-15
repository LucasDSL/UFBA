#include<stdio.h>
#include<stdlib.h>
int mdc(int num1, int num2){
    if (num1 % num2 == 0){
        return num2;
    }
    else if(num1 > num2){
        return mdc(num2, num1%num2);
    }
    else{
        return mdc(num1, num2%num1);
    }
}

int main(){
    printf("O mdc de 23732 e 180 eh: %d\n", mdc(180, 23732));
}