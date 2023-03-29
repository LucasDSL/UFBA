#include<stdlib.h>
#include<stdio.h>
int main(){
    char x = 0xBA;
    char y = 0xE3;

    printf("%x", (x || y) ^ ~(x & y));
}