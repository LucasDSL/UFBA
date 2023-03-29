#include<stdlib.h>
#include<stdio.h>
int 
main(){
    long int fatorial = 1;
    int num;
    scanf("%d", &num);
    if(num <= 1){
        printf("%d\n", 1);
        return EXIT_SUCCESS;
    }
    while(num > 1){
        fatorial *= num;
        num -= 1;
    }
    printf("%ld\n", fatorial);
    return EXIT_SUCCESS;
}