#include<iostream>
using namespace std;
int main(){
    int ano; 
    cin >> ano; 
    if (ano % 4 == 0){
        cout << "Ano bissexto detectado" << endl;
    }
    else{
        cout << "Ano bissexto não detectado" << endl;
    }
}