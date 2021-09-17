#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int bugs[n][m];
    int c_bugs = 0, c_tirosc = 0;

    
    for (int i = 0; i<n;i++){
        for(int j =0;j<m;j++){
            cin >> bugs[i][j];
            if (bugs[i][j] == 1){
              c_bugs++;
            }
        }
    }
    
    int t;
    cin >> t;
    int l, c;
    
    for (int i = 0; i < t; i++){
      cin >> l >> c;
      if (bugs[l - 1][c - 1] == 1){
        c_tirosc++;
      }

      if (c_tirosc == c_bugs){
        break;
      }
    }

    if (c_tirosc == c_bugs){
      cout << "HASTA LA VISTA BABY" << endl;
    }
    else{
      cout << "I'LL BE BACK" << endl;
    }
    
    
    
}