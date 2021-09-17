#include<iostream>
using namespace std;
int main(){
    int n, o, soma = 0;
    cin >> n;
    for(int i = 0; i < n ; i++){
        cin >> o;
        soma += o;
    }
    cout << soma << endl;
}