#include<iostream>
using namespace std;
int main(){
    int n;
     cin >> n;
    int u[n], v[n], D[n];
    
    for (int i = 0; i < n; i++){
        cin >> u[i];
    }
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    for (int i = 0; i < n; i++){
        cin >> D[i];
    }
    
    bool possivel = false;
    for(int i = 0; i < n; i++){
        if (u[i] + v[i] == D[i]){
            possivel = true;
        }
        else{
            possivel = false;
            break;
        }
    }
    
    if (possivel == true){
        cout << "OK" << endl;
    }
    else{
        cout << "NOPE :(" << endl;
    }
}