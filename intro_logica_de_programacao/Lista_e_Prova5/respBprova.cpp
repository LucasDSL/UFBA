#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int mat[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> mat[i][j];
        }
    }
    int h, r;
    cin >> h >> r;
    int qh=0, qr=0, inter;
    inter = mat[h][r];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == h){
                qh += mat[i][j]; 
            }
            
            if(j == r){
                qr += mat[i][j];
            }
        }
    }
    if (r >= h){
        qh = qh - inter;
    }
    else{
        qr = qr - inter;
    }
    
    cout << "Harry " << qh << endl;
    cout << "Ron " << qr << endl;
}