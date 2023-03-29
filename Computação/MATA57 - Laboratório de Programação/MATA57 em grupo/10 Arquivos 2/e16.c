// feito por Igor Dantas
// https://github.com/igordantasgf

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>


int main(){


    FILE *p;
    
    p = fopen("binario_10", "w");

    for(int var=0; var<10; var++){//| Loop com 10 estágios, recebendo 10 inteiros

        int i=0;
        char vetor[32];                 //| Criação de um vetor char com 32 espaços, equivalente a quantidade de
        int bin;                        //|   bits de um numero inteiro;
        for(int l=31; l>=0; l--){       //| Preenchimento do vetor com zero's, para evitar espaços vazios no vetor
            vetor[l]='0';               //|   e melhorar a impressão;
        }
    
        scanf("%d", &bin);              //| Inteiro a ser recebido e analisado

        while(1){
            //| Iremos divir o valor "bin" por 2 sequencialmente, até que seu valor chegue entre 3 e 0,
            //|     indicando que será a última divisão a ser feita;
            //| A lógica utilizada é ir armazenando os restos das divisões e o resultado da ultima divisão no vetor,
            //|     resultado no valor binário total ao percorrer todos estes valores;

            if(bin==3 || bin==2 || bin==1 || bin==0){ 
                
                if(bin==3){         //| Se o valor chegar a 3, sua divisao por 2 é 1 e o resto é 1, logo,
                    vetor[i]='1';   //|     armazenamos o valor 1 e 1 no vetor;
                    vetor[i+1]='1'; 
                    break;          //| É o final da divisão ao chegar neste valor, logo, damos break;
                }
                if(bin==2){         //| Se o valor chegar a 2, sua divisao por 2 é 1 e o resto é 0, logo,
                    vetor[i]='0';   //|     armazenamos o valor 0 e 1 no vetor;
                    vetor[i+1]='1';
                    break;          //| É o final da divisão ao chegar neste valor, logo, damos break;
                }
                if(bin==1){         //| Bin apenas chegará a 1 se o valor inicial de bin for 1 (se o
                    vetor[i]='1';   //|     input for 1), logo, o valor a ser armazenado será "0x1";

                    break;          //| É o final da divisão ao chegar neste valor, logo, damos break;
                }
                if(bin==0){         //| Bin apenas chegará a 0 somente se o valor inicial de bin for 0 (se o
                    vetor[i]='0';   //|     input for 0), logo, o valor a ser armazenado será "0x0";

                    break;          //| É o final da divisão ao chegar neste valor, logo, damos break;
                }
            }
            else{
                if(bin%2==1){       
                    vetor[i] = '1'; //| Se o resto do valor for 1, armazenar 1 no vetor;
                }else{
                    vetor[i] = '0'; //| Se o resto do valor for 0, armazenar 0 no vetor;
                }
                bin = bin/2;        //| Dividir o valor por 2 e repetir o ciclo do iníco do while(1);
                i++;                //| Incrementar i, pois indica o indice do vetor que armazena os
                                    //|     valores em binario;
            }
        }
        
        for(int k=31; k>=0; k--){   //| Loop que inicia no último bit e vai até o primeiro, de acordo com a
            printf("%c", vetor[k]); //|     ordem da lógica utilizada;
            fputc(vetor[k], p);     //| Armazena cada bit na posição k em uma linha do arquivo;
        }
        printf("\n");               
        fputc('\n', p);             //| Armazenamos um parágrafo para poder inserir o próximo valor
                                    //|     na próxima linha;
    }
    fclose(p);                      //| Fechamos o arquivo ao finalizar o armazenamento de 10 números;
}
