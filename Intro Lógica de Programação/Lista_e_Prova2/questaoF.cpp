#include<iostream>
using namespace std;
int main(){
    int A, D, P;
    cin >> A >> D >> P;
    int forca = A + D + P;
    double porcentagem = forca/110.00 * 100;
    if (forca > 110){
        cout << "Hum, parece que houve um erro" << endl;
    }
    else{
        if (porcentagem < 51){
        cout << "Seu pokemon nao fara progresso em batalhas" << endl;
        }
        else if (porcentagem >= 51 && porcentagem < 67){
        cout << "Seu pokemon esta acima da media" << endl;
        }
        else if (porcentagem >= 67 && porcentagem < 80){
            cout << "Seu pokemon certamente me chamou atencao" << endl;
        }
        else if (porcentagem >= 80 && porcentagem <= 100){
            cout << "Seu pokemon e uma maravilha" << endl;
        }
    }
}