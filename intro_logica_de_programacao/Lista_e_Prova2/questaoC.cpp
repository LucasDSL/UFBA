#include<iostream>
using namespace std;
int main(){
    int C, c, X;
    cin >> C >> c >> X;
    C = C * C * C;
    c = c * c * c;
    int total_volume_me = X * c;
    if (total_volume_me >= C){
        cout << "Eh possivel" << endl;
    }
    else{
        cout << "!Eh possivel" << endl;
    }
}