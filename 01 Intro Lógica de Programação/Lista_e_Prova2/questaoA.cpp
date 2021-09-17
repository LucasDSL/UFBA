#include<iostream>
using namespace std;
int main(){
    int l1, l2, l3, p1, p2, p3;
    cin >> l1 >> p1;
    cin >> l2 >> p2;
    cin >> l3 >> p3;
    int pontosL = l1 + l2 + l3;
    int pontosP = p1 + p2 + p3;
    if (pontosL > pontosP){
        cout << "Lucas" << endl;
    }
    else if (pontosP > pontosL){
        cout << "Pedro" << endl;
    }
    else{
        cout << "Empate" << endl;
    }
}