#include<iostream>
using namespace std;
int main(){
    int xpneed;
    cin >> xpneed;
    int n; 
    cin >> n;
    int x[n], b[n];
    for (int i = 0; i < n; i++){
        cin >> x[i];
    }
    for (int i = 0; i < n; i++){
        cin >> b[i];
    }
    
    int soma = 0;
    for (int i = 0; i < n; i++){
        soma += (x[i] * b[i]);
    }
    
    if (soma >= xpneed){
        cout << "Upou de Nivel!"<<endl;
    }
    else{
        cout << "Nao foi dessa vez!"<<endl;
    }
}