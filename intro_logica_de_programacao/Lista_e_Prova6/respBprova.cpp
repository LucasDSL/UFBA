#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int listah[n];
    int listam[n];
    for(int i = 0; i < n; i++){
        cin >> listah[i];
    }
    for(int i = 0; i < n; i++){
        cin >> listam[i];
    }

    for(int j = 0; j < n-1; j++){
        int menor = j;
        int maior = j;
        for(int t = j+1; t < n; t++){
            if (listam[t] <= listam[menor]){
                menor = t;
            }
            if(listah[t] >= listah[maior]){
                maior = t;
            }
        }
        int auxm = listam[j];
        listam[j] = listam[menor];
        listam[menor] = auxm;

        int auxh = listah[j];
        listah[j] = listah[maior];
        listah[maior] = auxh;
    }

    for(int i = 0; i < n; i++){
        cout << listah[i] << " " << listam[i] << endl;
    }
}