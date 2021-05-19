#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int esferas[n];
    int presentes[7];
    for (int i = 0; i< 7; i++){
        presentes[i] = 0;
    }
    bool um = false, dois = false, tres = false, quatro = false;
    bool cinco = false, seis = false, sete = false;
    int contador = 0;
    for (int i = 0; i < n; i ++){
        cin >> esferas[n];
        if (esferas[n] == 1 && um == false){
            presentes[0] = 1;
            um = true;
            contador++;
        }
        if (esferas[n] == 2 && dois == false){
            presentes[1] = 2;
            dois = true;
            contador++;
        }
        if (esferas[n] == 3 && tres == false){
            presentes[2] = 3;
            tres = true;
            contador++;
        }
        if (esferas[n] == 4 && quatro == false){
            presentes[3] = 4;
            quatro = true;
            contador++;
        }
        if (esferas[n] == 5 && cinco == false){
            presentes[4] = 5;
            cinco = true;
            contador++;
        }
        if (esferas[n] == 6 && seis == false){
            presentes[5] = 6;
            seis = true;
            contador++;
        }
        if (esferas[n] == 7 && sete == false){
            presentes[6] = 7;
            sete = true;
            contador++;
        }
    }
    
    int contador2 = 0;
    for(int i = 0; i < 7; i++){
        if (presentes[i] != 0 && contador2 == contador){
            cout << presentes[i] << endl;
        }
        else if (presentes[i] != 0 && contador2 < contador){
            cout << presentes[i] << " ";
            contador2++;
        }
    }
    if (contador == 7){
        cout << "Saia Shenlong e realize o meu desejo" << endl;
    }
    else{
        cout << "Nao encontramos todas" << endl;
    }
}