#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//[adaptado de Paes (2016)]. Escreva uma função recursiva que receba uma string e o tamanho dessa string como parâmetro e retorne a mesma string com os caracteres na ordem contrária.
void inverteString(char *s, int len){
    char aux = *(s+len-1);
    if(*s == *(s+((int)(len/2)))){
        *(s+len-1) = *s;
        *s = aux;
    }
    else{
        *(s+len-1) = *s;
        *s = aux;
        inverteString(s+1, len);
    }
}

int main(){
    char lucass[] = {'l', 'u', 'c', 'a', 's', 's'};
    inverteString(&lucass, 6);
    printf("A string lucas invertida eh %s\n", lucass);
}