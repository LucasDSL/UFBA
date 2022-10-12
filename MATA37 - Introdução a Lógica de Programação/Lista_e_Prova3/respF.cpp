#include<iostream>
using namespace std;
int main(){
    int i,j,cintos, pos, pos_atual, cinto_atual, cinto_forte = 0;
    cin >> cintos >> pos;
    for (i = 0; i < cintos; i++){
        cinto_atual = 0;
        for (j = 0; j < pos; j++){
            cin >> pos_atual;
            cinto_atual += pos_atual;
        }
        if (cinto_atual > cinto_forte){
            cinto_forte = cinto_atual;
        }
    }
    cout << cinto_forte << endl;
}