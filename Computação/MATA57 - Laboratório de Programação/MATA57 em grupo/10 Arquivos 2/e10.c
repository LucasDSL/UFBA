// feito por Igor Dantas
// https://github.com/igordantasgf

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    FILE *p;

    printf("Digite o nome do arquivo de entrada: \n");
    printf("obs: esta disponivel um arquivo padrao para o codigo-> populacoes.txt \n");
    char file_in[20];
    scanf("%s", &file_in);

    printf("\nDigite o nome do arquivo de saída:\n");
    char file_out[20];
    scanf("%s", &file_out);

    read_file(file_in, file_out);
}



void read_file(char file_in[20], char file_out[20]){ // funcao que recebe a lista com as cidades e populacoes e retorna a maios populosa

    char fim[40];
    char aux_pop[15];
    char pop[15]="000000000000000"; // string inicial para referenciar os maiores numeros
    char ult_info[55];
    char info[55];
    int var;


    FILE *p;
    p = fopen(file_in, "r"); 
    
    while(fgets(info, sizeof(info), p) != NULL) {  // percorre cada linha do arquivo com o tamanho de info(55),
        for(int j=40; j<55; j++){                //|| equivalendo ao tamanho total do nome da cidade e sua populacao no arquivo de texto 
            if(info[j]==EOF){
                break;                           //||enquanto info[j] nao for nulo, atribuimos o valor ao aux_pop[15]
            }                                   // ||temporariamente para comparar o valor da populacao atualmente analisada
            aux_pop[j-40] = info[j];
        }
        for(int n=0; n<15; n++){                //|| preenche os valores vazios com '0's, para facilitar a leitura
            if(aux_pop[n]==' '){
                aux_pop[n]='0';
            }
        }
        
        var = strcmp(aux_pop, pop);             //|| funcao que compara duas strings e retorna um valor > 0 caso o aux_pop,
        if(var>0){                             // || populacao que acabamos de analisar, seja maior que pop.

            for(int k=0; k<55; k++){
                if(info[k]==EOF){               //|| se for o caso, atribuimos logo a ult_info o nome da cidade 
                    break;                     // || e a popucacao contida na linha lida em info
                }
                ult_info[k]=info[k];   
            }

            for(int m=40; m<55; m++){           //|| atribuimos tambem o valor da populacao contido em info no vetor pop, sendo novamente 
                if(info[m]==EOF){              // || analisado nos proximos ciclos como maior populacao durante o loop
                    break;
                }
                pop[m-40]=info[m];   
            }

        }    
    }
    
    fclose(p);


    p = fopen(file_out, "w");                   //|| criamos um arquivo com o nome citado na main()  
    fputs(ult_info, p);                        // || atribuimos ao arquivo o vetor ult_info, que arma
    fclose(p);      
    
}
