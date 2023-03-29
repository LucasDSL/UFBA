// feito por Igor Dantas
// https://github.com/igordantasgf

#include <stdio.h>
#include <stdlib.h>
#define MAX 128 

typedef struct cardapio{ // Criação de uma estrutura de dados
	int code;            // código do produto
	char desc[MAX];      // string com a descrição do produto
	float preco;		 // preco
	int quant;           // quantidade de itens
}cardapio;

void cadastro(cardapio *, int);  //declaração das funções como tipo void;
void pedido(cardapio *, int);

int main(){
	int n;
	printf("\nDigite a quantiade de itens que o catalogo tera: \n")
	scanf("%d", &n);   // input da quantidade de itens a serem cadastrados
	cardapio lista[n]; // criação de uma lista do tipo cardapio, para que possa, nessa lista, armazenar várias estrututas de cada item da loja
	cadastro(lista, n);// execucao do cadastro de itens na lista de acordo com a quantidade n de itens no catalogo
	pedido(lista, n);  // execucao da funcao que solicita ao cliente os itens desejados 
	return 0;
}

void cadastro(cardapio *lista, int n){ // funcao que armazena os dados de um item no catalogo
	int i;							   // onde os parametros sao: a lista citada anteriormente e o número de itens a serem cadastrados
	for(i=0;i<n;i++){				   // loop para armazenar as informações de cada estrutura de acordo com o número n de itens, dado no parametro da funcao
		printf("\nC�digo: ");
		scanf("%d", &lista[i].code);      // armazena o codigo do produto na estrutura
		printf("\nDescri��o: ");
		scanf(" %[^\n]", &lista[i].desc); // armazena a descricao
		printf("\nPre�o: ");
		scanf("%f", &lista[i].preco);     // armazena o preco
		printf("\nQuantidade: ");
		scanf("%d", &lista[i].quant);     // armazena a quantidade no estoque
	}
}

void pedido(cardapio *lista, int n){ // funcao para calcular o valor da compra
	int cod=1, q=1, i,j;
	float total=0;            
	printf("\n\n Digite o codigo do item que desejas e a quantidade: \nDigite 0 para cancelar o caixa\n"); 
	    
	while(1){ // fluxo
		
		scanf("\n%d %d", &cod, &q);    // input de cod, codigo do produto desejado, e q, quantidade desejada do item.

		if((cod!=0) && (q>0)){         // se o cod não for zero e a quantidade for maior que 0, executamos a busca pelo produto normalmente                
				for(i=0;i<n;i++){          		// i<n, onde n sera o ultimo indice da lista
				
						if(cod == lista[i].code){  // se o codigo for igual ao codigo indiciado na lista[i]
								if(q>lista[i].quant){  	// e a quantidade q desejada for maior que a disponível no estoque, retornamos:
								printf("\nQuantidade fora de estoque!\n");
								break;             		// repetimos o fluxo
						}
						else{       // o else indica que a quantidade desejada esta disponivel no estoque
								total = total + lista[i].preco * q;  // somamos o valor total dos itens escolhidos ao total da compra
								lista[i].quant = lista[i].quant - q; // retiramos a quantiade desejada do estoque do item na loja
								printf("\nCarrinho: R$%.2f\n", total);
								break;  // repetimos o loop while
							}
						}
						printf("\nProduto nao encontrado.\n"); // se o codigo nao for encontrado na lista, chegamos a este printf,
				                                     // pois nao chegaremos a executar nenhum break
				}

		}else if((cod==0 && (q==0))){ // ou se o cod e q forem 0, encerremos o fluxo e retornamos o total
				printf("\nCaixa encerrado. Total: %.2f", total);
				break;                // encerremos o while e a funcao termina
		}
	}	
}

