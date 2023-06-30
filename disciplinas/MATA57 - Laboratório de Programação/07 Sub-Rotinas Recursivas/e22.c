#include<stdio.h>
#include<stdlib.h>
long long int fatorial(int num){
    if(num <= 1){
        printf("    x 1\n   -------\n   ");
        return 1;
    }
    else{
        printf("      %d\n", num);
        return num * fatorial(num-1);
    }
}

int 
main(){
    printf("  %lld\n", fatorial(13));
}