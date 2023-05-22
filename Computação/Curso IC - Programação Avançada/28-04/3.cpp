#include <iostream>
#include <vector>

using namespace std;

int main() {
  int rounds;
  cin >> rounds;
  vector<int> used, pointed;
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < rounds; j++) {
      int current_v;
      cin >> current_v;
      if (i == 0) {
        used.push_back(current_v);
      } else {
        pointed.push_back(current_v);
      }
    }
  }

  for (int i = 0; i < rounds; i++) {
    if ((pointed[i] == 0 || used[i] == 0) && i != rounds - 1) {
      cout << 0 << " ";
      continue;
    }
    if ((pointed[i] == 0 || used[i] == 0) && i == rounds - 1) {
      cout << 0 << endl;
      continue;
    }
    float current_percentage = ((float)pointed[i] / (float)used[i]) * 100;
    if (i == rounds - 1) {
      cout << (int)current_percentage << endl;
    } else if (i != rounds - 1) {
      cout << (int)current_percentage << " ";
    }
  }

  return 0;
}