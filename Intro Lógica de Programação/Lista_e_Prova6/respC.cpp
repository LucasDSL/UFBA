#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin >> n;
    string lista[n];
    for(int i = 0; i < n; i++){
        cin >> lista[i];
    }

    for(int j = 0; j < n-1; j++){
        int menor = j;
        for(int t = j+1; t < n; t++){
            if (lista[t].size() <= lista[menor].size()){
                menor = t;
            }
        }
        string aux = lista[j];
        lista[j] = lista[menor];
        lista[menor] = aux;
    }

    for(int i = 0; i < n; i++){
        cout << lista[i] << endl;
    }
}