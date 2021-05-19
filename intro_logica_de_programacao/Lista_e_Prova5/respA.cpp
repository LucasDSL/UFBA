#include<iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int a[n][m];
    int b[n][m];
    int c[n][m];
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> b[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            c[i][j] = a[i][j] - b[i][j];
        }
    }
    
    for (int i = 0; i < n;  i++){
        for (int j =0; j <m; j++){
            if (j == m - 1){
                cout << c[i][j] << endl;
            }
            else{
                cout << c[i][j] << " ";
            }
        }
    }
    
}