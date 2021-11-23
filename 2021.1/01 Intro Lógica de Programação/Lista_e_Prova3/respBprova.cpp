#include<iostream>
using namespace std;
int main(){
    int d, e, ataq, dia = 0;
    cin >> d >> e;
    for(int i = 1; i <= d; i++){
        cin >> ataq;
        e = e - ataq;
        if (e <= 0){
            dia = i;
            e = 100000;
        }
    }
    
    if (dia == 0){
        cout << "Resistiu" << endl;
    }
    else{
        cout << dia << endl;
    }
}