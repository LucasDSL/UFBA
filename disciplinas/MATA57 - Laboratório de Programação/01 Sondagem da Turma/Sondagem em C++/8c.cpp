#include<iostream>
using namespace std;
int factorial_recursive(int num){
    if(num <= 1){
        return 1;
    }
    else{
        return num * factorial_recursive(num - 1);
    }
}
int main(){
    int numero; 
    cout << "Digite um número para receber seu fatorial: ";
    cin >> numero;
    cout << factorial_recursive(numero) << endl;
}