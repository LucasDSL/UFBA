#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int pessoas_possiveis = a * b;
    if (pessoas_possiveis > c){
        cout << "S" << endl;
    }
    else{
        cout << "N" << endl;
    }
}