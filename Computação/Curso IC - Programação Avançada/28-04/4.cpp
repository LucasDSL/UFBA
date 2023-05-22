#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> points, multiplier;

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < n; j++) {
      int current_value;
      cin >> current_value;
      if (i == 0) {
        points.push_back(current_value);
      } else {
        multiplier.push_back(current_value);
      }
    }
  }
  int total_xp = 0, xp_update, bonus;
  cin >> xp_update >> bonus;

  for (int i = 0; i < n; i++) {
    total_xp += (multiplier[i] + bonus) * points[i];
  }

  if (total_xp > xp_update) {
    cout << "Upou de Nivel!" << endl;
  } else {
    cout << "Nao foi dessa vez!" << endl;
  }
}