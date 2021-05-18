#include<iostream>

using namespace std;
int main(){
    int dr, gu, ar, dt;
    int cb;
    cin >> dr >> gu >> ar >> dt;
    cin >> cb;
    if ((dr * 5000 + gu*20 + ar*25 + dt*25) >= cb){
        cout << "VITORIA" << endl;
    }
    else{
        cout << "DERROTA" << endl;
    }
}