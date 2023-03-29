#include<iostream>
using namespace std;
int main(){
    int p;
    cin >> p;
    bool tem = false;
    int mat[10][10];
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            cin >> mat[i][j];
            if(mat[i][j] == p){
                tem = true;
            }
        }
    }
    if (tem == true){
        cout << "sim" << endl;
    }
    else{
        cout << "nao" << endl;
    }
    
    
}