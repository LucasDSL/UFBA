#include<stdlib.h>
#include<stdio.h>

typedef struct{
    int dinheiro;
}conta_corrente;

void depositar(conta_corrente conta, int dinheiro){
    conta.dinheiro +=  dinheiro;
}
int debitar(conta_corrente conta, int dinheiro){
    if(conta.dinheiro < dinheiro ){
        printf("Nao foi possivel realizar a operacao, sem fundos suficientes");
        return 0;
    }
    else{
        conta.dinheiro -= dinheiro;
    }
}

int main(){
    conta_corrente minha_conta;
    minha_conta.dinheiro = 0;
    depositar(minha_conta, 1000);
    // Fix the functions 
    printf("Meu dinheiro : %d", minha_conta.dinheiro);
}