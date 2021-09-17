#include<iostream>
using namespace std;
int main(){
    int s;
    char p;
    cin >> p >> s ;
    while (p != '#'){
        if (s < 90){
            cout << p << " Internação" << endl;
        }
        else{
            cout << p << " Alta" << endl;
        }
        cin >> p >> s;
    }
}