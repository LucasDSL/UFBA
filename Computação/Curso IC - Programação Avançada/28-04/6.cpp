#include <iostream>
#include <vector>

using namespace std;

int main() {
  int t1, t2;
  cin >> t1 >> t2;

  vector<pair<int, int>> t1_km_cong(t1), t2_km_cong(t2);
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < t1; j++) {
      int current_value;
      cin >> current_value;
      if (i == 0) {
        t1_km_cong[j].first = current_value;
      } else {
        t1_km_cong[j].second = current_value;
      }
    }
  }

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < t2; j++) {
      int current_value;
      cin >> current_value;
      if (i == 0) {
        t2_km_cong[j].first = current_value;
      } else {
        t2_km_cong[j].second = current_value;
      }
    }
  }
  int time_traj1 = 0;
  int time_traj2 = 0;
  for (int i = 0; i < t1; i++) {
    time_traj1 += t1_km_cong[i].first * t1_km_cong[i].second;
  }

  for (int i = 0; i < t2; i++) {
    time_traj2 += t2_km_cong[i].first * t2_km_cong[i].second;
  }

  if (time_traj1 < time_traj2) {
    cout << "TRAJETO 1" << endl;
  } else {
    cout << "TRAJETO 2" << endl;
  }
}