#include<stdio.h>
#include<stdlib.h>
int main(){
    unsigned x = 0x01020304;
    x = x>>16;
    printf("Actual value of x: 0x%x\n", x);
    printf("Value of x & 0xFF: %x", (x & 0xFF));
}