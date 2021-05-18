#include<iostream>
using namespace std;
int main(){
    int n;
    long long k, h;
    cin >> n >> k;
    for (int i = 0; i < n; i++){
        cin >> h;
        if (h > k){
            break;
        }
    }
    if (h > k){
        cout << "Você não vai passar!!!" << endl;
    }
    else{
        cout << "Tá safe, o caminho é izi!!!" << endl;
    }
    
}