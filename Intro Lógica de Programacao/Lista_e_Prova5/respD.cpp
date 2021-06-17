#include<iostream>
using namespace std;
int main(){
  int n, t;
  cin >> n >> t;
  int espaco[n][n];
  //Lê o campo de batalha:
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      cin >> espaco[i][j];
    }
  }

  int l, c;
  int destruidas = 0;
  for(int i = 0; i < t; i++){
    cin >> l >> c;
    for(int j = l; j >= 0; j--){
      if(espaco[j][c] == 1){
        espaco[j][c] = 0;
        destruidas++;
        break;
      }
    }
  }

  cout << destruidas << endl;
}