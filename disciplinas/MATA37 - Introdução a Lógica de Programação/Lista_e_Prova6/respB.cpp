#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n, t;
    cin >> n;
    int lista[n];
    int meio = ceil(n/2);
    for(int i = 0; i < n; i++){
        cin >> lista[i];
    }

    for(int j = 0; j < n-1; j++){
        int menor = j;
        for(int t = j+1; t < n; t++){
            if (lista[t] <= lista[menor]){
                menor = t;
            }
        }
        int aux = lista[j];
        lista[j] = lista[menor];
        lista[menor] = aux;
    }

    cout << lista[meio] << endl;
}