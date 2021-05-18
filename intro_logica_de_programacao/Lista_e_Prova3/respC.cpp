#include<iostream>
using namespace std;
int main(){
    int q, s, hom = 0, mu = 0;
    cin >> q;
    for (int i = 0; i < q; i++){
        cin >> s;
        if (s == 1){
            hom++;
        }
        else if (s == 2){
            mu++;
        }
    }
    
    cout << hom << endl;
    cout << mu << endl;
}