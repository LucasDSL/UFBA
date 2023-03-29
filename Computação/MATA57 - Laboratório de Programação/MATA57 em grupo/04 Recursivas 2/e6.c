//feito por Alan Cristian Nunes da Silva
#include <stdio.h>
#include <stdlib.h>

//FunÃ§Ã£o recursiva para unir dois vetores
int unir(int *vet1, int *vet2, int *vet, int i1, int i2, int i, int n1, int n2){
	if(i==n1+n2){
		return 1;
	}else if(i1<n1 && i2<n2){
		if(vet1[i1]<vet2[i2]){
			vet[i]=vet1[i1];
			unir(vet1, vet2, vet, i1+1, i2, i+1, n1, n2);
		}else{
			vet[i]=vet2[i2];
			unir(vet1, vet2, vet, i1, i2+1, i+1, n1, n2);
		}
	}else if(i1<n1){
		vet[i]=vet1[i1];
		unir(vet1, vet2, vet, i1+1, i2, i+1, n1, n2);
	}else if(i2<n2){
		vet[i]=vet2[i2];
		unir(vet1, vet2, vet, i1, i2+1, i+1, n1, n2);
	}
	return 0;
}
// FunÃ§Ã£o main
int main(){
    // Entrada de dados
	int n1, n2, i;
	scanf("%d", &n1);
	scanf("%d", &n2);
	int vet1[n1], vet2[n2], vet[n1+n2];
    // Leitura do primeiro vetor
	for(i=0;i<n1;i++){
		scanf("%d", &vet1[i]);
	}
    //Leitura do segundo vetor
	for(i=0;i<n2;i++){
		scanf("%d", &vet2[i]);
	}
    //Chamada da funÃ§Ã£o recursiva
	unir(vet1, vet2, vet, 0, 0, 0, n1, n2);
    //Print do vetor uniÃ£o
	for(i=0;i<n1+n2;i++){
		printf("%d ", vet[i]);
	}	
	return 0;
}
