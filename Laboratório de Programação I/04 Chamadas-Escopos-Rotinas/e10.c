#include<stdio.h>
#include<stdlib.h>

float calculaHospedagem(char tipoApartamento[15], int totalDiarias){
    float total;
    if(tipoApartamento == "Individual"){
        total = totalDiarias * 125;
    }
    else if(tipoApartamento == "Suíte Dupla"){
        total = totalDiarias * 140;
    }
    else if(tipoApartamento == "Suíte Tripla"){
        total = totalDiarias * 180;
    }

    if (totalDiarias >= 3){
        total -= total*0.15;
    }

    return total;
}

int main(){
    printf("%f\n", calculaHospedagem("Suíte Tripla", 5));
}