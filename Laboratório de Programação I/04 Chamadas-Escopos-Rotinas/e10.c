#include<stdio.h>
#include<stdlib.h>
//Exercício 10 (The Huxley, 2021). Um belo hotel na praia tem apartamentos especialmente decorados e cobra os valores indicados na tabela a seguir. Com o fim do verão, o movimento caiu e o hotel resolveu oferecer 15% de desconto para hospedagens de 3 ou mais dias. Escreva uma função chamada CalculaHospedagem que receba como parâmetro o tipo de apartamento desejado e a quantidade de diárias, calcule e retorne o valor total a ser pago. Individual - 125 / Suíte Dupla - 140 / Suíte tripla - 180.
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
