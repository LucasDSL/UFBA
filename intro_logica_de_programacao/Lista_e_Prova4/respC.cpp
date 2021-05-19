#include<iostream>
using namespace std;
int main(){
    int n, mi;
    cin >> n;
    int x[n];
    for (int i = 0; i < n; i++){
        cin >> x[i];
    }
    cin >> mi;
    int m = mi;
    bool died = false;
    for (int i = 0; i < n; i++){
        if (x[i] == 0){
            m = m;
        }
        else if (x[i] == 1){
            m = mi;
        }
        else if (x[i] >= 2){
            m = m - x[i];
        }
        
        if (m <= 0){
            died = true;
        }
    }
    
    if (died == true){
        cout << "You Died" << endl;
    }
    else{
        cout << "Yes, you can" << endl;
    }
}