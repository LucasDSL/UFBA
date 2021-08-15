#include<iostream>
using namespace std;
int main(){
    int lin_a, lin_b, col_a, col_b;
    cout << "Digite a quantidade de linhas da matriz A: ";
    cin >> lin_a;
    cout << "Digite a quantidade de colunas da matriz A: ";
    cin >> col_a;
    cout << "Digite a quantidade de linhas da matriz B: ";
    cin >> lin_b;
    cout << "Digite a quantidade de colunas da matriz B: ";
    cin >> col_b;
    int matA[lin_a][col_a], matB[lin_b][col_b];
    // Lendo matriz A:
    for(int i = 0; i < lin_a; i++){
        for(int j = 0; j < col_a; j++){
            cout << "Elemento [" << i << "]["<< j << "] da matriz A:";
            cin >> matA[i][j];
        }
    }
    // Lendo matriz B:
    for(int i = 0; i < lin_b; i++){
        for(int j = 0; j < col_b; j++){
            cout << "Elemento ["<< i << "][" << j << "] da matriz B:";
            cin >> matB[i][j];
        }
    }
    // Multiplicação de matrizes:
    int matriz_final[lin_a][col_b];
    for(int ia = 0; ia < lin_a; ia++){
        for(int jb = 0; jb < col_b; jb++){
            for(int col_a_lin_b = 0; col_a_lin_b < col_b; col_a_lin_b){
                matriz_final[ia][jb] += matA[ia][col_a_lin_b]*matB[col_a_lin_b][jb];
            }
        }
    }
    
    for(int i = 0; i < lin_a; i++){
        for(int j = 0; j < col_b; j++){
            if(j = col_b - 1){
                cout << matriz_final[i][j] << endl;
            }
            else {
                cout << matriz_final[i][j] << " ";
            }
        }
    }
}