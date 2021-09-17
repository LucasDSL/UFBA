#include<iostream>
#include<string>
using namespace std;
int main(){
    string numero; 
    cin >> numero; 
    for(int i = numero.length() - 1; i > -1; i--){
        if (i == 0){
            cout << numero[i] << endl;
        }
        else{
            cout << numero[i];
        }
    }
}