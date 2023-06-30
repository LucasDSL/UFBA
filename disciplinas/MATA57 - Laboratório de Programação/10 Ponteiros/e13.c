#include<stdlib.h>
#include<stdio.h>

void ocorre(char *, char *);

int main(){
    char string1[30];
    char string2[29];

    printf("Primeira string: ");
    scanf("%s", &string1);
    printf("Segunda string: ");
    scanf("%s", &string2);
    ocorre(&string1, &string2);
}

void ocorre(char *s1, char *s2){
    int i, j;
    int ocorre = 0;
    for(i = 0; i < 30; i++){
        if(*(s1 + i) == NULL){
            break;
        }
        if(*(s1 + i) == *s2){
            for(j = 0; j < 29; j++){
                if(*(s2+j) == NULL){
                    break;
                }
                if(*(s1+i+j) == *(s2 + j)){
                    ocorre = 1;
                    continue;
                }
                else{
                    ocorre = 0;
                    break;
                }
            }
            if(ocorre){
                printf("A segunda string aparece na primeira na posicao %d\n", i);
                return;
            }
        }
    }
    printf("A segunda string nao ocorre dentro da primeira\n");
}