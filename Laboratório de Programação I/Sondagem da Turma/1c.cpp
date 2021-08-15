#include<iostream>
#include<math.h>
using namespace std;
int main(){
    double a, b, c;
    cin >> a >> b >> c;
    double delta = b * b - 4 * a * c;
    if(delta == 0){
        cout << -b/(2*a) << endl;
    }
    else if (delta < 0){
        cout << "Não existem raízes reais" << endl;
    }
    else {
        cout << (-b + sqrt(delta))/ (2*a) << endl;
        cout << (-b - sqrt(delta))/ (2*a) << endl; 
    }
}