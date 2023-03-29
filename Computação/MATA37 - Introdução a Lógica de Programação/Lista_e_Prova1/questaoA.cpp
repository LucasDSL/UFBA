#include <iostream>
using namespace std;
int main() {
  int D_Objetos, P_imprecisao, E;
  cin >> D_Objetos >> P_imprecisao;
  E = (D_Objetos * P_imprecisao) / (D_Objetos + P_imprecisao + 1);
  cout << E << endl;
}