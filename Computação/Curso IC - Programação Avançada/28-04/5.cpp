#include <iostream>
#include <vector>

using namespace std;

int main() {
  pair<int, int> best_item;
  int total_itens;
  cin >> total_itens;
  vector<int> prices, damages;

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < total_itens; j++) {
      int current_item;
      cin >> current_item;
      if (i == 0) {
        prices.push_back(current_item);
      } else {
        damages.push_back(current_item);
      }
    }
  }
  int money;
  cin >> money;
  best_item.first = 0;
  best_item.second = 0;
  for (int i = 0; i < total_itens; i++) {
    if (money > prices[i] && damages[i] > best_item.second) {
      best_item.first = prices[i];
      best_item.second = damages[i];
    }
  }

  if (best_item.first == 0 && best_item.second == 0) {
    cout << "Yan Pobre" << endl;
  } else {
    cout << best_item.first << " " << best_item.second << endl;
  }
  return 0;
}