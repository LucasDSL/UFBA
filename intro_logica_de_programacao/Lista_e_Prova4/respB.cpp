#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int lista[n], esmeralda;
    bool estaNaLista = false;
    for (int i = 0; i < n; i++){
        cin >> lista[i];
    }
    cin >> esmeralda;
    for (int i = 0; i < n; i++){
        if(lista[i] == esmeralda){
            estaNaLista = true;
        }
    }
    if (estaNaLista == true){
        cout << esmeralda << endl;
    }
    else{
        cout << -1 << endl;
    }
}