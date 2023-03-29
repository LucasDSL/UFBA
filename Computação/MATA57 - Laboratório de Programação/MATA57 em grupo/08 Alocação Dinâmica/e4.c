//feito por Adrielle Andrade Carvalho e Lucas dos Santos Lima
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char * alocar(int size){ // função para alocar dinamicamente a palavra
	char *written = (char *) malloc(sizeof(char) * size);
	return written;
}

void imprimir(char * written, int size){
	int i;
    printf("Digite uma string com o tamanho anterior:\n");
    for(i = 0; i < size; i++){
        scanf(" %c", written + i); // recebe a string
    }
    for(i = 0; i < size; i++){ // caso não seja uma vogal, o char é impresso
        if(*(written + i) == 'a' || *(written + i) == 'A'
        || *(written + i) == 'e' || *(written + i) == 'E' 
        || *(written + i) == 'i' || *(written + i) == 'I'
        || *(written + i) == 'o' || *(written + i) == 'O'
        || *(written + i) == 'u' || *(written + i) == 'U'){
            continue;
        }
        printf("%c", *(written + i));
    }
	return;	
}

int main(){
    int size;
    printf("Tamanho da string: ");
    scanf("%d", &size);
    char *written = alocar(size);
    imprimir(written, size);
    free(written);
    return EXIT_SUCCESS;
}
