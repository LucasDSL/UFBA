#include <iostream>
using namespace std;

int main(){
    int ano;
    cin >> ano;
    if (ano % 100 == 0){
        if (ano % 400 == 0){
            cout << "SIM" << endl;
        }
        else{
            cout << "NAO" << endl;
        }
    }
    else {
        if (ano % 4 == 0){
            cout << "SIM" << endl;
        }
        else{
            cout << "NAO" << endl;
        }
    }
}