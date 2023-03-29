// Feito por Igor Dantas
// https://github.com/igordantasgf

//  Tipo de Apartamento	  Valor da Diária       Input
//     Individual	           R$ 125             0
//     Suíte Dupla	           R$ 140             1
//     Suíte Tripla            R$ 180             2

#include <stdio.h>
#include <stdlib.h>

float CalculaHospedagem(float tipo, float dias){ //tipo de suíte, como descrito acima
    if(dias>=3){         // aplicação de desconto caso a quantidade de dias seja >= 3

        if(tipo==0){ // suite individual

            printf("%.0f dias na suite individual custara: ", dias);
            printf("%.2f \n", 125*dias*0.85);

        }else if(tipo==1){ // suite dupla

            printf("%.0f dias na suite dupla custara: ", dias);
            printf("%.2f \n", 140*dias*0.85);

        }else if(tipo==2){ // suite tripla

            printf("%.0f dias na suite tripla custara: ", dias);
            printf("%.2f \n", 180*dias*0.85);

        }else{
            return -1;
        } 

    }else{              // Preço normal nos casos de dias < 3

        if(tipo==0){

            printf("%.0f dias na suite individual custara: ", dias);
            printf("%.2f \n", 125*dias);

        }else if(tipo==1){

            printf("%.0f dias na suite dupla custara: ", dias);
            printf("%.2f \n", 140*dias);

        }else if(tipo==2){

            printf("%.0f dias na suite tripla custara: ", dias);
            printf("%.2f \n", 180*dias);

        }else{
            return -1;
        } 
    }
}

int main(){
    CalculaHospedagem(0,2);
    CalculaHospedagem(0,3);
    CalculaHospedagem(1,2);
    CalculaHospedagem(1,3);
    CalculaHospedagem(2,2);
    CalculaHospedagem(2,3);
}
