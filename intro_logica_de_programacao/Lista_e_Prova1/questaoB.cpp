#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double E, C;
    cin >> E;
    C = E / 1000.00;
    cout << fixed << setprecision(2) << C << endl;
}