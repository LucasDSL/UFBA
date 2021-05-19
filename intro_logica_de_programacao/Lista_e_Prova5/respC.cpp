// snake

#include<iostream>
using namespace std;
int main(){
    int n, m;
    int ovos = 0;

    cin >> n >> m;
    int caminho[n][m];
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> caminho[i][j];
        }
    }
    
    for(int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            ovos += caminho[i][j];
            if (ovos < 0){
              ovos = 0;
            }
        }
    }
    
    if (ovos > 0){
        cout << ovos << endl;
    }
    else{
        cout << 0 << endl;
    }
}