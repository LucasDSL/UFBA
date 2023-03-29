#include<iostream>
using namespace std;
int main(){
    int t, p;
    cin >> t;
    cin >> p;
    while (p < t){
        cin >> p;
    }
    if (p > t){
        cout << "ALARME" << endl;
    }
    else{
        cout << "O Havai pode dormir tranquilo" << endl;
    }
}