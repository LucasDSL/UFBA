// feito por Igor Dantas
// https://github.com/igordantasgf

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main(){
    
    FILE *p;
    printf("\nDigite o nome do arquivo de entrada:");
    printf("\nobs: Ha um arquivo padrao para os inputs(aluno_notas.txt) que pode ser usado\n");
    char file_in[20];
    scanf("%s", &file_in);

    printf("\nDigite o nome do arquivo de saida:\n");
    char file_out[20];
    scanf("%s", &file_out);

    operation(file_in, file_out);
}

void operation(char file_in[20], char file_out[20]){

    FILE *p;            
    char nome[40];        /* || vetor para armazenar somente o nome do aluno*/
    char nota1[1];        /* || vetor para armazenar a nota 1               */
    char nota2[1];        /* || vetor para armazenar a nota 2               */
    char nota3[1];        /* || vetor para armazenar a nota 3               */
    char total[44];       /* || vetor para armazenar todo o conteudo da linha dada no input*/
    int i=0;
    
    p = fopen(file_in, "r");         //| Leitura do arquivo e armazenamento da linha completa
    fgets(total, sizeof(total), p); // | no vetor 'total';
    
    while(i<40){                     //| Armazenamento apenas do nome contido em "total" em nome,
        nome[i]=total[i];           // | limitado em 40 caracteres;
        i++;
    }
    
    char temp_c;     //| char variavel para facilitar no algoritmo a seguir:  
    
    if (total[40]>total[42]){        //| Algoritmo usado para comparar as notas, 
        temp_c = total[40];          //| mas substituindo A,B e C pelos indices em "total[]":
        total[40] = total[42];       //|    if (a > c)
        total[42] = temp_c;          //|        troca(a,c);
    }                                //|    if (a > b)
    if (total[40]>total[41]){        //|        troca(a,b);
        temp_c = total[40];          //|    if (b > c)
        total[40] = total[41];       //|        troca(b,c); 
        total[41] = temp_c;

    }
    if (total[41]>total[42]){
        temp_c = total[41];
        total[41] = total[42];
        total[42] = temp_c;
    }
    fclose(p);


    p = fopen(file_out, "w");  //| Abertura/Criacao do arquivo para armazenar o nome e as notas em ordem crescente
    fputs(nome, p);            //| input do nome, com 40 caracteres 
    fputc(total[40], p);       //| input da nota mais baixa         \|
    fputc(total[41], p);       //| input da nota mediana            || Notas alteradas no algortimo anterior
    fputc(total[42], p);       //| input da maior nota              /|
    fclose(p);                 //|                                  


}


