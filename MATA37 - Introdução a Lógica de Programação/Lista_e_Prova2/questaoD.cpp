#include<iostream>
using namespace std;
int main(){
    char z, g, d, c;
    cin >> z >> g;
    cin >> d >> c;
    if ((z == 'e' && d =='d') || (z == 'd' && d == 'e')){
        cout << "Bloqueado" << endl;
    }
    else if ((z == 'e' && d == 'e') || (z == 'd' && d == 'd')){
        cout << "Driblado" << endl;
        if ((g == 'd' && c == 'e') || (g == 'e' && c == 'd')){
            cout << "...e o goleiro pega" << endl;
        }
        else{
            cout << "Gol" << endl;
        }
    }
}