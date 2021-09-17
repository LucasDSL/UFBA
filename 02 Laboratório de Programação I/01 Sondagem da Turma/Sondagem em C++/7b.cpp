#include<iostream>
using namespace std;
bool ePrimo(int num){
    if(num <= 1){
        return false;
    }
    for(int i = 2; i <= int(num/2); i++){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    int comeco, fim; 
    cout << "Digite o primeiro número da faixa: ";
    cin >> comeco;
    cout << "Digite o último número da faixa: ";
    cin >> fim;
    if(comeco > fim){
        for(int i = fim; i < comeco; i++){
            if(ePrimo(i)){
                cout << i << " ";
            }
        }
    }
    else{
        for(int i = comeco; i < fim; i++){
            if(ePrimo(i)){
                cout << i << " ";
            }
        }
    }

}