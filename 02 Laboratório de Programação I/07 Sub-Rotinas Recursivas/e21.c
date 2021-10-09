#include<stdio.h>
#include<stdlib.h>
int 
blocos_totais(int base){
    if(base == 1){
        return 1;
    }
    else{
        return base + blocos_totais(base-1);
    }
}

