//feito por Adrielle Andrade Carvalho
#include <stdlib.h>
#include <stdio.h>

int primo(int);
int produto(int, int, int, int);

int main() {
	int n1, n2, n3, n4;
	printf("Informe o primeiro numero:\n");
	scanf("%d", &n1);
	printf("Informe o segundo numero:\n");
	scanf("%d", &n2);
	printf("Informe o terceiro numero:\n");
	scanf("%d", &n3);	
	printf("Informe o quarto numero:\n");
	scanf("%d", &n4);
	if((primo(n1)==0) && (primo(n2)==0) && (primo(n3)==0) && (primo(n4)==0)){
		//se todos forem primos o produto será calculado
		printf("Produto: %d", produto(n1, n2, n3, n4));
	}else{
		//caso contrário, esta mensagem será impressa
		printf("A operacao nao pode ser executada\n");
	}
    return 0;
}

int primo(int n){// função que verifica se os numeros são primos
	int i;
	//para ser primo, o numero só pode ser dividido por si mesmo e por um
	//para fazer a verificação, observamos se o numero é dividido por qualquer x>=2 e menor ou igual a sua metade
	for(i=2;i<=n/2;i++){
		if(n%i==0){// se encontrarmos um divisor, a função retorna 1 
			return 1;
		}
	}
	return 0;// se não encontrarmos, o numero sera primo e a função retorna 0
}

int produto(int n1, int n2, int n3, int n4){//funcao que retorna o produto
	return n1 * n2 * n3 * n4;
}
