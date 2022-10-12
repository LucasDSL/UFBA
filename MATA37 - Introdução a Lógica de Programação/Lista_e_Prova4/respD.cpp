#include <iostream>
using namespace std;
int main(){
    int o, d;
    cin >> o >> d;
    int v1[d];
    for (int i = 0; i < d; i++){
        cin >> v1[i];
    }
    
    if (o == 1 || o == 2){
        int v2[d];
        for (int i = 0; i < d; i++){
            cin >> v2[i];
        }
        
        if (o == 1){
            int vFinal[d];
            for (int i = 0; i < d; i++){
                vFinal[i] = v1[i] + v2[i];
                if (i == d - 1){
                    cout << vFinal[i] << endl;
                }
                else{
                    cout << vFinal[i] << " ";
                }
                
            }
        }
        else if (o == 2){
            int produto = 0;
            for (int i = 0; i<d; i++){
                produto = produto + (v1[i]*v2[i]);
            }
            cout << produto << endl;
        }
    }
    else{
        int escalar;
        cin >> escalar;
        int vetorRes[d];
        for (int i = 0; i < d; i++){
            vetorRes[i] = v1[i]*escalar;
        }
        for (int i = 0; i < d; i++){
            if (i == d - 1){
                cout << vetorRes[i] << endl;
            }
            else{
                cout << vetorRes[i] << " ";
            }
        }
    }
}