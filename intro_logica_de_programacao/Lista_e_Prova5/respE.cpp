#include <iostream>
using namespace std;

int main() {
  char mapa[10][10];
  for (int i = 0; i < 10; i++){
    for (int j = 0; j < 10; j++){
      cin >> mapa[i][j];
    }
  }

  for (int i = 0; i < 10; i++){
    for (int j = 0; j < 10; j++){
      if (i == 0){
        if (j == 0 && mapa[i][j] == 't'){
          if(mapa[i+1][j] == '*' || mapa[i][j + 1] == '*'){
            mapa[i][j] = 'p';
          }
        }
        else if (j == 9 && mapa[i][j] == 't'){
          if(mapa[i][j-1] == '*' || mapa[i+1][j] == '*'){
            mapa[i][j] = 'p';
          }
        }
        else{
          if(mapa[i][j] == 't'){
            if(mapa[i+1][j] == '*' || mapa[i][j-1] == '*' || mapa[i][j+1]=='*'){
              mapa[i][j] = 'p';
            }
          }
        }
      }
      else if(i == 9){
        if (j == 0 && mapa[i][j] == 't'){
          if(mapa[i-1][j] == '*' || mapa[i][j + 1] == '*'){
            mapa[i][j] = 'p';
          }
        }
        else if (j == 9 && mapa[i][j] == 't'){
          if(mapa[i][j-1] == '*' || mapa[i-1][j] == '*'){
            mapa[i][j] = 'p';
          }
        }
        else{
          if(mapa[i][j] == 't'){
            if(mapa[i-1][j] == '*' || mapa[i][j-1] == '*' || mapa[i][j+1]=='*'){
              mapa[i][j] = 'p';
            }
          }
        }
      }
      else if( (i != 0 && i!=9) && j == 0){
        if(mapa[i][j] == 't'){
          if(mapa[i+1][j] == '*' || mapa[i-1][j]=='*'|| mapa[i][j+1]=='*'){
            mapa[i][j] = 'p';
          }
        }
      }
      else if( (i != 0 && i!=9) && j == 9){
        if(mapa[i][j] == 't'){
          if(mapa[i+1][j] == '*' || mapa[i-1][j]=='*'|| mapa[i][j-1]=='*'){
            mapa[i][j] = 'p';
          }
        }
      }
      else{
        if (mapa[i][j]=='t'){
          if(mapa[i][j+1]=='*'||mapa[i][j-1]=='*'){
            mapa[i][j] = 'p';
          }
          if(mapa[i+1][j]=='*'||mapa[i-1][j]=='*'){
            mapa[i][j] = 'p';
          }
        }
      }
    }
  }
  for(int i =0; i < 10;i++){
    for(int j=0;j<10;j++){
      if(j==9){
        cout << mapa[i][j] << endl;
      }
      else{
        cout << mapa[i][j] << ' ';
      }
    }
  }

}