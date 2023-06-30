#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i[n];
    for (int a = 0; a < n; a++){
        cin >> i[a];
    }
    for (int a = n - 1; a > -1; a--){
        if (a != 0){
            cout << i[a] << " ";
        }
        else{
            cout << i[a] << endl;
        }
    }
    
}