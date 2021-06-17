#include<iostream>
using namespace std;

int main(){
    long long C, O, L, X, tempo, menor = 1000000000, H, M, S;

    cin >> C >> O >> L >> X;
    C = C / 4;
    O = O / 8;
    L = L / 2;
    X = X / 1;
    if (C < menor)
      menor = C;

    if (O < menor)
        menor = O;

    if (L < menor)
        menor = L;

    if (X < menor)
        menor = X;

    tempo = 1259 * menor;

    H = tempo / 3600;
    M = tempo / 60 - H * 60;
    S = tempo - H * 3600 - M * 60;

    cout << H << " h " << M << " m " << S << " s" << endl;
}