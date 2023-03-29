#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//[adaptado de Paes (2016)]. Escreva uma função recursiva que receba uma string e o tamanho dessa string como parâmetro e retorne a mesma string com os caracteres na ordem contrária.
void inverte(char *s, int pos, int len){
    if(pos >= len - 1){
        return *(s+pos);
    }
    else{
        char aux = *(s+pos);
        *(s+pos) = *(s+len-1);
        *(s+len-1) = aux;
        inverte(s, pos+1, len-1);
    }
}

int main(){
    char lucas[] = "lucas";
    inverte(lucas, 0, 5);
    printf("A string lucas invertida eh %s\n", lucas);
}