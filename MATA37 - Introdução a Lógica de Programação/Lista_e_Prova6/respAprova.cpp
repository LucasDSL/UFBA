#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long lista[n];
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
        long long aux = lista[j];
        lista[j] = lista[menor];
        lista[menor] = aux;
    }

    for(int i = 0; i < n; i++){
        cout << lista[i] << endl;
    }
}