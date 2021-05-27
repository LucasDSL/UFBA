#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    char classificacao, ordem;
    cin >> n >> classificacao >> ordem;
    int lista[n];
    string listaNomes[n];
    for(int i = 0; i < n; i++){
        cin >> listaNomes[i] >> lista[i];
    }
    if (classificacao == 'N'){
        if (ordem == 'D'){
            for(int i = 0; i < n-1; i++){
            int maior = i;
            for(int j = i+1; j < n; j++){
                if(listaNomes[j][0] > listaNomes[maior][0]){
                    maior = j;
                }
                else if (listaNomes[j][0] == listaNomes[maior][0]){
                    if(listaNomes[j][1] > listaNomes[maior][1]){
                        maior = j;
                    }
                }
            }
            string auxN = listaNomes[i];
            listaNomes[i] = listaNomes[maior];
            listaNomes[maior] = auxN; 
            
            // Reorganiza a lista de numeros de acordo com a organização dos nomes.
            int aux = lista[i];
            lista[i] = lista[maior];
            lista[maior] = aux;
            }
        }
        else if(ordem == 'C'){
            for(int i = 0; i < n-1; i++){
            int menor = i;
            for(int j = i+1; j < n; j++){
                if(listaNomes[j][0] < listaNomes[menor][0]){
                    menor = j;
                }
                else if (listaNomes[j][0] == listaNomes[menor][0]){
                    if(listaNomes[j][1] < listaNomes[menor][1]){
                        menor = j;
                    }
                }
            }
            string auxN = listaNomes[i];
            listaNomes[i] = listaNomes[menor];
            listaNomes[menor] = auxN; 
            
            // Reorganiza a lista de numeros de acordo com a organização dos nomes.
            int aux = lista[i];
            lista[i] = lista[menor];
            lista[menor] = aux;
            }
        }
    }
    else if (classificacao == 'L'){
        if (ordem == 'D'){
            for(int i = 0; i < n-1; i++){
                int maior = i;
                for(int j = i+1; j < n; j++){
                    if(lista[j] >= lista[maior]){
                        maior = j;
                    }
                }
                int aux = lista[i];
                lista[i] = lista[maior];
                lista[maior] = aux;

                // Reorganiza a lista de nomes de acordo com a organização dos números.
                string auxN = listaNomes[i];
                listaNomes[i] = listaNomes[maior];
                listaNomes[maior] = auxN; 
            }
        }
        else if(ordem == 'C'){
            for(int i = 0; i < n-1; i++){
                int menor = i;
                for(int j = i+1; j < n; j++){
                    if(lista[j]  <= lista[menor]){
                        menor = j;
                    }
                }
                int aux = lista[i];
                lista[i] = lista[menor];
                lista[menor] = aux;

                // Reorganiza a lista de nomes de acordo com a organização dos números.
                string auxN = listaNomes[i];
                listaNomes[i] = listaNomes[menor];
                listaNomes[menor] = auxN; 
            }
        }
        
    }
    for(int i = 0; i < n; i++){
        cout << listaNomes[i] << " " << lista[i] << endl;
    }
}