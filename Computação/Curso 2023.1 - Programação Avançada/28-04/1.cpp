#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> u, v, uv;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < n; j++) {
      int enter;
      cin >> enter;
      if (i == 0) {
        u.push_back(enter);
      } else if (i == 1) {
        v.push_back(enter);
      } else {
        uv.push_back(enter);
        if (u[j] + v[j] != uv[j]) {
          cout << "NOPE :(" << endl;
          return 0;
        }
      }
    }
  }
  cout << "OK" << endl;
}