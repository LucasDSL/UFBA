#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int size;
    printf("Tamanho da string: ");
    scanf("%d", &size);
    char *written = (char *) malloc(sizeof(char) * size);
    int i;
    printf("Digite uma string com o tamanho anterior:\n");
    for(i = 0; i < size; i++){
        scanf(" %c", written + i);
    }
    for(i = 0; i < size; i++){
        if(*(written + i) == 'a' || *(written + i) == 'A'
        || *(written + i) == 'e' || *(written + i) == 'E' 
        || *(written + i) == 'i' || *(written + i) == 'I'
        || *(written + i) == 'o' || *(written + i) == 'O'
        || *(written + i) == 'u' || *(written + i) == 'U'){
            continue;
        }
        printf("%c", *(written + i));
    }
    free(written);
    return EXIT_SUCCESS;
}